		#ifndef TSD_H_INCLUDED
		#define TSD_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	 
inline Tsd gp (const Tsd& a, const Sca& b) { 
	return Tsd (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[4] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tsd, Sca> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tsd*)(&a),*(Sca*)(&b));
}			
		 
inline Ori_Flp gp (const Tsd& a, const Ori& b) { 
	return Ori_Flp (
 - a[1] * b[0],
 - a[2] * b[0],
 - a[3] * b[0],
a[0] * b[0] - a[4] * b[0],
 - a[1] * b[0],
 - a[2] * b[0],
 - a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tsd, Ori> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tsd*)(&a),*(Ori*)(&b));
}			
		 
inline Inf gp (const Tsd& a, const Inf& b) { 
	return Inf (
a[0] * b[0] + a[4] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tsd, Inf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tsd*)(&a),*(Inf*)(&b));
}			
		 
inline Tsd gp (const Tsd& a, const Mnk& b) { 
	return Tsd (
a[4] * b[0],
 - a[1] * b[0],
 - a[2] * b[0],
 - a[3] * b[0],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tsd, Mnk> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tsd*)(&a),*(Mnk*)(&b));
}			
		 
inline Hyp_Flp gp (const Tsd& a, const Hyp& b) { 
	return Hyp_Flp (
 - a[1] * b[0],
 - a[2] * b[0],
 - a[3] * b[0],
a[0] * b[0] - a[4] * b[0],
a[0] * b[1] + a[4] * b[1],
 - a[1] * b[0],
 - a[2] * b[0],
 - a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tsd, Hyp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tsd*)(&a),*(Hyp*)(&b));
}			
		 
inline Inf_Sph gp (const Tsd& a, const Pss& b) { 
	return Inf_Sph (
a[3] * b[0],
 - a[2] * b[0],
a[1] * b[0],
a[4] * b[0],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tsd, Pss> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tsd*)(&a),*(Pss*)(&b));
}			
		 
inline Pnt_Flp gp (const Tsd& a, const Pnt& b) { 
	return Pnt_Flp (
a[0] * b[0] - a[1] * b[3],
a[0] * b[1] - a[2] * b[3],
a[0] * b[2] - a[3] * b[3],
a[0] * b[3] - a[4] * b[3],
a[0] * b[4] - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] + a[4] * b[4],
 - a[1] * b[1] + a[2] * b[0],
 - a[1] * b[2] + a[3] * b[0],
 - a[2] * b[2] + a[3] * b[1],
 - a[1] * b[3] + a[4] * b[0],
 - a[2] * b[3] + a[4] * b[1],
 - a[3] * b[3] + a[4] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Tsd, Pnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tsd*)(&a),*(Pnt*)(&b));
}			
		 
inline Tvt gp (const Tsd& a, const Par& b) { 
	return Tvt (
a[1] * b[3] + a[2] * b[4] + a[3] * b[5] + a[4] * b[9],
a[0] * b[0] + a[1] * b[4] - a[2] * b[3],
a[0] * b[1] + a[1] * b[5] - a[3] * b[3],
a[0] * b[2] + a[2] * b[5] - a[3] * b[4],
a[0] * b[3] - a[4] * b[3],
a[0] * b[4] - a[4] * b[4],
a[0] * b[5] - a[4] * b[5],
a[0] * b[6] - a[1] * b[9] - a[2] * b[0] - a[3] * b[1] + a[4] * b[6],
a[0] * b[7] + a[1] * b[0] - a[2] * b[9] - a[3] * b[2] + a[4] * b[7],
a[0] * b[8] + a[1] * b[1] + a[2] * b[2] - a[3] * b[9] + a[4] * b[8],
a[0] * b[9] + a[1] * b[3] + a[2] * b[4] + a[3] * b[5],
a[1] * b[4] - a[2] * b[3] + a[4] * b[0],
a[1] * b[5] - a[3] * b[3] + a[4] * b[1],
a[2] * b[5] - a[3] * b[4] + a[4] * b[2],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tsd, Par> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tsd*)(&a),*(Par*)(&b));
}			
		 
inline Par_Dfp gp (const Tsd& a, const Cir& b) { 
	return Par_Dfp (
a[2] * b[0] + a[3] * b[1] + a[4] * b[6],
 - a[1] * b[0] + a[3] * b[2] + a[4] * b[7],
 - a[1] * b[1] - a[2] * b[2] + a[4] * b[8],
a[1] * b[6] + a[2] * b[7] + a[3] * b[8],
a[0] * b[0] - a[4] * b[0],
a[0] * b[1] - a[4] * b[1],
a[0] * b[2] - a[4] * b[2],
a[0] * b[3] + a[1] * b[7] - a[2] * b[6] - a[3] * b[9] + a[4] * b[3],
a[0] * b[4] + a[1] * b[8] + a[2] * b[9] - a[3] * b[6] + a[4] * b[4],
a[0] * b[5] - a[1] * b[9] + a[2] * b[8] - a[3] * b[7] + a[4] * b[5],
a[0] * b[6] + a[2] * b[0] + a[3] * b[1],
a[0] * b[7] - a[1] * b[0] + a[3] * b[2],
a[0] * b[8] - a[1] * b[1] - a[2] * b[2],
a[0] * b[9] - a[1] * b[2] + a[2] * b[1] - a[3] * b[0],
 - a[1] * b[2] + a[2] * b[1] - a[3] * b[0] + a[4] * b[9]
);
}			
		 
		
template<> inline MVBase gp_gen<Tsd, Cir> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tsd*)(&a),*(Cir*)(&b));
}			
		 
inline Pnt_Dfp gp (const Tsd& a, const Sph& b) { 
	return Pnt_Dfp (
a[3] * b[3] + a[4] * b[0],
 - a[2] * b[3] + a[4] * b[1],
a[1] * b[3] + a[4] * b[2],
a[2] * b[0] + a[3] * b[1],
 - a[1] * b[0] + a[3] * b[2],
 - a[1] * b[1] - a[2] * b[2],
a[0] * b[0] + a[3] * b[3],
a[0] * b[1] - a[2] * b[3],
a[0] * b[2] + a[1] * b[3],
a[0] * b[3] - a[4] * b[3],
a[0] * b[4] - a[1] * b[2] + a[2] * b[1] - a[3] * b[0] + a[4] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Tsd, Sph> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tsd*)(&a),*(Sph*)(&b));
}			
		 
inline Tvt gp (const Tsd& a, const Sta& b) { 
	return Tvt (
a[1] * b[3] + a[2] * b[4] + a[3] * b[5],
a[0] * b[0] + a[1] * b[4] - a[2] * b[3],
a[0] * b[1] + a[1] * b[5] - a[3] * b[3],
a[0] * b[2] + a[2] * b[5] - a[3] * b[4],
a[0] * b[3] - a[4] * b[3],
a[0] * b[4] - a[4] * b[4],
a[0] * b[5] - a[4] * b[5],
a[0] * b[6] - a[2] * b[0] - a[3] * b[1] + a[4] * b[6],
a[0] * b[7] + a[1] * b[0] - a[3] * b[2] + a[4] * b[7],
a[0] * b[8] + a[1] * b[1] + a[2] * b[2] + a[4] * b[8],
a[1] * b[3] + a[2] * b[4] + a[3] * b[5],
a[1] * b[4] - a[2] * b[3] + a[4] * b[0],
a[1] * b[5] - a[3] * b[3] + a[4] * b[1],
a[2] * b[5] - a[3] * b[4] + a[4] * b[2],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tsd, Sta> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tsd*)(&a),*(Sta*)(&b));
}			
		 
inline Drv gp (const Tsd& a, const Drv& b) { 
	return Drv (
a[0] * b[0] + a[4] * b[0],
a[0] * b[1] + a[4] * b[1],
a[0] * b[2] + a[4] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Tsd, Drv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tsd*)(&a),*(Drv*)(&b));
}			
		 
inline Drb gp (const Tsd& a, const Drb& b) { 
	return Drb (
a[0] * b[0] + a[4] * b[0],
a[0] * b[1] + a[4] * b[1],
a[0] * b[2] + a[4] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Tsd, Drb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tsd*)(&a),*(Drb*)(&b));
}			
		 
inline Drt gp (const Tsd& a, const Drt& b) { 
	return Drt (
a[0] * b[0] + a[4] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tsd, Drt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tsd*)(&a),*(Drt*)(&b));
}			
		 
inline Tnv_Flp gp (const Tsd& a, const Tnv& b) { 
	return Tnv_Flp (
a[1] * b[0] + a[2] * b[1] + a[3] * b[2],
a[1] * b[1] - a[2] * b[0],
a[1] * b[2] - a[3] * b[0],
a[2] * b[2] - a[3] * b[1],
a[0] * b[0] - a[4] * b[0],
a[0] * b[1] - a[4] * b[1],
a[0] * b[2] - a[4] * b[2],
a[1] * b[0] + a[2] * b[1] + a[3] * b[2],
a[1] * b[1] - a[2] * b[0],
a[1] * b[2] - a[3] * b[0],
a[2] * b[2] - a[3] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Tsd, Tnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tsd*)(&a),*(Tnv*)(&b));
}			
		 
inline Tnv_Dfp gp (const Tsd& a, const Tnb& b) { 
	return Tnv_Dfp (
a[2] * b[0] + a[3] * b[1],
 - a[1] * b[0] + a[3] * b[2],
 - a[1] * b[1] - a[2] * b[2],
a[0] * b[0] - a[4] * b[0],
a[0] * b[1] - a[4] * b[1],
a[0] * b[2] - a[4] * b[2],
a[2] * b[0] + a[3] * b[1],
 - a[1] * b[0] + a[3] * b[2],
 - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1] - a[3] * b[0],
 - a[1] * b[2] + a[2] * b[1] - a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tsd, Tnb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tsd*)(&a),*(Tnb*)(&b));
}			
		 
inline Ori_Dfp gp (const Tsd& a, const Tnt& b) { 
	return Ori_Dfp (
a[3] * b[0],
 - a[2] * b[0],
a[1] * b[0],
a[3] * b[0],
 - a[2] * b[0],
a[1] * b[0],
a[0] * b[0] - a[4] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tsd, Tnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tsd*)(&a),*(Tnt*)(&b));
}			
		 
inline Inf_Par gp (const Tsd& a, const Lin& b) { 
	return Inf_Par (
a[4] * b[3],
a[4] * b[4],
a[4] * b[5],
a[1] * b[3] + a[2] * b[4] + a[3] * b[5],
a[0] * b[0] + a[1] * b[4] - a[2] * b[3] + a[4] * b[0],
a[0] * b[1] + a[1] * b[5] - a[3] * b[3] + a[4] * b[1],
a[0] * b[2] + a[2] * b[5] - a[3] * b[4] + a[4] * b[2],
a[0] * b[3],
a[0] * b[4],
a[0] * b[5]
);
}			
		 
		
template<> inline MVBase gp_gen<Tsd, Lin> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tsd*)(&a),*(Lin*)(&b));
}			
		 
inline Inf_Cir gp (const Tsd& a, const Pln& b) { 
	return Inf_Cir (
a[4] * b[0],
a[4] * b[1],
a[4] * b[2],
a[2] * b[0] + a[3] * b[1],
 - a[1] * b[0] + a[3] * b[2],
 - a[1] * b[1] - a[2] * b[2],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] - a[3] * b[0] + a[4] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Tsd, Pln> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tsd*)(&a),*(Pln*)(&b));
}			
		 
inline Tsd gp (const Tsd& a, const Flp& b) { 
	return Tsd (
a[4] * b[3],
a[0] * b[0] - a[1] * b[3] + a[4] * b[0],
a[0] * b[1] - a[2] * b[3] + a[4] * b[1],
a[0] * b[2] - a[3] * b[3] + a[4] * b[2],
a[0] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Tsd, Flp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tsd*)(&a),*(Flp*)(&b));
}			
		 
inline Inf_Sph gp (const Tsd& a, const Dfp& b) { 
	return Inf_Sph (
a[0] * b[0] - a[3] * b[3] + a[4] * b[0],
a[0] * b[1] + a[2] * b[3] + a[4] * b[1],
a[0] * b[2] - a[1] * b[3] + a[4] * b[2],
a[0] * b[3],
a[4] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Tsd, Dfp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tsd*)(&a),*(Dfp*)(&b));
}			
		 
