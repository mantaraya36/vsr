cmake_minimum_required (VERSION 2.8)
project (vsr)

set(GFX 1)
set(BUILD_GL2PS)

set(VSR_SRC
 src/vsr_mv.cpp
 src/vsr_frame.cpp
 src/vsr_file.cpp
)

if(GFX)

set(VSR_SRC ${VSR_SRC}
 src/vsr_camera.cpp
 src/vsr_interface.cpp
 src/vsr_gl.cpp
 externals/gl2ps/gl2ps.c
)
endif(GFX)

file(GLOB VSR_HEADERS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} VSR/*.h)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/VSR)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/externals)

#add_subdirectory(externals/gl2ps)
add_library(vsr ${VSR_SRC} ${VSR_HEADERS})


set(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/build/lib)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/build/bin)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake_modules")

if(GFX EQUAL 1)
find_package(GLV REQUIRED)
find_package(GLUT REQUIRED)
find_package(GLEW REQUIRED)
find_package(OpenGL REQUIRED)

set(VSR_INCLUDE_DIRS ${VSR_INCLUDE_DIRS}
  ${GLEW_INCLUDE_DIR}
  ${GLUT_INCLUDE_DIR}
  ${OPENGL_INCLUDE_DIR}
  ${GLV_INCLUDE_DIR}
#	ifeq ($(PLATFORM), linux)
#		LINK_LDFLAGS += -lGLV -lglut -lGLEW -lGLU -lGL
#		LDFLAGS += -L/usr/lib/x86_64-linux-gnu/
#	else ifeq ($(PLATFORM), macosx)
#		LINK_LDFLAGS += -lglv -framework OpenGL -framework GLUT
#	else ifeq ($(PLATFORM), windows)
#		LINK_LDFLAGS += -lglv -lglew32 -lglu32 -lopengl32 -lglut32
#	endif
)

set(VSR_LINK_LIBRARIES ${VSR_LINK_LIBRARIES}
${GLV_LIBRARY}
${GLUT_LIBRARY}
${GLEW_LIBRARY}
${OPENGL_LIBRARY}
)
endif(GFX EQUAL 1)
target_link_libraries(vsr ${VSR_LINK_LIBRARIES})

#--------------------------------------------------------------------------
# Examples
if((NOT NO_EXAMPLES) AND (GFX EQUAL 1))
# basics

set(EXAMPLE_DIRS basics boosts fields kinematics twists)
foreach(dir ${EXAMPLE_DIRS})
  file(GLOB EXAMPLE_FILES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} examples/${dir}/*.cpp)
  foreach(example ${EXAMPLE_FILES})
        get_filename_component(EXAMPLE_NAME ${example} NAME_WE) # Get name w/o extension
        add_executable(${dir}_${EXAMPLE_NAME} ${example})
        target_link_libraries(${dir}_${EXAMPLE_NAME} vsr ${VSR_LINK_LIBRARIES})
        if (apple)
          find_library(AUDIOUNIT_FM AudioUnit)
          target_link_libraries(${dir}_${EXAMPLE_NAME} ${AUDIOUNIT_FM})
        endif()
        target_link_libraries(${dir}_${EXAMPLE_NAME} ${EXAMPLE_LINUX_LIBS})
  endforeach(example)
endforeach(dir)

#if (GAMMA_FOUND)
#file(GLOB EXAMPLE_FILES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} examples/sound/*.cpp)
#foreach(example ${EXAMPLE_FILES})
#      get_filename_component(EXAMPLE_NAME ${example} NAME_WE) # Get name w/o extension
#      add_executable(${dir}_${EXAMPLE_NAME} ${example})
#      target_link_libraries(${dir}_${EXAMPLE_NAME} vsr ${ALLOCORE_LINK_LIBRARIES})
#      include_directories(${GAMMA_INCLUDE_DIRS})
#      if (apple)
#        find_library(AUDIOUNIT_FM AudioUnit)
#        target_link_libraries(sound_${EXAMPLE_NAME} ${AUDIOUNIT_FM})
#      endif()
#      target_link_libraries(${dir}_${EXAMPLE_NAME} ${EXAMPLE_LINUX_LIBS} ${GAMMA_LIBRARIES})
#endforeach(example)
#endif(GAMMA_FOUND)
endif((NOT NO_EXAMPLES) AND (GFX EQUAL 1))


# installation
install(DIRECTORY VSR/ DESTINATION ${CMAKE_INSTALL_PREFIX}/include/VSR)
install(TARGETS vsr DESTINATION ${CMAKE_INSTALL_PREFIX}/lib)