inline Inf_Cir gp (const Tsd& a, const Dll& b) { 
	return Inf_Cir (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3] - a[2] * b[0] - a[3] * b[1] + a[4] * b[3],
a[0] * b[4] + a[1] * b[0] - a[3] * b[2] + a[4] * b[4],
a[0] * b[5] + a[1] * b[1] + a[2] * b[2] + a[4] * b[5],
a[4] * b[0],
a[4] * b[1],
a[4] * b[2],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tsd, Dll> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tsd*)(&a),*(Dll*)(&b));
}			
		 
inline Inf_Par gp (const Tsd& a, const Dlp& b) { 
	return Inf_Par (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3] - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] + a[4] * b[3],
 - a[1] * b[1] + a[2] * b[0],
 - a[1] * b[2] + a[3] * b[0],
 - a[2] * b[2] + a[3] * b[1],
a[4] * b[0],
a[4] * b[1],
a[4] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Tsd, Dlp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tsd*)(&a),*(Dlp*)(&b));
}			
		 
inline Inf_Par gp (const Tsd& a, const Vec& b) { 
	return Inf_Par (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
 - a[1] * b[1] + a[2] * b[0],
 - a[1] * b[2] + a[3] * b[0],
 - a[2] * b[2] + a[3] * b[1],
a[4] * b[0],
a[4] * b[1],
a[4] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Tsd, Vec> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tsd*)(&a),*(Vec*)(&b));
}			
		 
inline Inf_Cir gp (const Tsd& a, const Biv& b) { 
	return Inf_Cir (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
 - a[2] * b[0] - a[3] * b[1],
a[1] * b[0] - a[3] * b[2],
a[1] * b[1] + a[2] * b[2],
a[4] * b[0],
a[4] * b[1],
a[4] * b[2],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tsd, Biv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tsd*)(&a),*(Biv*)(&b));
}			
		 
inline Inf_Sph gp (const Tsd& a, const Tri& b) { 
	return Inf_Sph (
 - a[3] * b[0],
a[2] * b[0],
 - a[1] * b[0],
a[0] * b[0],
a[4] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tsd, Tri> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tsd*)(&a),*(Tri*)(&b));
}			
		 
inline Pnt_Flp gp (const Tsd& a, const Aff& b) { 
	return Pnt_Flp (
a[0] * b[0] - a[1] * b[3],
a[0] * b[1] - a[2] * b[3],
a[0] * b[2] - a[3] * b[3],
a[0] * b[3] - a[4] * b[3],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
 - a[1] * b[1] + a[2] * b[0],
 - a[1] * b[2] + a[3] * b[0],
 - a[2] * b[2] + a[3] * b[1],
 - a[1] * b[3] + a[4] * b[0],
 - a[2] * b[3] + a[4] * b[1],
 - a[3] * b[3] + a[4] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Tsd, Aff> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tsd*)(&a),*(Aff*)(&b));
}			
		 
inline Tvt gp (const Tsd& a, const Afl& b) { 
	return Tvt (
a[1] * b[3] + a[2] * b[4] + a[3] * b[5],
a[0] * b[0] + a[1] * b[4] - a[2] * b[3],
a[0] * b[1] + a[1] * b[5] - a[3] * b[3],
a[0] * b[2] + a[2] * b[5] - a[3] * b[4],
a[0] * b[3] - a[4] * b[3],
a[0] * b[4] - a[4] * b[4],
a[0] * b[5] - a[4] * b[5],
 - a[2] * b[0] - a[3] * b[1],
a[1] * b[0] - a[3] * b[2],
a[1] * b[1] + a[2] * b[2],
a[1] * b[3] + a[2] * b[4] + a[3] * b[5],
a[1] * b[4] - a[2] * b[3] + a[4] * b[0],
a[1] * b[5] - a[3] * b[3] + a[4] * b[1],
a[2] * b[5] - a[3] * b[4] + a[4] * b[2],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tsd, Afl> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tsd*)(&a),*(Afl*)(&b));
}			
		 
inline Flp_Afp gp (const Tsd& a, const Afp& b) { 
	return Flp_Afp (
a[2] * b[0] + a[3] * b[1],
 - a[1] * b[0] + a[3] * b[2],
 - a[1] * b[1] - a[2] * b[2],
a[0] * b[0] - a[4] * b[0],
a[0] * b[1] - a[4] * b[1],
a[0] * b[2] - a[4] * b[2],
 - a[3] * b[3],
a[2] * b[3],
 - a[1] * b[3],
a[2] * b[0] + a[3] * b[1],
 - a[1] * b[0] + a[3] * b[2],
 - a[1] * b[1] - a[2] * b[2],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] - a[3] * b[0],
 - a[1] * b[2] + a[2] * b[1] - a[3] * b[0] + a[4] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Tsd, Afp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tsd*)(&a),*(Afp*)(&b));
}			
		 
inline Trt gp (const Tsd& a, const Dap& b) { 
	return Trt (
a[1] * b[0] + a[2] * b[1] + a[3] * b[2] + a[4] * b[3],
a[1] * b[1] - a[2] * b[0],
a[1] * b[2] - a[3] * b[0],
a[2] * b[2] - a[3] * b[1],
a[0] * b[0] - a[4] * b[0],
a[0] * b[1] - a[4] * b[1],
a[0] * b[2] - a[4] * b[2],
 - a[1] * b[3],
 - a[2] * b[3],
 - a[3] * b[3],
a[0] * b[3] + a[1] * b[0] + a[2] * b[1] + a[3] * b[2],
a[1] * b[1] - a[2] * b[0],
a[1] * b[2] - a[3] * b[0],
a[2] * b[2] - a[3] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Tsd, Dap> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tsd*)(&a),*(Dap*)(&b));
}			
		 
inline Pnt_Dfp gp (const Tsd& a, const Daf& b) { 
	return Pnt_Dfp (
a[3] * b[3] + a[4] * b[0],
 - a[2] * b[3] + a[4] * b[1],
a[1] * b[3] + a[4] * b[2],
a[2] * b[0] + a[3] * b[1],
 - a[1] * b[0] + a[3] * b[2],
 - a[1] * b[1] - a[2] * b[2],
a[0] * b[0] + a[3] * b[3],
a[0] * b[1] - a[2] * b[3],
a[0] * b[2] + a[1] * b[3],
a[0] * b[3] - a[4] * b[3],
 - a[1] * b[2] + a[2] * b[1] - a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tsd, Daf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tsd*)(&a),*(Daf*)(&b));
}			
		 
inline Par_Dfp gp (const Tsd& a, const Dal& b) { 
	return Par_Dfp (
a[2] * b[0] + a[3] * b[1] + a[4] * b[3],
 - a[1] * b[0] + a[3] * b[2] + a[4] * b[4],
 - a[1] * b[1] - a[2] * b[2] + a[4] * b[5],
a[1] * b[3] + a[2] * b[4] + a[3] * b[5],
a[0] * b[0] - a[4] * b[0],
a[0] * b[1] - a[4] * b[1],
a[0] * b[2] - a[4] * b[2],
a[1] * b[4] - a[2] * b[3],
a[1] * b[5] - a[3] * b[3],
a[2] * b[5] - a[3] * b[4],
a[0] * b[3] + a[2] * b[0] + a[3] * b[1],
a[0] * b[4] - a[1] * b[0] + a[3] * b[2],
a[0] * b[5] - a[1] * b[1] - a[2] * b[2],
 - a[1] * b[2] + a[2] * b[1] - a[3] * b[0],
 - a[1] * b[2] + a[2] * b[1] - a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tsd, Dal> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tsd*)(&a),*(Dal*)(&b));
}			
		 
inline Inf_Par gp (const Tsd& a, const Mnv& b) { 
	return Inf_Par (
a[4] * b[0],
a[4] * b[1],
a[4] * b[2],
a[1] * b[0] + a[2] * b[1] + a[3] * b[2],
a[1] * b[1] - a[2] * b[0],
a[1] * b[2] - a[3] * b[0],
a[2] * b[2] - a[3] * b[1],
a[0] * b[0],
a[0] * b[1],
a[0] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Tsd, Mnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tsd*)(&a),*(Mnv*)(&b));
}			
		 
inline Mtd gp (const Tsd& a, const Rot& b) { 
	return Mtd (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[1] * b[1] + a[2] * b[0] - a[3] * b[3],
a[1] * b[2] + a[2] * b[3] + a[3] * b[0],
a[4] * b[0],
a[4] * b[1],
a[4] * b[2],
a[4] * b[3],
a[1] * b[3] - a[2] * b[2] + a[3] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Tsd, Rot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tsd*)(&a),*(Rot*)(&b));
}			
		 
inline Mtd gp (const Tsd& a, const Mot& b) { 
	return Mtd (
a[0] * b[0],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4] + a[1] * b[0] - a[2] * b[1] - a[3] * b[2] + a[4] * b[4],
a[0] * b[5] + a[1] * b[1] + a[2] * b[0] - a[3] * b[3] + a[4] * b[5],
a[0] * b[6] + a[1] * b[2] + a[2] * b[3] + a[3] * b[0] + a[4] * b[6],
a[4] * b[0],
a[4] * b[1],
a[4] * b[2],
a[4] * b[3],
a[0] * b[7] + a[1] * b[3] - a[2] * b[2] + a[3] * b[1] + a[4] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Tsd, Mot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tsd*)(&a),*(Mot*)(&b));
}			
		 
inline Tsd gp (const Tsd& a, const Dil& b) { 
	return Tsd (
a[0] * b[0] + a[4] * b[1],
a[1] * b[0] - a[1] * b[1],
a[2] * b[0] - a[2] * b[1],
a[3] * b[0] - a[3] * b[1],
a[0] * b[1] + a[4] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tsd, Dil> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tsd*)(&a),*(Dil*)(&b));
}			
		 
inline Trt gp (const Tsd& a, const Trv& b) { 
	return Trt (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] + a[3] * b[3],
a[1] * b[2] - a[2] * b[1],
a[1] * b[3] - a[3] * b[1],
a[2] * b[3] - a[3] * b[2],
a[0] * b[1] - a[4] * b[1],
a[0] * b[2] - a[4] * b[2],
a[0] * b[3] - a[4] * b[3],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[1] * b[1] + a[2] * b[2] + a[3] * b[3] + a[4] * b[0],
a[1] * b[2] - a[2] * b[1],
a[1] * b[3] - a[3] * b[1],
a[2] * b[3] - a[3] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Tsd, Trv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tsd*)(&a),*(Trv*)(&b));
}			
		 
inline Mtd gp (const Tsd& a, const Mtd& b) { 
	return Mtd (
a[0] * b[0] + a[4] * b[7],
a[0] * b[1] + a[4] * b[8],
a[0] * b[2] + a[4] * b[9],
a[0] * b[3] + a[4] * b[10],
a[0] * b[4] + a[1] * b[0] - a[1] * b[7] - a[2] * b[1] + a[2] * b[8] - a[3] * b[2] + a[3] * b[9] + a[4] * b[4],
a[0] * b[5] + a[1] * b[1] - a[1] * b[8] + a[2] * b[0] - a[2] * b[7] - a[3] * b[3] + a[3] * b[10] + a[4] * b[5],
a[0] * b[6] + a[1] * b[2] - a[1] * b[9] + a[2] * b[3] - a[2] * b[10] + a[3] * b[0] - a[3] * b[7] + a[4] * b[6],
a[0] * b[7] + a[4] * b[0],
a[0] * b[8] + a[4] * b[1],
a[0] * b[9] + a[4] * b[2],
a[0] * b[10] + a[4] * b[3],
a[0] * b[11] + a[1] * b[3] - a[1] * b[10] - a[2] * b[2] + a[2] * b[9] + a[3] * b[1] - a[3] * b[8] + a[4] * b[11]
);
}			
		 
		
template<> inline MVBase gp_gen<Tsd, Mtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tsd*)(&a),*(Mtd*)(&b));
}			
		 
inline Tsd gp (const Tsd& a, const Trs& b) { 
	return Tsd (
a[0] * b[0],
a[0] * b[1] + a[1] * b[0] + a[4] * b[1],
a[0] * b[2] + a[2] * b[0] + a[4] * b[2],
a[0] * b[3] + a[3] * b[0] + a[4] * b[3],
a[4] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tsd, Trs> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tsd*)(&a),*(Trs*)(&b));
}			
		 
inline Rtc gp (const Tsd& a, const Rtc& b) { 
	return Rtc (
a[0] * b[0] - a[1] * b[3] + a[2] * b[5] + a[3] * b[6] + a[4] * b[11],
a[0] * b[1] - a[1] * b[5] - a[2] * b[3] + a[3] * b[7] + a[4] * b[12],
a[0] * b[2] - a[1] * b[6] - a[2] * b[7] - a[3] * b[3] + a[4] * b[13],
a[0] * b[3] - a[4] * b[3],
a[0] * b[4] - a[1] * b[0] + a[1] * b[11] - a[2] * b[1] + a[2] * b[12] - a[3] * b[2] + a[3] * b[13] + a[4] * b[4],
a[0] * b[5] - a[4] * b[5],
a[0] * b[6] - a[4] * b[6],
a[0] * b[7] - a[4] * b[7],
a[0] * b[8] - a[1] * b[1] + a[1] * b[12] + a[2] * b[0] - a[2] * b[11] - a[3] * b[14] + a[3] * b[15] + a[4] * b[8],
a[0] * b[9] - a[1] * b[2] + a[1] * b[13] + a[2] * b[14] - a[2] * b[15] + a[3] * b[0] - a[3] * b[11] + a[4] * b[9],
a[0] * b[10] - a[1] * b[14] + a[1] * b[15] - a[2] * b[2] + a[2] * b[13] + a[3] * b[1] - a[3] * b[12] + a[4] * b[10],
a[0] * b[11] - a[1] * b[3] + a[2] * b[5] + a[3] * b[6] + a[4] * b[0],
a[0] * b[12] - a[1] * b[5] - a[2] * b[3] + a[3] * b[7] + a[4] * b[1],
a[0] * b[13] - a[1] * b[6] - a[2] * b[7] - a[3] * b[3] + a[4] * b[2],
a[0] * b[14] - a[1] * b[7] + a[2] * b[6] - a[3] * b[5] + a[4] * b[15],
a[0] * b[15] - a[1] * b[7] + a[2] * b[6] - a[3] * b[5] + a[4] * b[14]
);
}			
		 
		
template<> inline MVBase gp_gen<Tsd, Rtc> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tsd*)(&a),*(Rtc*)(&b));
}			
		 
inline Mtt gp (const Tsd& a, const Mtt& b) { 
	return Mtt (
a[0] * b[0] + a[1] * b[4] + a[2] * b[5] + a[3] * b[6] + a[4] * b[10],
a[0] * b[1] + a[1] * b[5] - a[2] * b[4] + a[3] * b[14] + a[4] * b[11],
a[0] * b[2] + a[1] * b[6] - a[2] * b[14] - a[3] * b[4] + a[4] * b[12],
a[0] * b[3] + a[1] * b[14] + a[2] * b[6] - a[3] * b[5] + a[4] * b[13],
a[0] * b[4] - a[4] * b[4],
a[0] * b[5] - a[4] * b[5],
a[0] * b[6] - a[4] * b[6],
a[0] * b[7] + a[1] * b[0] - a[1] * b[10] - a[2] * b[1] + a[2] * b[11] - a[3] * b[2] + a[3] * b[12] + a[4] * b[7],
a[0] * b[8] + a[1] * b[1] - a[1] * b[11] + a[2] * b[0] - a[2] * b[10] - a[3] * b[3] + a[3] * b[13] + a[4] * b[8],
a[0] * b[9] + a[1] * b[2] - a[1] * b[12] + a[2] * b[3] - a[2] * b[13] + a[3] * b[0] - a[3] * b[10] + a[4] * b[9],
a[0] * b[10] + a[1] * b[4] + a[2] * b[5] + a[3] * b[6] + a[4] * b[0],
a[0] * b[11] + a[1] * b[5] - a[2] * b[4] + a[3] * b[14] + a[4] * b[1],
a[0] * b[12] + a[1] * b[6] - a[2] * b[14] - a[3] * b[4] + a[4] * b[2],
a[0] * b[13] + a[1] * b[14] + a[2] * b[6] - a[3] * b[5] + a[4] * b[3],
a[0] * b[14] - a[4] * b[14],
a[0] * b[15] + a[1] * b[3] - a[1] * b[13] - a[2] * b[2] + a[2] * b[12] + a[3] * b[1] - a[3] * b[11] + a[4] * b[15]
);
}			
		 
		
template<> inline MVBase gp_gen<Tsd, Mtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tsd*)(&a),*(Mtt*)(&b));
}			
		 
inline Mtt gp (const Tsd& a, const Rtt& b) { 
	return Mtt (
a[0] * b[0] + a[1] * b[4] + a[2] * b[5] + a[3] * b[6],
a[0] * b[1] + a[1] * b[5] - a[2] * b[4] + a[3] * b[7],
a[0] * b[2] + a[1] * b[6] - a[2] * b[7] - a[3] * b[4],
a[0] * b[3] + a[1] * b[7] + a[2] * b[6] - a[3] * b[5],
a[0] * b[4] - a[4] * b[4],
a[0] * b[5] - a[4] * b[5],
a[0] * b[6] - a[4] * b[6],
a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[1] * b[1] + a[2] * b[0] - a[3] * b[3],
a[1] * b[2] + a[2] * b[3] + a[3] * b[0],
a[1] * b[4] + a[2] * b[5] + a[3] * b[6] + a[4] * b[0],
a[1] * b[5] - a[2] * b[4] + a[3] * b[7] + a[4] * b[1],
a[1] * b[6] - a[2] * b[7] - a[3] * b[4] + a[4] * b[2],
a[1] * b[7] + a[2] * b[6] - a[3] * b[5] + a[4] * b[3],
a[0] * b[7] - a[4] * b[7],
a[1] * b[3] - a[2] * b[2] + a[3] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Tsd, Rtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tsd*)(&a),*(Rtt*)(&b));
}			
		 
inline Mtd gp (const Tsd& a, const Rtd& b) { 
	return Mtd (
a[0] * b[0] + a[4] * b[4],
a[0] * b[1] + a[4] * b[5],
a[0] * b[2] + a[4] * b[6],
a[0] * b[3] + a[4] * b[7],
a[1] * b[0] - a[1] * b[4] - a[2] * b[1] + a[2] * b[5] - a[3] * b[2] + a[3] * b[6],
a[1] * b[1] - a[1] * b[5] + a[2] * b[0] - a[2] * b[4] - a[3] * b[3] + a[3] * b[7],
a[1] * b[2] - a[1] * b[6] + a[2] * b[3] - a[2] * b[7] + a[3] * b[0] - a[3] * b[4],
a[0] * b[4] + a[4] * b[0],
a[0] * b[5] + a[4] * b[1],
a[0] * b[6] + a[4] * b[2],
a[0] * b[7] + a[4] * b[3],
a[1] * b[3] - a[1] * b[7] - a[2] * b[2] + a[2] * b[6] + a[3] * b[1] - a[3] * b[5]
);
}			
		 
		
template<> inline MVBase gp_gen<Tsd, Rtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tsd*)(&a),*(Rtd*)(&b));
}			
		 
inline Trt gp (const Tsd& a, const Tvd& b) { 
	return Trt (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] + a[3] * b[3] + a[4] * b[4],
a[1] * b[2] - a[2] * b[1],
a[1] * b[3] - a[3] * b[1],
a[2] * b[3] - a[3] * b[2],
a[0] * b[1] - a[4] * b[1],
a[0] * b[2] - a[4] * b[2],
a[0] * b[3] - a[4] * b[3],
a[1] * b[0] - a[1] * b[4],
a[2] * b[0] - a[2] * b[4],
a[3] * b[0] - a[3] * b[4],
a[0] * b[4] + a[1] * b[1] + a[2] * b[2] + a[3] * b[3] + a[4] * b[0],
a[1] * b[2] - a[2] * b[1],
a[1] * b[3] - a[3] * b[1],
a[2] * b[3] - a[3] * b[2]
);
}			
		 
		
template<> inline MVBase gp_gen<Tsd, Tvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tsd*)(&a),*(Tvd*)(&b));
}			
		 
inline Tsd gp (const Tsd& a, const Tsd& b) { 
	return Tsd (
a[0] * b[0] + a[4] * b[4],
a[0] * b[1] + a[1] * b[0] - a[1] * b[4] + a[4] * b[1],
a[0] * b[2] + a[2] * b[0] - a[2] * b[4] + a[4] * b[2],
a[0] * b[3] + a[3] * b[0] - a[3] * b[4] + a[4] * b[3],
a[0] * b[4] + a[4] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Tsd, Tsd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tsd*)(&a),*(Tsd*)(&b));
}			
		 
inline Tvt gp (const Tsd& a, const Trt& b) { 
	return Tvt (
a[0] * b[0] + a[1] * b[4] + a[2] * b[5] + a[3] * b[6] + a[4] * b[10],
a[0] * b[1] + a[1] * b[5] - a[2] * b[4] + a[4] * b[11],
a[0] * b[2] + a[1] * b[6] - a[3] * b[4] + a[4] * b[12],
a[0] * b[3] + a[2] * b[6] - a[3] * b[5] + a[4] * b[13],
a[0] * b[4] - a[4] * b[4],
a[0] * b[5] - a[4] * b[5],
a[0] * b[6] - a[4] * b[6],
a[0] * b[7] + a[1] * b[0] - a[1] * b[10] - a[2] * b[1] + a[2] * b[11] - a[3] * b[2] + a[3] * b[12] + a[4] * b[7],
a[0] * b[8] + a[1] * b[1] - a[1] * b[11] + a[2] * b[0] - a[2] * b[10] - a[3] * b[3] + a[3] * b[13] + a[4] * b[8],
a[0] * b[9] + a[1] * b[2] - a[1] * b[12] + a[2] * b[3] - a[2] * b[13] + a[3] * b[0] - a[3] * b[10] + a[4] * b[9],
a[0] * b[10] + a[1] * b[4] + a[2] * b[5] + a[3] * b[6] + a[4] * b[0],
a[0] * b[11] + a[1] * b[5] - a[2] * b[4] + a[4] * b[1],
a[0] * b[12] + a[1] * b[6] - a[3] * b[4] + a[4] * b[2],
a[0] * b[13] + a[2] * b[6] - a[3] * b[5] + a[4] * b[3],
a[1] * b[3] - a[1] * b[13] - a[2] * b[2] + a[2] * b[12] + a[3] * b[1] - a[3] * b[11]
);
}			
		 
		
template<> inline MVBase gp_gen<Tsd, Trt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tsd*)(&a),*(Trt*)(&b));
}			
		 
inline Mtt gp (const Tsd& a, const Rvd& b) { 
	return Mtt (
a[0] * b[0] + a[1] * b[4] + a[2] * b[5] + a[3] * b[6] + a[4] * b[7],
a[0] * b[1] + a[1] * b[5] - a[2] * b[4] + a[3] * b[11] + a[4] * b[8],
a[0] * b[2] + a[1] * b[6] - a[2] * b[11] - a[3] * b[4] + a[4] * b[9],
a[0] * b[3] + a[1] * b[11] + a[2] * b[6] - a[3] * b[5] + a[4] * b[10],
a[0] * b[4] - a[4] * b[4],
a[0] * b[5] - a[4] * b[5],
a[0] * b[6] - a[4] * b[6],
a[1] * b[0] - a[1] * b[7] - a[2] * b[1] + a[2] * b[8] - a[3] * b[2] + a[3] * b[9],
a[1] * b[1] - a[1] * b[8] + a[2] * b[0] - a[2] * b[7] - a[3] * b[3] + a[3] * b[10],
a[1] * b[2] - a[1] * b[9] + a[2] * b[3] - a[2] * b[10] + a[3] * b[0] - a[3] * b[7],
a[0] * b[7] + a[1] * b[4] + a[2] * b[5] + a[3] * b[6] + a[4] * b[0],
a[0] * b[8] + a[1] * b[5] - a[2] * b[4] + a[3] * b[11] + a[4] * b[1],
a[0] * b[9] + a[1] * b[6] - a[2] * b[11] - a[3] * b[4] + a[4] * b[2],
a[0] * b[10] + a[1] * b[11] + a[2] * b[6] - a[3] * b[5] + a[4] * b[3],
a[0] * b[11] - a[4] * b[11],
a[1] * b[3] - a[1] * b[10] - a[2] * b[2] + a[2] * b[9] + a[3] * b[1] - a[3] * b[8]
);
}			
		 
		
template<> inline MVBase gp_gen<Tsd, Rvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tsd*)(&a),*(Rvd*)(&b));
}			
		 
inline Mtt gp (const Tsd& a, const Tst& b) { 
	return Mtt (
a[0] * b[0] + a[1] * b[4] + a[2] * b[5] + a[3] * b[6] + a[4] * b[10],
a[0] * b[1] + a[1] * b[5] - a[2] * b[4] + a[3] * b[14] + a[4] * b[11],
a[0] * b[2] + a[1] * b[6] - a[2] * b[14] - a[3] * b[4] + a[4] * b[12],
a[0] * b[3] + a[1] * b[14] + a[2] * b[6] - a[3] * b[5] + a[4] * b[13],
a[0] * b[4] - a[4] * b[4],
a[0] * b[5] - a[4] * b[5],
a[0] * b[6] - a[4] * b[6],
a[0] * b[7] + a[1] * b[0] - a[1] * b[10] - a[2] * b[1] + a[2] * b[11] - a[3] * b[2] + a[3] * b[12] + a[4] * b[7],
a[0] * b[8] + a[1] * b[1] - a[1] * b[11] + a[2] * b[0] - a[2] * b[10] - a[3] * b[3] + a[3] * b[13] + a[4] * b[8],
a[0] * b[9] + a[1] * b[2] - a[1] * b[12] + a[2] * b[3] - a[2] * b[13] + a[3] * b[0] - a[3] * b[10] + a[4] * b[9],
a[0] * b[10] + a[1] * b[4] + a[2] * b[5] + a[3] * b[6] + a[4] * b[0],
a[0] * b[11] + a[1] * b[5] - a[2] * b[4] + a[3] * b[14] + a[4] * b[1],
a[0] * b[12] + a[1] * b[6] - a[2] * b[14] - a[3] * b[4] + a[4] * b[2],
a[0] * b[13] + a[1] * b[14] + a[2] * b[6] - a[3] * b[5] + a[4] * b[3],
a[0] * b[14] - a[4] * b[14],
a[1] * b[3] - a[1] * b[13] - a[2] * b[2] + a[2] * b[12] + a[3] * b[1] - a[3] * b[11]
);
}			
		 
		
template<> inline MVBase gp_gen<Tsd, Tst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tsd*)(&a),*(Tst*)(&b));
}			
		 
inline Tvt gp (const Tsd& a, const Tvt& b) { 
	return Tvt (
a[0] * b[0] + a[1] * b[4] + a[2] * b[5] + a[3] * b[6] + a[4] * b[10],
a[0] * b[1] + a[1] * b[5] - a[2] * b[4] + a[4] * b[11],
a[0] * b[2] + a[1] * b[6] - a[3] * b[4] + a[4] * b[12],
a[0] * b[3] + a[2] * b[6] - a[3] * b[5] + a[4] * b[13],
a[0] * b[4] - a[4] * b[4],
a[0] * b[5] - a[4] * b[5],
a[0] * b[6] - a[4] * b[6],
a[0] * b[7] + a[1] * b[0] - a[1] * b[10] - a[2] * b[1] + a[2] * b[11] - a[3] * b[2] + a[3] * b[12] + a[4] * b[7],
a[0] * b[8] + a[1] * b[1] - a[1] * b[11] + a[2] * b[0] - a[2] * b[10] - a[3] * b[3] + a[3] * b[13] + a[4] * b[8],
a[0] * b[9] + a[1] * b[2] - a[1] * b[12] + a[2] * b[3] - a[2] * b[13] + a[3] * b[0] - a[3] * b[10] + a[4] * b[9],
a[0] * b[10] + a[1] * b[4] + a[2] * b[5] + a[3] * b[6] + a[4] * b[0],
a[0] * b[11] + a[1] * b[5] - a[2] * b[4] + a[4] * b[1],
a[0] * b[12] + a[1] * b[6] - a[3] * b[4] + a[4] * b[2],
a[0] * b[13] + a[2] * b[6] - a[3] * b[5] + a[4] * b[3],
a[0] * b[14] + a[1] * b[3] - a[1] * b[13] - a[2] * b[2] + a[2] * b[12] + a[3] * b[1] - a[3] * b[11] + a[4] * b[14]
);
}			
		 
		
template<> inline MVBase gp_gen<Tsd, Tvt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tsd*)(&a),*(Tvt*)(&b));
}			
		 
inline Tvt gp (const Tsd& a, const Bst& b) { 
	return Tvt (
a[0] * b[0] + a[1] * b[4] + a[2] * b[5] + a[3] * b[6] + a[4] * b[10],
a[0] * b[1] + a[1] * b[5] - a[2] * b[4],
a[0] * b[2] + a[1] * b[6] - a[3] * b[4],
a[0] * b[3] + a[2] * b[6] - a[3] * b[5],
a[0] * b[4] - a[4] * b[4],
a[0] * b[5] - a[4] * b[5],
a[0] * b[6] - a[4] * b[6],
a[0] * b[7] + a[1] * b[0] - a[1] * b[10] - a[2] * b[1] - a[3] * b[2] + a[4] * b[7],
a[0] * b[8] + a[1] * b[1] + a[2] * b[0] - a[2] * b[10] - a[3] * b[3] + a[4] * b[8],
a[0] * b[9] + a[1] * b[2] + a[2] * b[3] + a[3] * b[0] - a[3] * b[10] + a[4] * b[9],
a[0] * b[10] + a[1] * b[4] + a[2] * b[5] + a[3] * b[6] + a[4] * b[0],
a[1] * b[5] - a[2] * b[4] + a[4] * b[1],
a[1] * b[6] - a[3] * b[4] + a[4] * b[2],
a[2] * b[6] - a[3] * b[5] + a[4] * b[3],
a[1] * b[3] - a[2] * b[2] + a[3] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Tsd, Bst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Tsd*)(&a),*(Bst*)(&b));
}			
		 
inline Tsd ip (const Tsd& a, const Tsd& b) { 
	return Tsd (
a[0] * b[0] + a[4] * b[4],
a[0] * b[1],
a[0] * b[2],
a[0] * b[3],
a[0] * b[4]
);
}			
		 
		
template<> inline MVBase ip_gen<Tsd, Tsd> (const MVBase& a, const MVBase& b) { 
	return ip(*(Tsd*)(&a),*(Tsd*)(&b));
}			
		  	
template<>
inline Tsd sp (const Tsd& tsd, const Rot& rot) {					
					
const Rot& t1 = rot;
const Tsd& t2 = tsd;
Mtd t3 (
t1[0] * t2[0],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[3] * t2[3],
t1[0] * t2[3] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[4],
t1[1] * t2[4],
t1[2] * t2[4],
t1[3] * t2[4],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1]
);
const Rot& t4 = rot;
Rot t5 = reverse( t4);
return Tsd (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3],
t3[4] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[11] * t5[3],
t3[4] * t5[1] + t3[5] * t5[0] - t3[6] * t5[3] + t3[11] * t5[2],
t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] - t3[11] * t5[1],
t3[7] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[10] * t5[3]
);

}
		
	
	  	
template<>
inline Tsd sp (const Tsd& tsd, const Mot& mot) {					
					
const Mot& t1 = mot;
const Tsd& t2 = tsd;
Mtd t3 (
t1[0] * t2[0],
t1[1] * t2[0],
t1[2] * t2[0],
t1[3] * t2[0],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3] + t1[4] * t2[0] - t1[4] * t2[4],
t1[0] * t2[2] - t1[1] * t2[1] + t1[3] * t2[3] + t1[5] * t2[0] - t1[5] * t2[4],
t1[0] * t2[3] - t1[2] * t2[1] - t1[3] * t2[2] + t1[6] * t2[0] - t1[6] * t2[4],
t1[0] * t2[4],
t1[1] * t2[4],
t1[2] * t2[4],
t1[3] * t2[4],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1] + t1[7] * t2[0] - t1[7] * t2[4]
);
const Mot& t4 = mot;
Mot t5 = reverse( t4);
return Tsd (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[7] + t3[4] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] - t3[10] * t5[7] - t3[11] * t5[3],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[7] + t3[3] * t5[6] + t3[4] * t5[1] + t3[5] * t5[0] - t3[6] * t5[3] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[7] + t3[10] * t5[6] + t3[11] * t5[2],
t3[0] * t5[6] - t3[1] * t5[7] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] + t3[7] * t5[6] - t3[8] * t5[7] - t3[9] * t5[4] - t3[10] * t5[5] - t3[11] * t5[1],
t3[7] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[10] * t5[3]
);

}
		
	
	  	
template<>
inline Tsd sp (const Tsd& tsd, const Dil& dil) {					
					
const Dil& t1 = dil;
const Tsd& t2 = tsd;
Tsd t3 (
t1[0] * t2[0] + t1[1] * t2[4],
t1[0] * t2[1] + t1[1] * t2[1],
t1[0] * t2[2] + t1[1] * t2[2],
t1[0] * t2[3] + t1[1] * t2[3],
t1[0] * t2[4] + t1[1] * t2[0]
);
const Dil& t4 = dil;
Dil t5 = reverse( t4);
return Tsd (
t3[0] * t5[0] + t3[4] * t5[1],
t3[1] * t5[0] - t3[1] * t5[1],
t3[2] * t5[0] - t3[2] * t5[1],
t3[3] * t5[0] - t3[3] * t5[1],
t3[0] * t5[1] + t3[4] * t5[0]
);

}
		
	
	  	
template<>
inline Tsd sp (const Tsd& tsd, const Trv& trv) {					
					
const Trv& t1 = trv;
const Tsd& t2 = tsd;
Trt t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] + t1[3] * t2[3],
t1[1] * t2[2] - t1[2] * t2[1],
t1[1] * t2[3] - t1[3] * t2[1],
t1[2] * t2[3] - t1[3] * t2[2],
t1[1] * t2[0] + t1[1] * t2[4],
t1[2] * t2[0] + t1[2] * t2[4],
t1[3] * t2[0] + t1[3] * t2[4],
t1[0] * t2[1],
t1[0] * t2[2],
t1[0] * t2[3],
t1[0] * t2[4] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3],
 - t1[1] * t2[2] + t1[2] * t2[1],
 - t1[1] * t2[3] + t1[3] * t2[1],
 - t1[2] * t2[3] + t1[3] * t2[2]
);
const Trv& t4 = trv;
Trv t5 = reverse( t4);
return Tsd (
t3[0] * t5[0] + t3[7] * t5[1] + t3[8] * t5[2] + t3[9] * t5[3],
t3[7] * t5[0],
t3[8] * t5[0],
t3[9] * t5[0],
t3[7] * t5[1] + t3[8] * t5[2] + t3[9] * t5[3] + t3[10] * t5[0]
);

}
		
	
	  	
template<>
inline Tsd sp (const Tsd& tsd, const Mtd& mtd) {					
					
const Mtd& t1 = mtd;
const Tsd& t2 = tsd;
Mtd t3 (
t1[0] * t2[0] + t1[7] * t2[4],
t1[1] * t2[0] + t1[8] * t2[4],
t1[2] * t2[0] + t1[9] * t2[4],
t1[3] * t2[0] + t1[10] * t2[4],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3] + t1[4] * t2[0] - t1[4] * t2[4] + t1[7] * t2[1] + t1[8] * t2[2] + t1[9] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[3] * t2[3] + t1[5] * t2[0] - t1[5] * t2[4] + t1[7] * t2[2] - t1[8] * t2[1] + t1[10] * t2[3],
t1[0] * t2[3] - t1[2] * t2[1] - t1[3] * t2[2] + t1[6] * t2[0] - t1[6] * t2[4] + t1[7] * t2[3] - t1[9] * t2[1] - t1[10] * t2[2],
t1[0] * t2[4] + t1[7] * t2[0],
t1[1] * t2[4] + t1[8] * t2[0],
t1[2] * t2[4] + t1[9] * t2[0],
t1[3] * t2[4] + t1[10] * t2[0],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1] + t1[8] * t2[3] - t1[9] * t2[2] + t1[10] * t2[1] + t1[11] * t2[0] - t1[11] * t2[4]
);
const Mtd& t4 = mtd;
Mtd t5 = reverse( t4);
return Tsd (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[7] * t5[7] - t3[8] * t5[8] - t3[9] * t5[9] - t3[10] * t5[10],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[11] + t3[4] * t5[0] - t3[4] * t5[7] - t3[5] * t5[1] + t3[5] * t5[8] - t3[6] * t5[2] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] - t3[10] * t5[11] - t3[11] * t5[3] + t3[11] * t5[10],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[11] + t3[3] * t5[6] + t3[4] * t5[1] - t3[4] * t5[8] + t3[5] * t5[0] - t3[5] * t5[7] - t3[6] * t5[3] + t3[6] * t5[10] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[11] + t3[10] * t5[6] + t3[11] * t5[2] - t3[11] * t5[9],
t3[0] * t5[6] - t3[1] * t5[11] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] - t3[4] * t5[9] + t3[5] * t5[3] - t3[5] * t5[10] + t3[6] * t5[0] - t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[11] - t3[9] * t5[4] - t3[10] * t5[5] - t3[11] * t5[1] + t3[11] * t5[8],
t3[0] * t5[7] - t3[1] * t5[8] - t3[2] * t5[9] - t3[3] * t5[10] + t3[7] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[10] * t5[3]
);

}
		
	
	  	
template<>
inline Tsd sp (const Tsd& tsd, const Trs& trs) {					
					
const Trs& t1 = trs;
const Tsd& t2 = tsd;
Tsd t3 (
t1[0] * t2[0],
t1[0] * t2[1] + t1[1] * t2[0] - t1[1] * t2[4],
t1[0] * t2[2] + t1[2] * t2[0] - t1[2] * t2[4],
t1[0] * t2[3] + t1[3] * t2[0] - t1[3] * t2[4],
t1[0] * t2[4]
);
const Trs& t4 = trs;
Trs t5 = reverse( t4);
return Tsd (
t3[0] * t5[0],
t3[0] * t5[1] + t3[1] * t5[0] + t3[4] * t5[1],
t3[0] * t5[2] + t3[2] * t5[0] + t3[4] * t5[2],
t3[0] * t5[3] + t3[3] * t5[0] + t3[4] * t5[3],
t3[4] * t5[0]
);

}
		
	
	  	
template<>
inline Tsd sp (const Tsd& tsd, const Rtc& rtc) {					
					
const Rtc& t1 = rtc;
const Tsd& t2 = tsd;
Rtc t3 (
t1[0] * t2[0] + t1[3] * t2[1] + t1[5] * t2[2] + t1[6] * t2[3] + t1[11] * t2[4],
t1[1] * t2[0] + t1[3] * t2[2] - t1[5] * t2[1] + t1[7] * t2[3] + t1[12] * t2[4],
t1[2] * t2[0] + t1[3] * t2[3] - t1[6] * t2[1] - t1[7] * t2[2] + t1[13] * t2[4],
t1[3] * t2[0] + t1[3] * t2[4],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3] + t1[4] * t2[0] - t1[4] * t2[4] + t1[11] * t2[1] + t1[12] * t2[2] + t1[13] * t2[3],
t1[5] * t2[0] + t1[5] * t2[4],
t1[6] * t2[0] + t1[6] * t2[4],
t1[7] * t2[0] + t1[7] * t2[4],
t1[0] * t2[2] - t1[1] * t2[1] + t1[8] * t2[0] - t1[8] * t2[4] + t1[11] * t2[2] - t1[12] * t2[1] + t1[14] * t2[3] + t1[15] * t2[3],
t1[0] * t2[3] - t1[2] * t2[1] + t1[9] * t2[0] - t1[9] * t2[4] + t1[11] * t2[3] - t1[13] * t2[1] - t1[14] * t2[2] - t1[15] * t2[2],
t1[1] * t2[3] - t1[2] * t2[2] + t1[10] * t2[0] - t1[10] * t2[4] + t1[12] * t2[3] - t1[13] * t2[2] + t1[14] * t2[1] + t1[15] * t2[1],
t1[0] * t2[4] - t1[3] * t2[1] - t1[5] * t2[2] - t1[6] * t2[3] + t1[11] * t2[0],
t1[1] * t2[4] - t1[3] * t2[2] + t1[5] * t2[1] - t1[7] * t2[3] + t1[12] * t2[0],
t1[2] * t2[4] - t1[3] * t2[3] + t1[6] * t2[1] + t1[7] * t2[2] + t1[13] * t2[0],
t1[5] * t2[3] - t1[6] * t2[2] + t1[7] * t2[1] + t1[14] * t2[0] + t1[15] * t2[4],
 - t1[5] * t2[3] + t1[6] * t2[2] - t1[7] * t2[1] + t1[14] * t2[4] + t1[15] * t2[0]
);
const Rtc& t4 = rtc;
Rtc t5 = reverse( t4);
return Tsd (
t3[0] * t5[0] + t3[1] * t5[1] + t3[2] * t5[2] - t3[3] * t5[4] - t3[4] * t5[3] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[10] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[7] + t3[11] * t5[11] + t3[12] * t5[12] + t3[13] * t5[13] - t3[14] * t5[14] - t3[15] * t5[15],
t3[0] * t5[4] - t3[1] * t5[8] - t3[2] * t5[9] - t3[4] * t5[0] + t3[4] * t5[11] - t3[8] * t5[1] + t3[8] * t5[12] - t3[9] * t5[2] + t3[9] * t5[13] + t3[10] * t5[14] - t3[10] * t5[15] + t3[11] * t5[4] - t3[12] * t5[8] - t3[13] * t5[9] - t3[14] * t5[10] - t3[15] * t5[10],
t3[0] * t5[8] + t3[1] * t5[4] - t3[2] * t5[10] - t3[4] * t5[1] + t3[4] * t5[12] + t3[8] * t5[0] - t3[8] * t5[11] - t3[9] * t5[14] + t3[9] * t5[15] - t3[10] * t5[2] + t3[10] * t5[13] + t3[11] * t5[8] + t3[12] * t5[4] - t3[13] * t5[10] + t3[14] * t5[9] + t3[15] * t5[9],
t3[0] * t5[9] + t3[1] * t5[10] + t3[2] * t5[4] - t3[4] * t5[2] + t3[4] * t5[13] + t3[8] * t5[14] - t3[8] * t5[15] + t3[9] * t5[0] - t3[9] * t5[11] + t3[10] * t5[1] - t3[10] * t5[12] + t3[11] * t5[9] + t3[12] * t5[10] + t3[13] * t5[4] - t3[14] * t5[8] - t3[15] * t5[8],
t3[0] * t5[11] + t3[1] * t5[12] + t3[2] * t5[13] + t3[3] * t5[4] - t3[4] * t5[3] - t3[5] * t5[8] - t3[6] * t5[9] - t3[7] * t5[10] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[7] + t3[11] * t5[0] + t3[12] * t5[1] + t3[13] * t5[2] - t3[14] * t5[15] - t3[15] * t5[14]
);

}
		
	
	  	
template<>
inline Tsd sp (const Tsd& tsd, const Mtt& mtt) {					
					
const Mtt& t1 = mtt;
const Tsd& t2 = tsd;
Mtt t3 (
t1[0] * t2[0] + t1[4] * t2[1] + t1[5] * t2[2] + t1[6] * t2[3] + t1[10] * t2[4],
t1[1] * t2[0] + t1[4] * t2[2] - t1[5] * t2[1] + t1[11] * t2[4] + t1[14] * t2[3],
t1[2] * t2[0] + t1[4] * t2[3] - t1[6] * t2[1] + t1[12] * t2[4] - t1[14] * t2[2],
t1[3] * t2[0] + t1[5] * t2[3] - t1[6] * t2[2] + t1[13] * t2[4] + t1[14] * t2[1],
t1[4] * t2[0] + t1[4] * t2[4],
t1[5] * t2[0] + t1[5] * t2[4],
t1[6] * t2[0] + t1[6] * t2[4],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3] + t1[7] * t2[0] - t1[7] * t2[4] + t1[10] * t2[1] + t1[11] * t2[2] + t1[12] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[3] * t2[3] + t1[8] * t2[0] - t1[8] * t2[4] + t1[10] * t2[2] - t1[11] * t2[1] + t1[13] * t2[3],
t1[0] * t2[3] - t1[2] * t2[1] - t1[3] * t2[2] + t1[9] * t2[0] - t1[9] * t2[4] + t1[10] * t2[3] - t1[12] * t2[1] - t1[13] * t2[2],
t1[0] * t2[4] - t1[4] * t2[1] - t1[5] * t2[2] - t1[6] * t2[3] + t1[10] * t2[0],
t1[1] * t2[4] - t1[4] * t2[2] + t1[5] * t2[1] + t1[11] * t2[0] - t1[14] * t2[3],
t1[2] * t2[4] - t1[4] * t2[3] + t1[6] * t2[1] + t1[12] * t2[0] + t1[14] * t2[2],
t1[3] * t2[4] - t1[5] * t2[3] + t1[6] * t2[2] + t1[13] * t2[0] - t1[14] * t2[1],
t1[14] * t2[0] + t1[14] * t2[4],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1] + t1[11] * t2[3] - t1[12] * t2[2] + t1[13] * t2[1] + t1[15] * t2[0] - t1[15] * t2[4]
);
const Mtt& t4 = mtt;
Mtt t5 = reverse( t4);
return Tsd (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] - t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13] - t3[14] * t5[15] - t3[15] * t5[14],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] - t3[3] * t5[15] + t3[7] * t5[0] - t3[7] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] + t3[10] * t5[7] + t3[11] * t5[8] + t3[12] * t5[9] - t3[13] * t5[15] - t3[15] * t5[3] + t3[15] * t5[13],
t3[0] * t5[8] - t3[1] * t5[7] + t3[2] * t5[15] + t3[3] * t5[9] + t3[7] * t5[1] - t3[7] * t5[11] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[9] * t5[13] + t3[10] * t5[8] - t3[11] * t5[7] + t3[12] * t5[15] + t3[13] * t5[9] + t3[15] * t5[2] - t3[15] * t5[12],
t3[0] * t5[9] - t3[1] * t5[15] - t3[2] * t5[7] - t3[3] * t5[8] + t3[7] * t5[2] - t3[7] * t5[12] + t3[8] * t5[3] - t3[8] * t5[13] + t3[9] * t5[0] - t3[9] * t5[10] + t3[10] * t5[9] - t3[11] * t5[15] - t3[12] * t5[7] - t3[13] * t5[8] - t3[15] * t5[1] + t3[15] * t5[11],
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[13] - t3[4] * t5[7] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3] + t3[14] * t5[15] - t3[15] * t5[14]
);

}
		
	
	  	
template<>
inline Tsd sp (const Tsd& tsd, const Rtt& rtt) {					
					
const Rtt& t1 = rtt;
const Tsd& t2 = tsd;
Mtt t3 (
t1[0] * t2[0] + t1[4] * t2[1] + t1[5] * t2[2] + t1[6] * t2[3],
t1[1] * t2[0] + t1[4] * t2[2] - t1[5] * t2[1] + t1[7] * t2[3],
t1[2] * t2[0] + t1[4] * t2[3] - t1[6] * t2[1] - t1[7] * t2[2],
t1[3] * t2[0] + t1[5] * t2[3] - t1[6] * t2[2] + t1[7] * t2[1],
t1[4] * t2[0] + t1[4] * t2[4],
t1[5] * t2[0] + t1[5] * t2[4],
t1[6] * t2[0] + t1[6] * t2[4],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[3] * t2[3],
t1[0] * t2[3] - t1[2] * t2[1] - t1[3] * t2[2],
t1[0] * t2[4] - t1[4] * t2[1] - t1[5] * t2[2] - t1[6] * t2[3],
t1[1] * t2[4] - t1[4] * t2[2] + t1[5] * t2[1] - t1[7] * t2[3],
t1[2] * t2[4] - t1[4] * t2[3] + t1[6] * t2[1] + t1[7] * t2[2],
t1[3] * t2[4] - t1[5] * t2[3] + t1[6] * t2[2] - t1[7] * t2[1],
t1[7] * t2[0] + t1[7] * t2[4],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1]
);
const Rtt& t4 = rtt;
Rtt t5 = reverse( t4);
return Tsd (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] - t3[15] * t5[7],
t3[7] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[15] * t5[3],
t3[7] * t5[1] + t3[8] * t5[0] - t3[9] * t5[3] + t3[15] * t5[2],
t3[7] * t5[2] + t3[8] * t5[3] + t3[9] * t5[0] - t3[15] * t5[1],
t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3] - t3[15] * t5[7]
);

}
		
	
	  	
template<>
inline Tsd sp (const Tsd& tsd, const Rtd& rtd) {					
					
const Rtd& t1 = rtd;
const Tsd& t2 = tsd;
Mtd t3 (
t1[0] * t2[0] + t1[4] * t2[4],
t1[1] * t2[0] + t1[5] * t2[4],
t1[2] * t2[0] + t1[6] * t2[4],
t1[3] * t2[0] + t1[7] * t2[4],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3] + t1[4] * t2[1] + t1[5] * t2[2] + t1[6] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[3] * t2[3] + t1[4] * t2[2] - t1[5] * t2[1] + t1[7] * t2[3],
t1[0] * t2[3] - t1[2] * t2[1] - t1[3] * t2[2] + t1[4] * t2[3] - t1[6] * t2[1] - t1[7] * t2[2],
t1[0] * t2[4] + t1[4] * t2[0],
t1[1] * t2[4] + t1[5] * t2[0],
t1[2] * t2[4] + t1[6] * t2[0],
t1[3] * t2[4] + t1[7] * t2[0],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1] + t1[5] * t2[3] - t1[6] * t2[2] + t1[7] * t2[1]
);
const Rtd& t4 = rtd;
Rtd t5 = reverse( t4);
return Tsd (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[7] * t5[4] - t3[8] * t5[5] - t3[9] * t5[6] - t3[10] * t5[7],
t3[4] * t5[0] - t3[4] * t5[4] - t3[5] * t5[1] + t3[5] * t5[5] - t3[6] * t5[2] + t3[6] * t5[6] - t3[11] * t5[3] + t3[11] * t5[7],
t3[4] * t5[1] - t3[4] * t5[5] + t3[5] * t5[0] - t3[5] * t5[4] - t3[6] * t5[3] + t3[6] * t5[7] + t3[11] * t5[2] - t3[11] * t5[6],
t3[4] * t5[2] - t3[4] * t5[6] + t3[5] * t5[3] - t3[5] * t5[7] + t3[6] * t5[0] - t3[6] * t5[4] - t3[11] * t5[1] + t3[11] * t5[5],
t3[0] * t5[4] - t3[1] * t5[5] - t3[2] * t5[6] - t3[3] * t5[7] + t3[7] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[10] * t5[3]
);

}
		
	
	  	
template<>
inline Tsd sp (const Tsd& tsd, const Tvd& tvd) {					
					
const Tvd& t1 = tvd;
const Tsd& t2 = tsd;
Trt t3 (
t1[0] * t2[0] + t1[1] * t2[1] + t1[2] * t2[2] + t1[3] * t2[3] + t1[4] * t2[4],
t1[1] * t2[2] - t1[2] * t2[1],
t1[1] * t2[3] - t1[3] * t2[1],
t1[2] * t2[3] - t1[3] * t2[2],
t1[1] * t2[0] + t1[1] * t2[4],
t1[2] * t2[0] + t1[2] * t2[4],
t1[3] * t2[0] + t1[3] * t2[4],
t1[0] * t2[1] + t1[4] * t2[1],
t1[0] * t2[2] + t1[4] * t2[2],
t1[0] * t2[3] + t1[4] * t2[3],
t1[0] * t2[4] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[4] * t2[0],
 - t1[1] * t2[2] + t1[2] * t2[1],
 - t1[1] * t2[3] + t1[3] * t2[1],
 - t1[2] * t2[3] + t1[3] * t2[2]
);
const Tvd& t4 = tvd;
Tvd t5 = reverse( t4);
return Tsd (
t3[0] * t5[0] + t3[7] * t5[1] + t3[8] * t5[2] + t3[9] * t5[3] + t3[10] * t5[4],
t3[7] * t5[0] - t3[7] * t5[4],
t3[8] * t5[0] - t3[8] * t5[4],
t3[9] * t5[0] - t3[9] * t5[4],
t3[0] * t5[4] + t3[7] * t5[1] + t3[8] * t5[2] + t3[9] * t5[3] + t3[10] * t5[0]
);

}
		
	
	  	
template<>
inline Tsd sp (const Tsd& tsd, const Trt& trt) {					
					
const Trt& t1 = trt;
const Tsd& t2 = tsd;
Tvt t3 (
t1[0] * t2[0] + t1[4] * t2[1] + t1[5] * t2[2] + t1[6] * t2[3] + t1[10] * t2[4],
t1[1] * t2[0] + t1[4] * t2[2] - t1[5] * t2[1] + t1[11] * t2[4],
t1[2] * t2[0] + t1[4] * t2[3] - t1[6] * t2[1] + t1[12] * t2[4],
t1[3] * t2[0] + t1[5] * t2[3] - t1[6] * t2[2] + t1[13] * t2[4],
t1[4] * t2[0] + t1[4] * t2[4],
t1[5] * t2[0] + t1[5] * t2[4],
t1[6] * t2[0] + t1[6] * t2[4],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3] + t1[7] * t2[0] - t1[7] * t2[4] + t1[10] * t2[1] + t1[11] * t2[2] + t1[12] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[3] * t2[3] + t1[8] * t2[0] - t1[8] * t2[4] + t1[10] * t2[2] - t1[11] * t2[1] + t1[13] * t2[3],
t1[0] * t2[3] - t1[2] * t2[1] - t1[3] * t2[2] + t1[9] * t2[0] - t1[9] * t2[4] + t1[10] * t2[3] - t1[12] * t2[1] - t1[13] * t2[2],
t1[0] * t2[4] - t1[4] * t2[1] - t1[5] * t2[2] - t1[6] * t2[3] + t1[10] * t2[0],
t1[1] * t2[4] - t1[4] * t2[2] + t1[5] * t2[1] + t1[11] * t2[0],
t1[2] * t2[4] - t1[4] * t2[3] + t1[6] * t2[1] + t1[12] * t2[0],
t1[3] * t2[4] - t1[5] * t2[3] + t1[6] * t2[2] + t1[13] * t2[0],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1] + t1[11] * t2[3] - t1[12] * t2[2] + t1[13] * t2[1]
);
const Trt& t4 = trt;
Trt t5 = reverse( t4);
return Tsd (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] - t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[7] * t5[0] - t3[7] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] + t3[10] * t5[7] + t3[11] * t5[8] + t3[12] * t5[9] - t3[14] * t5[3] + t3[14] * t5[13],
t3[0] * t5[8] - t3[1] * t5[7] + t3[3] * t5[9] + t3[7] * t5[1] - t3[7] * t5[11] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[9] * t5[13] + t3[10] * t5[8] - t3[11] * t5[7] + t3[13] * t5[9] + t3[14] * t5[2] - t3[14] * t5[12],
t3[0] * t5[9] - t3[2] * t5[7] - t3[3] * t5[8] + t3[7] * t5[2] - t3[7] * t5[12] + t3[8] * t5[3] - t3[8] * t5[13] + t3[9] * t5[0] - t3[9] * t5[10] + t3[10] * t5[9] - t3[12] * t5[7] - t3[13] * t5[8] - t3[14] * t5[1] + t3[14] * t5[11],
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[13] - t3[4] * t5[7] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3]
);

}
		
	
	  	
template<>
inline Tsd sp (const Tsd& tsd, const Rvd& rvd) {					
					
const Rvd& t1 = rvd;
const Tsd& t2 = tsd;
Mtt t3 (
t1[0] * t2[0] + t1[4] * t2[1] + t1[5] * t2[2] + t1[6] * t2[3] + t1[7] * t2[4],
t1[1] * t2[0] + t1[4] * t2[2] - t1[5] * t2[1] + t1[8] * t2[4] + t1[11] * t2[3],
t1[2] * t2[0] + t1[4] * t2[3] - t1[6] * t2[1] + t1[9] * t2[4] - t1[11] * t2[2],
t1[3] * t2[0] + t1[5] * t2[3] - t1[6] * t2[2] + t1[10] * t2[4] + t1[11] * t2[1],
t1[4] * t2[0] + t1[4] * t2[4],
t1[5] * t2[0] + t1[5] * t2[4],
t1[6] * t2[0] + t1[6] * t2[4],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3] + t1[7] * t2[1] + t1[8] * t2[2] + t1[9] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[3] * t2[3] + t1[7] * t2[2] - t1[8] * t2[1] + t1[10] * t2[3],
t1[0] * t2[3] - t1[2] * t2[1] - t1[3] * t2[2] + t1[7] * t2[3] - t1[9] * t2[1] - t1[10] * t2[2],
t1[0] * t2[4] - t1[4] * t2[1] - t1[5] * t2[2] - t1[6] * t2[3] + t1[7] * t2[0],
t1[1] * t2[4] - t1[4] * t2[2] + t1[5] * t2[1] + t1[8] * t2[0] - t1[11] * t2[3],
t1[2] * t2[4] - t1[4] * t2[3] + t1[6] * t2[1] + t1[9] * t2[0] + t1[11] * t2[2],
t1[3] * t2[4] - t1[5] * t2[3] + t1[6] * t2[2] + t1[10] * t2[0] - t1[11] * t2[1],
t1[11] * t2[0] + t1[11] * t2[4],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1] + t1[8] * t2[3] - t1[9] * t2[2] + t1[10] * t2[1]
);
const Rvd& t4 = rvd;
Rvd t5 = reverse( t4);
return Tsd (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[7] - t3[11] * t5[8] - t3[12] * t5[9] - t3[13] * t5[10] - t3[15] * t5[11],
t3[7] * t5[0] - t3[7] * t5[7] - t3[8] * t5[1] + t3[8] * t5[8] - t3[9] * t5[2] + t3[9] * t5[9] - t3[15] * t5[3] + t3[15] * t5[10],
t3[7] * t5[1] - t3[7] * t5[8] + t3[8] * t5[0] - t3[8] * t5[7] - t3[9] * t5[3] + t3[9] * t5[10] + t3[15] * t5[2] - t3[15] * t5[9],
t3[7] * t5[2] - t3[7] * t5[9] + t3[8] * t5[3] - t3[8] * t5[10] + t3[9] * t5[0] - t3[9] * t5[7] - t3[15] * t5[1] + t3[15] * t5[8],
t3[0] * t5[7] - t3[1] * t5[8] - t3[2] * t5[9] - t3[3] * t5[10] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3] - t3[15] * t5[11]
);

}
		
	
	  	
template<>
inline Tsd sp (const Tsd& tsd, const Tst& tst) {					
					
const Tst& t1 = tst;
const Tsd& t2 = tsd;
Mtt t3 (
t1[0] * t2[0] + t1[4] * t2[1] + t1[5] * t2[2] + t1[6] * t2[3] + t1[10] * t2[4],
t1[1] * t2[0] + t1[4] * t2[2] - t1[5] * t2[1] + t1[11] * t2[4] + t1[14] * t2[3],
t1[2] * t2[0] + t1[4] * t2[3] - t1[6] * t2[1] + t1[12] * t2[4] - t1[14] * t2[2],
t1[3] * t2[0] + t1[5] * t2[3] - t1[6] * t2[2] + t1[13] * t2[4] + t1[14] * t2[1],
t1[4] * t2[0] + t1[4] * t2[4],
t1[5] * t2[0] + t1[5] * t2[4],
t1[6] * t2[0] + t1[6] * t2[4],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3] + t1[7] * t2[0] - t1[7] * t2[4] + t1[10] * t2[1] + t1[11] * t2[2] + t1[12] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[3] * t2[3] + t1[8] * t2[0] - t1[8] * t2[4] + t1[10] * t2[2] - t1[11] * t2[1] + t1[13] * t2[3],
t1[0] * t2[3] - t1[2] * t2[1] - t1[3] * t2[2] + t1[9] * t2[0] - t1[9] * t2[4] + t1[10] * t2[3] - t1[12] * t2[1] - t1[13] * t2[2],
t1[0] * t2[4] - t1[4] * t2[1] - t1[5] * t2[2] - t1[6] * t2[3] + t1[10] * t2[0],
t1[1] * t2[4] - t1[4] * t2[2] + t1[5] * t2[1] + t1[11] * t2[0] - t1[14] * t2[3],
t1[2] * t2[4] - t1[4] * t2[3] + t1[6] * t2[1] + t1[12] * t2[0] + t1[14] * t2[2],
t1[3] * t2[4] - t1[5] * t2[3] + t1[6] * t2[2] + t1[13] * t2[0] - t1[14] * t2[1],
t1[14] * t2[0] + t1[14] * t2[4],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1] + t1[11] * t2[3] - t1[12] * t2[2] + t1[13] * t2[1]
);
const Tst& t4 = tst;
Tst t5 = reverse( t4);
return Tsd (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] - t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13] - t3[15] * t5[14],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[7] * t5[0] - t3[7] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] + t3[10] * t5[7] + t3[11] * t5[8] + t3[12] * t5[9] - t3[15] * t5[3] + t3[15] * t5[13],
t3[0] * t5[8] - t3[1] * t5[7] + t3[3] * t5[9] + t3[7] * t5[1] - t3[7] * t5[11] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[9] * t5[13] + t3[10] * t5[8] - t3[11] * t5[7] + t3[13] * t5[9] + t3[15] * t5[2] - t3[15] * t5[12],
t3[0] * t5[9] - t3[2] * t5[7] - t3[3] * t5[8] + t3[7] * t5[2] - t3[7] * t5[12] + t3[8] * t5[3] - t3[8] * t5[13] + t3[9] * t5[0] - t3[9] * t5[10] + t3[10] * t5[9] - t3[12] * t5[7] - t3[13] * t5[8] - t3[15] * t5[1] + t3[15] * t5[11],
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[13] - t3[4] * t5[7] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3] - t3[15] * t5[14]
);

}
		
	
	  	
template<>
inline Tsd sp (const Tsd& tsd, const Tvt& tvt) {					
					
const Tvt& t1 = tvt;
const Tsd& t2 = tsd;
Tvt t3 (
t1[0] * t2[0] + t1[4] * t2[1] + t1[5] * t2[2] + t1[6] * t2[3] + t1[10] * t2[4],
t1[1] * t2[0] + t1[4] * t2[2] - t1[5] * t2[1] + t1[11] * t2[4],
t1[2] * t2[0] + t1[4] * t2[3] - t1[6] * t2[1] + t1[12] * t2[4],
t1[3] * t2[0] + t1[5] * t2[3] - t1[6] * t2[2] + t1[13] * t2[4],
t1[4] * t2[0] + t1[4] * t2[4],
t1[5] * t2[0] + t1[5] * t2[4],
t1[6] * t2[0] + t1[6] * t2[4],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3] + t1[7] * t2[0] - t1[7] * t2[4] + t1[10] * t2[1] + t1[11] * t2[2] + t1[12] * t2[3],
t1[0] * t2[2] - t1[1] * t2[1] + t1[3] * t2[3] + t1[8] * t2[0] - t1[8] * t2[4] + t1[10] * t2[2] - t1[11] * t2[1] + t1[13] * t2[3],
t1[0] * t2[3] - t1[2] * t2[1] - t1[3] * t2[2] + t1[9] * t2[0] - t1[9] * t2[4] + t1[10] * t2[3] - t1[12] * t2[1] - t1[13] * t2[2],
t1[0] * t2[4] - t1[4] * t2[1] - t1[5] * t2[2] - t1[6] * t2[3] + t1[10] * t2[0],
t1[1] * t2[4] - t1[4] * t2[2] + t1[5] * t2[1] + t1[11] * t2[0],
t1[2] * t2[4] - t1[4] * t2[3] + t1[6] * t2[1] + t1[12] * t2[0],
t1[3] * t2[4] - t1[5] * t2[3] + t1[6] * t2[2] + t1[13] * t2[0],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1] + t1[11] * t2[3] - t1[12] * t2[2] + t1[13] * t2[1] + t1[14] * t2[0] - t1[14] * t2[4]
);
const Tvt& t4 = tvt;
Tvt t5 = reverse( t4);
return Tsd (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] - t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] - t3[3] * t5[14] + t3[7] * t5[0] - t3[7] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] + t3[10] * t5[7] + t3[11] * t5[8] + t3[12] * t5[9] - t3[13] * t5[14] - t3[14] * t5[3] + t3[14] * t5[13],
t3[0] * t5[8] - t3[1] * t5[7] + t3[2] * t5[14] + t3[3] * t5[9] + t3[7] * t5[1] - t3[7] * t5[11] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[9] * t5[13] + t3[10] * t5[8] - t3[11] * t5[7] + t3[12] * t5[14] + t3[13] * t5[9] + t3[14] * t5[2] - t3[14] * t5[12],
t3[0] * t5[9] - t3[1] * t5[14] - t3[2] * t5[7] - t3[3] * t5[8] + t3[7] * t5[2] - t3[7] * t5[12] + t3[8] * t5[3] - t3[8] * t5[13] + t3[9] * t5[0] - t3[9] * t5[10] + t3[10] * t5[9] - t3[11] * t5[14] - t3[12] * t5[7] - t3[13] * t5[8] - t3[14] * t5[1] + t3[14] * t5[11],
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[13] - t3[4] * t5[7] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3]
);

}
		
	
	  	
template<>
inline Tsd sp (const Tsd& tsd, const Bst& bst) {					
					
const Bst& t1 = bst;
const Tsd& t2 = tsd;
Tvt t3 (
t1[0] * t2[0] + t1[4] * t2[1] + t1[5] * t2[2] + t1[6] * t2[3] + t1[10] * t2[4],
t1[1] * t2[0] + t1[4] * t2[2] - t1[5] * t2[1],
t1[2] * t2[0] + t1[4] * t2[3] - t1[6] * t2[1],
t1[3] * t2[0] + t1[5] * t2[3] - t1[6] * t2[2],
t1[4] * t2[0] + t1[4] * t2[4],
t1[5] * t2[0] + t1[5] * t2[4],
t1[6] * t2[0] + t1[6] * t2[4],
t1[0] * t2[1] + t1[1] * t2[2] + t1[2] * t2[3] + t1[7] * t2[0] - t1[7] * t2[4] + t1[10] * t2[1],
t1[0] * t2[2] - t1[1] * t2[1] + t1[3] * t2[3] + t1[8] * t2[0] - t1[8] * t2[4] + t1[10] * t2[2],
t1[0] * t2[3] - t1[2] * t2[1] - t1[3] * t2[2] + t1[9] * t2[0] - t1[9] * t2[4] + t1[10] * t2[3],
t1[0] * t2[4] - t1[4] * t2[1] - t1[5] * t2[2] - t1[6] * t2[3] + t1[10] * t2[0],
t1[1] * t2[4] - t1[4] * t2[2] + t1[5] * t2[1],
t1[2] * t2[4] - t1[4] * t2[3] + t1[6] * t2[1],
t1[3] * t2[4] - t1[5] * t2[3] + t1[6] * t2[2],
t1[1] * t2[3] - t1[2] * t2[2] + t1[3] * t2[1]
);
const Bst& t4 = bst;
Bst t5 = reverse( t4);
return Tsd (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[7] * t5[0] - t3[7] * t5[10] - t3[8] * t5[1] - t3[9] * t5[2] + t3[10] * t5[7] + t3[11] * t5[8] + t3[12] * t5[9] - t3[14] * t5[3],
t3[0] * t5[8] - t3[1] * t5[7] + t3[3] * t5[9] + t3[7] * t5[1] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[10] * t5[8] - t3[11] * t5[7] + t3[13] * t5[9] + t3[14] * t5[2],
t3[0] * t5[9] - t3[2] * t5[7] - t3[3] * t5[8] + t3[7] * t5[2] + t3[8] * t5[3] + t3[9] * t5[0] - t3[9] * t5[10] + t3[10] * t5[9] - t3[12] * t5[7] - t3[13] * t5[8] - t3[14] * t5[1],
t3[0] * t5[10] - t3[4] * t5[7] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3]
);

}
		
	
	  	
template<>
inline Tsd re (const Tsd& tsd, const Vec& vec) {					
					
const Vec& t1 = vec;
const Tsd& t2 = tsd;
Tsd t3 = involute( t2);
Inf_Par t4 (
t1[0] * t3[0],
t1[1] * t3[0],
t1[2] * t3[0],
t1[0] * t3[1] + t1[1] * t3[2] + t1[2] * t3[3],
t1[0] * t3[2] - t1[1] * t3[1],
t1[0] * t3[3] - t1[2] * t3[1],
t1[1] * t3[3] - t1[2] * t3[2],
t1[0] * t3[4],
t1[1] * t3[4],
t1[2] * t3[4]
);
const Vec& t5 = vec;
Vec t6 = reverse( t5);
return Tsd (
t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2],
 - t4[3] * t6[0] - t4[4] * t6[1] - t4[5] * t6[2],
 - t4[3] * t6[1] + t4[4] * t6[0] - t4[6] * t6[2],
 - t4[3] * t6[2] + t4[5] * t6[0] + t4[6] * t6[1],
t4[7] * t6[0] + t4[8] * t6[1] + t4[9] * t6[2]
);

}
		
	
	  	
template<>
inline Tsd re (const Tsd& tsd, const Dlp& dlp) {					
					
const Dlp& t1 = dlp;
const Tsd& t2 = tsd;
Tsd t3 = involute( t2);
Inf_Par t4 (
t1[0] * t3[0],
t1[1] * t3[0],
t1[2] * t3[0],
t1[0] * t3[1] + t1[1] * t3[2] + t1[2] * t3[3] + t1[3] * t3[0] - t1[3] * t3[4],
t1[0] * t3[2] - t1[1] * t3[1],
t1[0] * t3[3] - t1[2] * t3[1],
t1[1] * t3[3] - t1[2] * t3[2],
t1[0] * t3[4],
t1[1] * t3[4],
t1[2] * t3[4]
);
const Dlp& t5 = dlp;
Dlp t6 = reverse( t5);
return Tsd (
t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2],
t4[0] * t6[3] - t4[3] * t6[0] - t4[4] * t6[1] - t4[5] * t6[2] + t4[7] * t6[3],
t4[1] * t6[3] - t4[3] * t6[1] + t4[4] * t6[0] - t4[6] * t6[2] + t4[8] * t6[3],
t4[2] * t6[3] - t4[3] * t6[2] + t4[5] * t6[0] + t4[6] * t6[1] + t4[9] * t6[3],
t4[7] * t6[0] + t4[8] * t6[1] + t4[9] * t6[2]
);

}
		
	
	  	
template<>
inline Tsd re (const Tsd& tsd, const Pln& pln) {					
					
const Pln& t1 = pln;
const Tsd& t2 = tsd;
Tsd t3 = involute( t2);
Inf_Cir t4 (
t1[0] * t3[4],
t1[1] * t3[4],
t1[2] * t3[4],
t1[0] * t3[2] + t1[1] * t3[3],
 - t1[0] * t3[1] + t1[2] * t3[3],
 - t1[1] * t3[1] - t1[2] * t3[2],
t1[0] * t3[0],
t1[1] * t3[0],
t1[2] * t3[0],
t1[0] * t3[3] - t1[1] * t3[2] + t1[2] * t3[1] + t1[3] * t3[0] - t1[3] * t3[4]
);
const Pln& t5 = pln;
Pln t6 = reverse( t5);
return Tsd (
 - t4[6] * t6[0] - t4[7] * t6[1] - t4[8] * t6[2],
 - t4[2] * t6[3] + t4[4] * t6[0] + t4[5] * t6[1] - t4[8] * t6[3] + t4[9] * t6[2],
t4[1] * t6[3] - t4[3] * t6[0] + t4[5] * t6[2] + t4[7] * t6[3] - t4[9] * t6[1],
 - t4[0] * t6[3] - t4[3] * t6[1] - t4[4] * t6[2] - t4[6] * t6[3] + t4[9] * t6[0],
 - t4[0] * t6[0] - t4[1] * t6[1] - t4[2] * t6[2]
);

}
		
	
	  	
template<>
inline Tsd re (const Tsd& tsd, const Dll& dll) {					
					
const Dll& t1 = dll;
const Tsd& t2 = tsd;
Tsd t3 = involute( t2);
Inf_Cir t4 (
t1[0] * t3[0],
t1[1] * t3[0],
t1[2] * t3[0],
t1[0] * t3[2] + t1[1] * t3[3] + t1[3] * t3[0] - t1[3] * t3[4],
 - t1[0] * t3[1] + t1[2] * t3[3] + t1[4] * t3[0] - t1[4] * t3[4],
 - t1[1] * t3[1] - t1[2] * t3[2] + t1[5] * t3[0] - t1[5] * t3[4],
t1[0] * t3[4],
t1[1] * t3[4],
t1[2] * t3[4],
t1[0] * t3[3] - t1[1] * t3[2] + t1[2] * t3[1]
);
const Dll& t5 = dll;
Dll t6 = reverse( t5);
return Tsd (
 - t4[0] * t6[0] - t4[1] * t6[1] - t4[2] * t6[2],
t4[0] * t6[4] + t4[1] * t6[5] - t4[4] * t6[0] - t4[5] * t6[1] + t4[6] * t6[4] + t4[7] * t6[5] - t4[9] * t6[2],
 - t4[0] * t6[3] + t4[2] * t6[5] + t4[3] * t6[0] - t4[5] * t6[2] - t4[6] * t6[3] + t4[8] * t6[5] + t4[9] * t6[1],
 - t4[1] * t6[3] - t4[2] * t6[4] + t4[3] * t6[1] + t4[4] * t6[2] - t4[7] * t6[3] - t4[8] * t6[4] - t4[9] * t6[0],
 - t4[6] * t6[0] - t4[7] * t6[1] - t4[8] * t6[2]
);

}
		
	
	  	
template<>
inline Tsd re (const Tsd& tsd, const Lin& lin) {					
					
const Lin& t1 = lin;
const Tsd& t2 = tsd;
Tsd t3 = involute( t2);
Inf_Par t4 (
t1[3] * t3[4],
t1[4] * t3[4],
t1[5] * t3[4],
t1[3] * t3[1] + t1[4] * t3[2] + t1[5] * t3[3],
t1[0] * t3[0] - t1[0] * t3[4] + t1[3] * t3[2] - t1[4] * t3[1],
t1[1] * t3[0] - t1[1] * t3[4] + t1[3] * t3[3] - t1[5] * t3[1],
t1[2] * t3[0] - t1[2] * t3[4] + t1[4] * t3[3] - t1[5] * t3[2],
t1[3] * t3[0],
t1[4] * t3[0],
t1[5] * t3[0]
);
const Lin& t5 = lin;
Lin t6 = reverse( t5);
return Tsd (
t4[7] * t6[3] + t4[8] * t6[4] + t4[9] * t6[5],
 - t4[1] * t6[0] - t4[2] * t6[1] + t4[3] * t6[3] + t4[4] * t6[4] + t4[5] * t6[5] - t4[8] * t6[0] - t4[9] * t6[1],
t4[0] * t6[0] - t4[2] * t6[2] + t4[3] * t6[4] - t4[4] * t6[3] + t4[6] * t6[5] + t4[7] * t6[0] - t4[9] * t6[2],
t4[0] * t6[1] + t4[1] * t6[2] + t4[3] * t6[5] - t4[5] * t6[3] - t4[6] * t6[4] + t4[7] * t6[1] + t4[8] * t6[2],
t4[0] * t6[3] + t4[1] * t6[4] + t4[2] * t6[5]
);

}
		
	
	  	
template<>
inline Tsd re (const Tsd& tsd, const Pnt& pnt) {					
					
const Pnt& t1 = pnt;
const Tsd& t2 = tsd;
Tsd t3 = involute( t2);
Pnt_Flp t4 (
t1[0] * t3[0] + t1[3] * t3[1],
t1[1] * t3[0] + t1[3] * t3[2],
t1[2] * t3[0] + t1[3] * t3[3],
t1[3] * t3[0] + t1[3] * t3[4],
t1[0] * t3[1] + t1[1] * t3[2] + t1[2] * t3[3] + t1[4] * t3[0] - t1[4] * t3[4],
t1[0] * t3[2] - t1[1] * t3[1],
t1[0] * t3[3] - t1[2] * t3[1],
t1[1] * t3[3] - t1[2] * t3[2],
t1[0] * t3[4] - t1[3] * t3[1],
t1[1] * t3[4] - t1[3] * t3[2],
t1[2] * t3[4] - t1[3] * t3[3]
);
const Pnt& t5 = pnt;
Pnt t6 = reverse( t5);
return Tsd (
t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2] - t4[3] * t6[4] - t4[4] * t6[3],
t4[0] * t6[4] - t4[4] * t6[0] - t4[5] * t6[1] - t4[6] * t6[2] + t4[8] * t6[4],
t4[1] * t6[4] - t4[4] * t6[1] + t4[5] * t6[0] - t4[7] * t6[2] + t4[9] * t6[4],
t4[2] * t6[4] - t4[4] * t6[2] + t4[6] * t6[0] + t4[7] * t6[1] + t4[10] * t6[4],
t4[3] * t6[4] - t4[4] * t6[3] + t4[8] * t6[0] + t4[9] * t6[1] + t4[10] * t6[2]
);

}
		
	
	  	
template<>
inline Tsd re (const Tsd& tsd, const Par& par) {					
					
const Par& t1 = par;
const Tsd& t2 = tsd;
Tsd t3 = involute( t2);
Tvt t4 (
t1[3] * t3[1] + t1[4] * t3[2] + t1[5] * t3[3] + t1[9] * t3[4],
t1[0] * t3[0] + t1[3] * t3[2] - t1[4] * t3[1],
t1[1] * t3[0] + t1[3] * t3[3] - t1[5] * t3[1],
t1[2] * t3[0] + t1[4] * t3[3] - t1[5] * t3[2],
t1[3] * t3[0] + t1[3] * t3[4],
t1[4] * t3[0] + t1[4] * t3[4],
t1[5] * t3[0] + t1[5] * t3[4],
t1[0] * t3[2] + t1[1] * t3[3] + t1[6] * t3[0] - t1[6] * t3[4] + t1[9] * t3[1],
 - t1[0] * t3[1] + t1[2] * t3[3] + t1[7] * t3[0] - t1[7] * t3[4] + t1[9] * t3[2],
 - t1[1] * t3[1] - t1[2] * t3[2] + t1[8] * t3[0] - t1[8] * t3[4] + t1[9] * t3[3],
 - t1[3] * t3[1] - t1[4] * t3[2] - t1[5] * t3[3] + t1[9] * t3[0],
t1[0] * t3[4] - t1[3] * t3[2] + t1[4] * t3[1],
t1[1] * t3[4] - t1[3] * t3[3] + t1[5] * t3[1],
t1[2] * t3[4] - t1[4] * t3[3] + t1[5] * t3[2],
t1[0] * t3[3] - t1[1] * t3[2] + t1[2] * t3[1]
);
const Par& t5 = par;
Par t6 = reverse( t5);
return Tsd (
 - t4[1] * t6[0] - t4[2] * t6[1] - t4[3] * t6[2] + t4[4] * t6[6] + t4[5] * t6[7] + t4[6] * t6[8] + t4[7] * t6[3] + t4[8] * t6[4] + t4[9] * t6[5] + t4[10] * t6[9],
t4[0] * t6[6] + t4[1] * t6[7] + t4[2] * t6[8] - t4[7] * t6[9] - t4[8] * t6[0] - t4[9] * t6[1] + t4[10] * t6[6] + t4[11] * t6[7] + t4[12] * t6[8] - t4[14] * t6[2],
t4[0] * t6[7] - t4[1] * t6[6] + t4[3] * t6[8] + t4[7] * t6[0] - t4[8] * t6[9] - t4[9] * t6[2] + t4[10] * t6[7] - t4[11] * t6[6] + t4[13] * t6[8] + t4[14] * t6[1],
t4[0] * t6[8] - t4[2] * t6[6] - t4[3] * t6[7] + t4[7] * t6[1] + t4[8] * t6[2] - t4[9] * t6[9] + t4[10] * t6[8] - t4[12] * t6[6] - t4[13] * t6[7] - t4[14] * t6[0],
t4[0] * t6[9] - t4[4] * t6[6] - t4[5] * t6[7] - t4[6] * t6[8] + t4[7] * t6[3] + t4[8] * t6[4] + t4[9] * t6[5] - t4[11] * t6[0] - t4[12] * t6[1] - t4[13] * t6[2]
);

}
		
	
	  	
template<>
inline Tsd re (const Tsd& tsd, const Cir& cir) {					
					
const Cir& t1 = cir;
const Tsd& t2 = tsd;
Tsd t3 = involute( t2);
Par_Dfp t4 (
t1[0] * t3[2] + t1[1] * t3[3] + t1[6] * t3[4],
 - t1[0] * t3[1] + t1[2] * t3[3] + t1[7] * t3[4],
 - t1[1] * t3[1] - t1[2] * t3[2] + t1[8] * t3[4],
t1[6] * t3[1] + t1[7] * t3[2] + t1[8] * t3[3],
t1[0] * t3[0] + t1[0] * t3[4],
t1[1] * t3[0] + t1[1] * t3[4],
t1[2] * t3[0] + t1[2] * t3[4],
t1[3] * t3[0] - t1[3] * t3[4] + t1[6] * t3[2] - t1[7] * t3[1] + t1[9] * t3[3],
t1[4] * t3[0] - t1[4] * t3[4] + t1[6] * t3[3] - t1[8] * t3[1] - t1[9] * t3[2],
t1[5] * t3[0] - t1[5] * t3[4] + t1[7] * t3[3] - t1[8] * t3[2] + t1[9] * t3[1],
 - t1[0] * t3[2] - t1[1] * t3[3] + t1[6] * t3[0],
t1[0] * t3[1] - t1[2] * t3[3] + t1[7] * t3[0],
t1[1] * t3[1] + t1[2] * t3[2] + t1[8] * t3[0],
t1[0] * t3[3] - t1[1] * t3[2] + t1[2] * t3[1] + t1[9] * t3[0],
 - t1[0] * t3[3] + t1[1] * t3[2] - t1[2] * t3[1] + t1[9] * t3[4]
);
const Cir& t5 = cir;
Cir t6 = reverse( t5);
return Tsd (
t4[4] * t6[3] + t4[5] * t6[4] + t4[6] * t6[5] + t4[7] * t6[0] + t4[8] * t6[1] + t4[9] * t6[2] + t4[10] * t6[6] + t4[11] * t6[7] + t4[12] * t6[8] - t4[13] * t6[9],
 - t4[1] * t6[3] - t4[2] * t6[4] + t4[3] * t6[6] + t4[7] * t6[7] + t4[8] * t6[8] + t4[9] * t6[9] - t4[11] * t6[3] - t4[12] * t6[4] - t4[13] * t6[5] - t4[14] * t6[5],
t4[0] * t6[3] - t4[2] * t6[5] + t4[3] * t6[7] - t4[7] * t6[6] - t4[8] * t6[9] + t4[9] * t6[8] + t4[10] * t6[3] - t4[12] * t6[5] + t4[13] * t6[4] + t4[14] * t6[4],
t4[0] * t6[4] + t4[1] * t6[5] + t4[3] * t6[8] + t4[7] * t6[9] - t4[8] * t6[6] - t4[9] * t6[7] + t4[10] * t6[4] + t4[11] * t6[5] - t4[13] * t6[3] - t4[14] * t6[3],
t4[0] * t6[6] + t4[1] * t6[7] + t4[2] * t6[8] - t4[4] * t6[3] - t4[5] * t6[4] - t4[6] * t6[5] + t4[7] * t6[0] + t4[8] * t6[1] + t4[9] * t6[2] - t4[14] * t6[9]
);

}
		
	
	  	
template<>
inline Tsd re (const Tsd& tsd, const Sph& sph) {					
					
const Sph& t1 = sph;
const Tsd& t2 = tsd;
Tsd t3 = involute( t2);
Pnt_Dfp t4 (
t1[0] * t3[4] + t1[3] * t3[3],
t1[1] * t3[4] - t1[3] * t3[2],
t1[2] * t3[4] + t1[3] * t3[1],
t1[0] * t3[2] + t1[1] * t3[3],
 - t1[0] * t3[1] + t1[2] * t3[3],
 - t1[1] * t3[1] - t1[2] * t3[2],
t1[0] * t3[0] - t1[3] * t3[3],
t1[1] * t3[0] + t1[3] * t3[2],
t1[2] * t3[0] - t1[3] * t3[1],
t1[3] * t3[0] + t1[3] * t3[4],
t1[0] * t3[3] - t1[1] * t3[2] + t1[2] * t3[1] + t1[4] * t3[0] - t1[4] * t3[4]
);
const Sph& t5 = sph;
Sph t6 = reverse( t5);
return Tsd (
 - t4[6] * t6[0] - t4[7] * t6[1] - t4[8] * t6[2] - t4[9] * t6[4] - t4[10] * t6[3],
 - t4[2] * t6[4] + t4[4] * t6[0] + t4[5] * t6[1] - t4[8] * t6[4] + t4[10] * t6[2],
t4[1] * t6[4] - t4[3] * t6[0] + t4[5] * t6[2] + t4[7] * t6[4] - t4[10] * t6[1],
 - t4[0] * t6[4] - t4[3] * t6[1] - t4[4] * t6[2] - t4[6] * t6[4] + t4[10] * t6[0],
 - t4[0] * t6[0] - t4[1] * t6[1] - t4[2] * t6[2] + t4[9] * t6[4] - t4[10] * t6[3]
);

}
		
	
		
	} //vsr::
	#endif
	