		#ifndef MTD_H_INCLUDED
		#define MTD_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	 
inline Mtd gp (const Mtd& a, const Sca& b) { 
	return Mtd (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[4] * b[0],
a[5] * b[0],
a[6] * b[0],
a[7] * b[0],
a[8] * b[0],
a[9] * b[0],
a[10] * b[0],
a[11] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mtd, Sca> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mtd*)(&a),*(Sca*)(&b));
}			
		 
inline Par_Tnb gp (const Mtd& a, const Ori& b) { 
	return Par_Tnb (
 - a[4] * b[0],
 - a[5] * b[0],
 - a[6] * b[0],
a[0] * b[0] - a[7] * b[0],
a[1] * b[0] - a[8] * b[0],
a[2] * b[0] - a[9] * b[0],
a[3] * b[0] - a[10] * b[0],
 - a[4] * b[0],
 - a[5] * b[0],
 - a[6] * b[0],
 - a[11] * b[0],
 - a[11] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mtd, Ori> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mtd*)(&a),*(Ori*)(&b));
}			
		 
inline Drv_Lin gp (const Mtd& a, const Inf& b) { 
	return Drv_Lin (
a[0] * b[0] + a[7] * b[0],
a[1] * b[0] + a[8] * b[0],
a[2] * b[0] + a[9] * b[0],
a[3] * b[0] + a[10] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mtd, Inf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mtd*)(&a),*(Inf*)(&b));
}			
		 
inline Mtd gp (const Mtd& a, const Mnk& b) { 
	return Mtd (
a[7] * b[0],
a[8] * b[0],
a[9] * b[0],
a[10] * b[0],
 - a[4] * b[0],
 - a[5] * b[0],
 - a[6] * b[0],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
 - a[11] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mtd, Mnk> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mtd*)(&a),*(Mnk*)(&b));
}			
		 
inline Rtc gp (const Mtd& a, const Hyp& b) { 
	return Rtc (
 - a[4] * b[0],
 - a[5] * b[0],
 - a[6] * b[0],
a[0] * b[0] - a[7] * b[0],
a[0] * b[1] + a[7] * b[1],
a[1] * b[0] - a[8] * b[0],
a[2] * b[0] - a[9] * b[0],
a[3] * b[0] - a[10] * b[0],
a[1] * b[1] + a[8] * b[1],
a[2] * b[1] + a[9] * b[1],
a[3] * b[1] + a[10] * b[1],
 - a[4] * b[0],
 - a[5] * b[0],
 - a[6] * b[0],
 - a[11] * b[0],
 - a[11] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mtd, Hyp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mtd*)(&a),*(Hyp*)(&b));
}			
		 
inline Par_Drb gp (const Mtd& a, const Pss& b) { 
	return Par_Drb (
 - a[10] * b[0],
a[9] * b[0],
 - a[8] * b[0],
 - a[11] * b[0],
a[6] * b[0],
 - a[5] * b[0],
a[4] * b[0],
 - a[3] * b[0],
a[2] * b[0],
 - a[1] * b[0],
a[7] * b[0],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mtd, Pss> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mtd*)(&a),*(Pss*)(&b));
}			
		 
inline Rtc gp (const Mtd& a, const Pnt& b) { 
	return Rtc (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[4] * b[3],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2] - a[5] * b[3],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1] - a[6] * b[3],
a[0] * b[3] - a[7] * b[3],
a[0] * b[4] - a[4] * b[0] - a[5] * b[1] - a[6] * b[2] + a[7] * b[4],
a[1] * b[3] - a[8] * b[3],
a[2] * b[3] - a[9] * b[3],
a[3] * b[3] - a[10] * b[3],
a[1] * b[4] - a[4] * b[1] + a[5] * b[0] + a[8] * b[4] - a[11] * b[2],
a[2] * b[4] - a[4] * b[2] + a[6] * b[0] + a[9] * b[4] + a[11] * b[1],
a[3] * b[4] - a[5] * b[2] + a[6] * b[1] + a[10] * b[4] - a[11] * b[0],
 - a[4] * b[3] + a[7] * b[0] + a[8] * b[1] + a[9] * b[2],
 - a[5] * b[3] + a[7] * b[1] - a[8] * b[0] + a[10] * b[2],
 - a[6] * b[3] + a[7] * b[2] - a[9] * b[0] - a[10] * b[1],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0] - a[11] * b[3],
a[8] * b[2] - a[9] * b[1] + a[10] * b[0] - a[11] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Mtd, Pnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mtd*)(&a),*(Pnt*)(&b));
}			
		 
inline Mtt gp (const Mtd& a, const Par& b) { 
	return Mtt (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] + a[4] * b[3] + a[5] * b[4] + a[6] * b[5] + a[7] * b[9],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] + a[4] * b[4] - a[5] * b[3] + a[8] * b[9] + a[11] * b[5],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] + a[4] * b[5] - a[6] * b[3] + a[9] * b[9] - a[11] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[5] * b[5] - a[6] * b[4] + a[10] * b[9] + a[11] * b[3],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5] - a[7] * b[3] - a[8] * b[4] - a[9] * b[5],
a[0] * b[4] - a[1] * b[3] + a[3] * b[5] - a[7] * b[4] + a[8] * b[3] - a[10] * b[5],
a[0] * b[5] - a[2] * b[3] - a[3] * b[4] - a[7] * b[5] + a[9] * b[3] + a[10] * b[4],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8] - a[4] * b[9] - a[5] * b[0] - a[6] * b[1] + a[7] * b[6] + a[8] * b[7] + a[9] * b[8] - a[11] * b[2],
a[0] * b[7] - a[1] * b[6] + a[3] * b[8] + a[4] * b[0] - a[5] * b[9] - a[6] * b[2] + a[7] * b[7] - a[8] * b[6] + a[10] * b[8] + a[11] * b[1],
a[0] * b[8] - a[2] * b[6] - a[3] * b[7] + a[4] * b[1] + a[5] * b[2] - a[6] * b[9] + a[7] * b[8] - a[9] * b[6] - a[10] * b[7] - a[11] * b[0],
a[0] * b[9] + a[4] * b[3] + a[5] * b[4] + a[6] * b[5] - a[8] * b[0] - a[9] * b[1] - a[10] * b[2],
a[1] * b[9] + a[4] * b[4] - a[5] * b[3] + a[7] * b[0] - a[9] * b[2] + a[10] * b[1] + a[11] * b[5],
a[2] * b[9] + a[4] * b[5] - a[6] * b[3] + a[7] * b[1] + a[8] * b[2] - a[10] * b[0] - a[11] * b[4],
a[3] * b[9] + a[5] * b[5] - a[6] * b[4] + a[7] * b[2] - a[8] * b[1] + a[9] * b[0] + a[11] * b[3],
a[1] * b[5] - a[2] * b[4] + a[3] * b[3] - a[8] * b[5] + a[9] * b[4] - a[10] * b[3],
a[1] * b[8] - a[2] * b[7] + a[3] * b[6] + a[4] * b[2] - a[5] * b[1] + a[6] * b[0] + a[8] * b[8] - a[9] * b[7] + a[10] * b[6] - a[11] * b[9]
);
}			
		 
		
template<> inline MVBase gp_gen<Mtd, Par> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mtd*)(&a),*(Par*)(&b));
}			
		 
inline Rtc gp (const Mtd& a, const Cir& b) { 
	return Rtc (
 - a[3] * b[9] + a[5] * b[0] + a[6] * b[1] + a[7] * b[6] + a[8] * b[7] + a[9] * b[8] + a[11] * b[2],
a[2] * b[9] - a[4] * b[0] + a[6] * b[2] + a[7] * b[7] - a[8] * b[6] + a[10] * b[8] - a[11] * b[1],
 - a[1] * b[9] - a[4] * b[1] - a[5] * b[2] + a[7] * b[8] - a[9] * b[6] - a[10] * b[7] + a[11] * b[0],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] + a[8] * b[0] + a[9] * b[1] + a[10] * b[2],
 - a[1] * b[3] - a[2] * b[4] - a[3] * b[5] + a[4] * b[6] + a[5] * b[7] + a[6] * b[8] - a[8] * b[3] - a[9] * b[4] - a[10] * b[5] + a[11] * b[9],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] - a[7] * b[0] + a[9] * b[2] - a[10] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] - a[7] * b[1] - a[8] * b[2] + a[10] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[7] * b[2] + a[8] * b[1] - a[9] * b[0],
a[0] * b[3] - a[2] * b[5] + a[3] * b[4] + a[4] * b[7] - a[5] * b[6] - a[6] * b[9] + a[7] * b[3] - a[9] * b[5] + a[10] * b[4] + a[11] * b[8],
a[0] * b[4] + a[1] * b[5] - a[3] * b[3] + a[4] * b[8] + a[5] * b[9] - a[6] * b[6] + a[7] * b[4] + a[8] * b[5] - a[10] * b[3] - a[11] * b[7],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] - a[4] * b[9] + a[5] * b[8] - a[6] * b[7] + a[7] * b[5] - a[8] * b[4] + a[9] * b[3] + a[11] * b[6],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8] + a[5] * b[0] + a[6] * b[1] - a[10] * b[9] + a[11] * b[2],
a[0] * b[7] - a[1] * b[6] + a[3] * b[8] - a[4] * b[0] + a[6] * b[2] + a[9] * b[9] - a[11] * b[1],
a[0] * b[8] - a[2] * b[6] - a[3] * b[7] - a[4] * b[1] - a[5] * b[2] - a[8] * b[9] + a[11] * b[0],
a[0] * b[9] - a[4] * b[2] + a[5] * b[1] - a[6] * b[0] + a[8] * b[8] - a[9] * b[7] + a[10] * b[6],
a[1] * b[8] - a[2] * b[7] + a[3] * b[6] - a[4] * b[2] + a[5] * b[1] - a[6] * b[0] + a[7] * b[9]
);
}			
		 
		
template<> inline MVBase gp_gen<Mtd, Cir> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mtd*)(&a),*(Cir*)(&b));
}			
		 
inline Mtt gp (const Mtd& a, const Sph& b) { 
	return Mtt (
 - a[8] * b[0] - a[9] * b[1] - a[10] * b[2] - a[11] * b[3],
a[6] * b[3] + a[7] * b[0] - a[9] * b[2] + a[10] * b[1],
 - a[5] * b[3] + a[7] * b[1] + a[8] * b[2] - a[10] * b[0],
a[4] * b[3] + a[7] * b[2] - a[8] * b[1] + a[9] * b[0],
 - a[3] * b[3] + a[10] * b[3],
a[2] * b[3] - a[9] * b[3],
 - a[1] * b[3] + a[8] * b[3],
 - a[3] * b[4] + a[5] * b[0] + a[6] * b[1] - a[10] * b[4] + a[11] * b[2],
a[2] * b[4] - a[4] * b[0] + a[6] * b[2] + a[9] * b[4] - a[11] * b[1],
 - a[1] * b[4] - a[4] * b[1] - a[5] * b[2] - a[8] * b[4] + a[11] * b[0],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] - a[11] * b[3],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] + a[6] * b[3],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] - a[5] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[4] * b[3],
a[0] * b[3] - a[7] * b[3],
a[0] * b[4] - a[4] * b[2] + a[5] * b[1] - a[6] * b[0] + a[7] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Mtd, Sph> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mtd*)(&a),*(Sph*)(&b));
}			
		 
inline Mtt gp (const Mtd& a, const Sta& b) { 
	return Mtt (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] + a[4] * b[3] + a[5] * b[4] + a[6] * b[5],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] + a[4] * b[4] - a[5] * b[3] + a[11] * b[5],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] + a[4] * b[5] - a[6] * b[3] - a[11] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[5] * b[5] - a[6] * b[4] + a[11] * b[3],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5] - a[7] * b[3] - a[8] * b[4] - a[9] * b[5],
a[0] * b[4] - a[1] * b[3] + a[3] * b[5] - a[7] * b[4] + a[8] * b[3] - a[10] * b[5],
a[0] * b[5] - a[2] * b[3] - a[3] * b[4] - a[7] * b[5] + a[9] * b[3] + a[10] * b[4],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8] - a[5] * b[0] - a[6] * b[1] + a[7] * b[6] + a[8] * b[7] + a[9] * b[8] - a[11] * b[2],
a[0] * b[7] - a[1] * b[6] + a[3] * b[8] + a[4] * b[0] - a[6] * b[2] + a[7] * b[7] - a[8] * b[6] + a[10] * b[8] + a[11] * b[1],
a[0] * b[8] - a[2] * b[6] - a[3] * b[7] + a[4] * b[1] + a[5] * b[2] + a[7] * b[8] - a[9] * b[6] - a[10] * b[7] - a[11] * b[0],
a[4] * b[3] + a[5] * b[4] + a[6] * b[5] - a[8] * b[0] - a[9] * b[1] - a[10] * b[2],
a[4] * b[4] - a[5] * b[3] + a[7] * b[0] - a[9] * b[2] + a[10] * b[1] + a[11] * b[5],
a[4] * b[5] - a[6] * b[3] + a[7] * b[1] + a[8] * b[2] - a[10] * b[0] - a[11] * b[4],
a[5] * b[5] - a[6] * b[4] + a[7] * b[2] - a[8] * b[1] + a[9] * b[0] + a[11] * b[3],
a[1] * b[5] - a[2] * b[4] + a[3] * b[3] - a[8] * b[5] + a[9] * b[4] - a[10] * b[3],
a[1] * b[8] - a[2] * b[7] + a[3] * b[6] + a[4] * b[2] - a[5] * b[1] + a[6] * b[0] + a[8] * b[8] - a[9] * b[7] + a[10] * b[6]
);
}			
		 
		
template<> inline MVBase gp_gen<Mtd, Sta> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mtd*)(&a),*(Sta*)(&b));
}			
		 
inline Drv_Pln gp (const Mtd& a, const Drv& b) { 
	return Drv_Pln (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] + a[7] * b[0] + a[8] * b[1] + a[9] * b[2],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2] + a[7] * b[1] - a[8] * b[0] + a[10] * b[2],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1] + a[7] * b[2] - a[9] * b[0] - a[10] * b[1],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0] + a[8] * b[2] - a[9] * b[1] + a[10] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mtd, Drv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mtd*)(&a),*(Drv*)(&b));
}			
		 
inline Drv_Lin gp (const Mtd& a, const Drb& b) { 
	return Drv_Lin (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] - a[8] * b[0] - a[9] * b[1] - a[10] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] + a[7] * b[0] - a[9] * b[2] + a[10] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] + a[7] * b[1] + a[8] * b[2] - a[10] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[7] * b[2] - a[8] * b[1] + a[9] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mtd, Drb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mtd*)(&a),*(Drb*)(&b));
}			
		 
inline Drv_Pln gp (const Mtd& a, const Drt& b) { 
	return Drv_Pln (
 - a[3] * b[0] - a[10] * b[0],
a[2] * b[0] + a[9] * b[0],
 - a[1] * b[0] - a[8] * b[0],
a[0] * b[0] + a[7] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mtd, Drt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mtd*)(&a),*(Drt*)(&b));
}			
		 
inline Rvd gp (const Mtd& a, const Tnv& b) { 
	return Rvd (
a[4] * b[0] + a[5] * b[1] + a[6] * b[2],
a[4] * b[1] - a[5] * b[0] + a[11] * b[2],
a[4] * b[2] - a[6] * b[0] - a[11] * b[1],
a[5] * b[2] - a[6] * b[1] + a[11] * b[0],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[7] * b[0] - a[8] * b[1] - a[9] * b[2],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2] - a[7] * b[1] + a[8] * b[0] - a[10] * b[2],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1] - a[7] * b[2] + a[9] * b[0] + a[10] * b[1],
a[4] * b[0] + a[5] * b[1] + a[6] * b[2],
a[4] * b[1] - a[5] * b[0] + a[11] * b[2],
a[4] * b[2] - a[6] * b[0] - a[11] * b[1],
a[5] * b[2] - a[6] * b[1] + a[11] * b[0],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0] - a[8] * b[2] + a[9] * b[1] - a[10] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mtd, Tnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mtd*)(&a),*(Tnv*)(&b));
}			
		 
inline Par_Tnb gp (const Mtd& a, const Tnb& b) { 
	return Par_Tnb (
a[5] * b[0] + a[6] * b[1] + a[11] * b[2],
 - a[4] * b[0] + a[6] * b[2] - a[11] * b[1],
 - a[4] * b[1] - a[5] * b[2] + a[11] * b[0],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] + a[8] * b[0] + a[9] * b[1] + a[10] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] - a[7] * b[0] + a[9] * b[2] - a[10] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] - a[7] * b[1] - a[8] * b[2] + a[10] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[7] * b[2] + a[8] * b[1] - a[9] * b[0],
a[5] * b[0] + a[6] * b[1] + a[11] * b[2],
 - a[4] * b[0] + a[6] * b[2] - a[11] * b[1],
 - a[4] * b[1] - a[5] * b[2] + a[11] * b[0],
 - a[4] * b[2] + a[5] * b[1] - a[6] * b[0],
 - a[4] * b[2] + a[5] * b[1] - a[6] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mtd, Tnb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mtd*)(&a),*(Tnb*)(&b));
}			
		 
inline Rvd gp (const Mtd& a, const Tnt& b) { 
	return Rvd (
 - a[11] * b[0],
a[6] * b[0],
 - a[5] * b[0],
a[4] * b[0],
 - a[3] * b[0] + a[10] * b[0],
a[2] * b[0] - a[9] * b[0],
 - a[1] * b[0] + a[8] * b[0],
 - a[11] * b[0],
a[6] * b[0],
 - a[5] * b[0],
a[4] * b[0],
a[0] * b[0] - a[7] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mtd, Tnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mtd*)(&a),*(Tnt*)(&b));
}			
		 
inline Par_Drb gp (const Mtd& a, const Lin& b) { 
	return Par_Drb (
a[7] * b[3] + a[8] * b[4] + a[9] * b[5],
a[7] * b[4] - a[8] * b[3] + a[10] * b[5],
a[7] * b[5] - a[9] * b[3] - a[10] * b[4],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] + a[4] * b[3] + a[5] * b[4] + a[6] * b[5] - a[8] * b[0] - a[9] * b[1] - a[10] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] + a[4] * b[4] - a[5] * b[3] + a[7] * b[0] - a[9] * b[2] + a[10] * b[1] + a[11] * b[5],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] + a[4] * b[5] - a[6] * b[3] + a[7] * b[1] + a[8] * b[2] - a[10] * b[0] - a[11] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[5] * b[5] - a[6] * b[4] + a[7] * b[2] - a[8] * b[1] + a[9] * b[0] + a[11] * b[3],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[4] - a[1] * b[3] + a[3] * b[5],
a[0] * b[5] - a[2] * b[3] - a[3] * b[4],
a[8] * b[5] - a[9] * b[4] + a[10] * b[3],
a[1] * b[5] - a[2] * b[4] + a[3] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Mtd, Lin> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mtd*)(&a),*(Lin*)(&b));
}			
		 
inline Mtd gp (const Mtd& a, const Pln& b) { 
	return Mtd (
 - a[8] * b[0] - a[9] * b[1] - a[10] * b[2],
a[7] * b[0] - a[9] * b[2] + a[10] * b[1],
a[7] * b[1] + a[8] * b[2] - a[10] * b[0],
a[7] * b[2] - a[8] * b[1] + a[9] * b[0],
 - a[3] * b[3] + a[5] * b[0] + a[6] * b[1] - a[10] * b[3] + a[11] * b[2],
a[2] * b[3] - a[4] * b[0] + a[6] * b[2] + a[9] * b[3] - a[11] * b[1],
 - a[1] * b[3] - a[4] * b[1] - a[5] * b[2] - a[8] * b[3] + a[11] * b[0],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
a[0] * b[3] - a[4] * b[2] + a[5] * b[1] - a[6] * b[0] + a[7] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Mtd, Pln> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mtd*)(&a),*(Pln*)(&b));
}			
		 
inline Mtd gp (const Mtd& a, const Flp& b) { 
	return Mtd (
a[7] * b[3],
a[8] * b[3],
a[9] * b[3],
a[10] * b[3],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[4] * b[3] + a[7] * b[0] + a[8] * b[1] + a[9] * b[2],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2] - a[5] * b[3] + a[7] * b[1] - a[8] * b[0] + a[10] * b[2],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1] - a[6] * b[3] + a[7] * b[2] - a[9] * b[0] - a[10] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
a[3] * b[3],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0] + a[8] * b[2] - a[9] * b[1] + a[10] * b[0] - a[11] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Mtd, Flp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mtd*)(&a),*(Flp*)(&b));
}			
		 
inline Par_Drb gp (const Mtd& a, const Dfp& b) { 
	return Par_Drb (
 - a[3] * b[3],
a[2] * b[3],
 - a[1] * b[3],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] - a[8] * b[0] - a[9] * b[1] - a[10] * b[2] + a[11] * b[3],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] - a[6] * b[3] + a[7] * b[0] - a[9] * b[2] + a[10] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] + a[5] * b[3] + a[7] * b[1] + a[8] * b[2] - a[10] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[4] * b[3] + a[7] * b[2] - a[8] * b[1] + a[9] * b[0],
 - a[10] * b[3],
a[9] * b[3],
 - a[8] * b[3],
a[0] * b[3],
a[7] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Mtd, Dfp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mtd*)(&a),*(Dfp*)(&b));
}			
		 
inline Mtd gp (const Mtd& a, const Dll& b) { 
	return Mtd (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5] - a[5] * b[0] - a[6] * b[1] + a[7] * b[3] + a[8] * b[4] + a[9] * b[5] - a[11] * b[2],
a[0] * b[4] - a[1] * b[3] + a[3] * b[5] + a[4] * b[0] - a[6] * b[2] + a[7] * b[4] - a[8] * b[3] + a[10] * b[5] + a[11] * b[1],
a[0] * b[5] - a[2] * b[3] - a[3] * b[4] + a[4] * b[1] + a[5] * b[2] + a[7] * b[5] - a[9] * b[3] - a[10] * b[4] - a[11] * b[0],
 - a[8] * b[0] - a[9] * b[1] - a[10] * b[2],
a[7] * b[0] - a[9] * b[2] + a[10] * b[1],
a[7] * b[1] + a[8] * b[2] - a[10] * b[0],
a[7] * b[2] - a[8] * b[1] + a[9] * b[0],
a[1] * b[5] - a[2] * b[4] + a[3] * b[3] + a[4] * b[2] - a[5] * b[1] + a[6] * b[0] + a[8] * b[5] - a[9] * b[4] + a[10] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Mtd, Dll> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mtd*)(&a),*(Dll*)(&b));
}			
		 
inline Par_Drb gp (const Mtd& a, const Dlp& b) { 
	return Par_Drb (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1],
a[0] * b[3] - a[4] * b[0] - a[5] * b[1] - a[6] * b[2] + a[7] * b[3],
a[1] * b[3] - a[4] * b[1] + a[5] * b[0] + a[8] * b[3] - a[11] * b[2],
a[2] * b[3] - a[4] * b[2] + a[6] * b[0] + a[9] * b[3] + a[11] * b[1],
a[3] * b[3] - a[5] * b[2] + a[6] * b[1] + a[10] * b[3] - a[11] * b[0],
a[7] * b[0] + a[8] * b[1] + a[9] * b[2],
a[7] * b[1] - a[8] * b[0] + a[10] * b[2],
a[7] * b[2] - a[9] * b[0] - a[10] * b[1],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0],
a[8] * b[2] - a[9] * b[1] + a[10] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mtd, Dlp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mtd*)(&a),*(Dlp*)(&b));
}			
		 
inline Par_Drb gp (const Mtd& a, const Vec& b) { 
	return Par_Drb (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1],
 - a[4] * b[0] - a[5] * b[1] - a[6] * b[2],
 - a[4] * b[1] + a[5] * b[0] - a[11] * b[2],
 - a[4] * b[2] + a[6] * b[0] + a[11] * b[1],
 - a[5] * b[2] + a[6] * b[1] - a[11] * b[0],
a[7] * b[0] + a[8] * b[1] + a[9] * b[2],
a[7] * b[1] - a[8] * b[0] + a[10] * b[2],
a[7] * b[2] - a[9] * b[0] - a[10] * b[1],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0],
a[8] * b[2] - a[9] * b[1] + a[10] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mtd, Vec> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mtd*)(&a),*(Vec*)(&b));
}			
		 
inline Mtd gp (const Mtd& a, const Biv& b) { 
	return Mtd (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
 - a[5] * b[0] - a[6] * b[1] - a[11] * b[2],
a[4] * b[0] - a[6] * b[2] + a[11] * b[1],
a[4] * b[1] + a[5] * b[2] - a[11] * b[0],
 - a[8] * b[0] - a[9] * b[1] - a[10] * b[2],
a[7] * b[0] - a[9] * b[2] + a[10] * b[1],
a[7] * b[1] + a[8] * b[2] - a[10] * b[0],
a[7] * b[2] - a[8] * b[1] + a[9] * b[0],
a[4] * b[2] - a[5] * b[1] + a[6] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mtd, Biv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mtd*)(&a),*(Biv*)(&b));
}			
		 
inline Par_Drb gp (const Mtd& a, const Tri& b) { 
	return Par_Drb (
 - a[3] * b[0],
a[2] * b[0],
 - a[1] * b[0],
a[11] * b[0],
 - a[6] * b[0],
a[5] * b[0],
 - a[4] * b[0],
 - a[10] * b[0],
a[9] * b[0],
 - a[8] * b[0],
a[0] * b[0],
a[7] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mtd, Tri> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mtd*)(&a),*(Tri*)(&b));
}			
		 
inline Rtc gp (const Mtd& a, const Aff& b) { 
	return Rtc (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[4] * b[3],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2] - a[5] * b[3],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1] - a[6] * b[3],
a[0] * b[3] - a[7] * b[3],
 - a[4] * b[0] - a[5] * b[1] - a[6] * b[2],
a[1] * b[3] - a[8] * b[3],
a[2] * b[3] - a[9] * b[3],
a[3] * b[3] - a[10] * b[3],
 - a[4] * b[1] + a[5] * b[0] - a[11] * b[2],
 - a[4] * b[2] + a[6] * b[0] + a[11] * b[1],
 - a[5] * b[2] + a[6] * b[1] - a[11] * b[0],
 - a[4] * b[3] + a[7] * b[0] + a[8] * b[1] + a[9] * b[2],
 - a[5] * b[3] + a[7] * b[1] - a[8] * b[0] + a[10] * b[2],
 - a[6] * b[3] + a[7] * b[2] - a[9] * b[0] - a[10] * b[1],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0] - a[11] * b[3],
a[8] * b[2] - a[9] * b[1] + a[10] * b[0] - a[11] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Mtd, Aff> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mtd*)(&a),*(Aff*)(&b));
}			
		 
inline Mtt gp (const Mtd& a, const Afl& b) { 
	return Mtt (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] + a[4] * b[3] + a[5] * b[4] + a[6] * b[5],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] + a[4] * b[4] - a[5] * b[3] + a[11] * b[5],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] + a[4] * b[5] - a[6] * b[3] - a[11] * b[4],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[5] * b[5] - a[6] * b[4] + a[11] * b[3],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5] - a[7] * b[3] - a[8] * b[4] - a[9] * b[5],
a[0] * b[4] - a[1] * b[3] + a[3] * b[5] - a[7] * b[4] + a[8] * b[3] - a[10] * b[5],
a[0] * b[5] - a[2] * b[3] - a[3] * b[4] - a[7] * b[5] + a[9] * b[3] + a[10] * b[4],
 - a[5] * b[0] - a[6] * b[1] - a[11] * b[2],
a[4] * b[0] - a[6] * b[2] + a[11] * b[1],
a[4] * b[1] + a[5] * b[2] - a[11] * b[0],
a[4] * b[3] + a[5] * b[4] + a[6] * b[5] - a[8] * b[0] - a[9] * b[1] - a[10] * b[2],
a[4] * b[4] - a[5] * b[3] + a[7] * b[0] - a[9] * b[2] + a[10] * b[1] + a[11] * b[5],
a[4] * b[5] - a[6] * b[3] + a[7] * b[1] + a[8] * b[2] - a[10] * b[0] - a[11] * b[4],
a[5] * b[5] - a[6] * b[4] + a[7] * b[2] - a[8] * b[1] + a[9] * b[0] + a[11] * b[3],
a[1] * b[5] - a[2] * b[4] + a[3] * b[3] - a[8] * b[5] + a[9] * b[4] - a[10] * b[3],
a[4] * b[2] - a[5] * b[1] + a[6] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mtd, Afl> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mtd*)(&a),*(Afl*)(&b));
}			
		 
inline Rtc gp (const Mtd& a, const Afp& b) { 
	return Rtc (
 - a[3] * b[3] + a[5] * b[0] + a[6] * b[1] + a[11] * b[2],
a[2] * b[3] - a[4] * b[0] + a[6] * b[2] - a[11] * b[1],
 - a[1] * b[3] - a[4] * b[1] - a[5] * b[2] + a[11] * b[0],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] + a[8] * b[0] + a[9] * b[1] + a[10] * b[2],
a[11] * b[3],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] - a[7] * b[0] + a[9] * b[2] - a[10] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] - a[7] * b[1] - a[8] * b[2] + a[10] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[7] * b[2] + a[8] * b[1] - a[9] * b[0],
 - a[6] * b[3],
a[5] * b[3],
 - a[4] * b[3],
a[5] * b[0] + a[6] * b[1] - a[10] * b[3] + a[11] * b[2],
 - a[4] * b[0] + a[6] * b[2] + a[9] * b[3] - a[11] * b[1],
 - a[4] * b[1] - a[5] * b[2] - a[8] * b[3] + a[11] * b[0],
a[0] * b[3] - a[4] * b[2] + a[5] * b[1] - a[6] * b[0],
 - a[4] * b[2] + a[5] * b[1] - a[6] * b[0] + a[7] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Mtd, Afp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mtd*)(&a),*(Afp*)(&b));
}			
		 
inline Mtt gp (const Mtd& a, const Dap& b) { 
	return Mtt (
a[4] * b[0] + a[5] * b[1] + a[6] * b[2] + a[7] * b[3],
a[4] * b[1] - a[5] * b[0] + a[8] * b[3] + a[11] * b[2],
a[4] * b[2] - a[6] * b[0] + a[9] * b[3] - a[11] * b[1],
a[5] * b[2] - a[6] * b[1] + a[10] * b[3] + a[11] * b[0],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[7] * b[0] - a[8] * b[1] - a[9] * b[2],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2] - a[7] * b[1] + a[8] * b[0] - a[10] * b[2],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1] - a[7] * b[2] + a[9] * b[0] + a[10] * b[1],
 - a[4] * b[3],
 - a[5] * b[3],
 - a[6] * b[3],
a[0] * b[3] + a[4] * b[0] + a[5] * b[1] + a[6] * b[2],
a[1] * b[3] + a[4] * b[1] - a[5] * b[0] + a[11] * b[2],
a[2] * b[3] + a[4] * b[2] - a[6] * b[0] - a[11] * b[1],
a[3] * b[3] + a[5] * b[2] - a[6] * b[1] + a[11] * b[0],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0] - a[8] * b[2] + a[9] * b[1] - a[10] * b[0],
 - a[11] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Mtd, Dap> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mtd*)(&a),*(Dap*)(&b));
}			
		 
inline Mtt gp (const Mtd& a, const Daf& b) { 
	return Mtt (
 - a[8] * b[0] - a[9] * b[1] - a[10] * b[2] - a[11] * b[3],
a[6] * b[3] + a[7] * b[0] - a[9] * b[2] + a[10] * b[1],
 - a[5] * b[3] + a[7] * b[1] + a[8] * b[2] - a[10] * b[0],
a[4] * b[3] + a[7] * b[2] - a[8] * b[1] + a[9] * b[0],
 - a[3] * b[3] + a[10] * b[3],
a[2] * b[3] - a[9] * b[3],
 - a[1] * b[3] + a[8] * b[3],
a[5] * b[0] + a[6] * b[1] + a[11] * b[2],
 - a[4] * b[0] + a[6] * b[2] - a[11] * b[1],
 - a[4] * b[1] - a[5] * b[2] + a[11] * b[0],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] - a[11] * b[3],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] + a[6] * b[3],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] - a[5] * b[3],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[4] * b[3],
a[0] * b[3] - a[7] * b[3],
 - a[4] * b[2] + a[5] * b[1] - a[6] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mtd, Daf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mtd*)(&a),*(Daf*)(&b));
}			
		 
inline Rtc gp (const Mtd& a, const Dal& b) { 
	return Rtc (
a[5] * b[0] + a[6] * b[1] + a[7] * b[3] + a[8] * b[4] + a[9] * b[5] + a[11] * b[2],
 - a[4] * b[0] + a[6] * b[2] + a[7] * b[4] - a[8] * b[3] + a[10] * b[5] - a[11] * b[1],
 - a[4] * b[1] - a[5] * b[2] + a[7] * b[5] - a[9] * b[3] - a[10] * b[4] + a[11] * b[0],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] + a[8] * b[0] + a[9] * b[1] + a[10] * b[2],
a[4] * b[3] + a[5] * b[4] + a[6] * b[5],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] - a[7] * b[0] + a[9] * b[2] - a[10] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] - a[7] * b[1] - a[8] * b[2] + a[10] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[7] * b[2] + a[8] * b[1] - a[9] * b[0],
a[4] * b[4] - a[5] * b[3] + a[11] * b[5],
a[4] * b[5] - a[6] * b[3] - a[11] * b[4],
a[5] * b[5] - a[6] * b[4] + a[11] * b[3],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5] + a[5] * b[0] + a[6] * b[1] + a[11] * b[2],
a[0] * b[4] - a[1] * b[3] + a[3] * b[5] - a[4] * b[0] + a[6] * b[2] - a[11] * b[1],
a[0] * b[5] - a[2] * b[3] - a[3] * b[4] - a[4] * b[1] - a[5] * b[2] + a[11] * b[0],
 - a[4] * b[2] + a[5] * b[1] - a[6] * b[0] + a[8] * b[5] - a[9] * b[4] + a[10] * b[3],
a[1] * b[5] - a[2] * b[4] + a[3] * b[3] - a[4] * b[2] + a[5] * b[1] - a[6] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mtd, Dal> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mtd*)(&a),*(Dal*)(&b));
}			
		 
inline Par_Drb gp (const Mtd& a, const Mnv& b) { 
	return Par_Drb (
a[7] * b[0] + a[8] * b[1] + a[9] * b[2],
a[7] * b[1] - a[8] * b[0] + a[10] * b[2],
a[7] * b[2] - a[9] * b[0] - a[10] * b[1],
a[4] * b[0] + a[5] * b[1] + a[6] * b[2],
a[4] * b[1] - a[5] * b[0] + a[11] * b[2],
a[4] * b[2] - a[6] * b[0] - a[11] * b[1],
a[5] * b[2] - a[6] * b[1] + a[11] * b[0],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1],
a[8] * b[2] - a[9] * b[1] + a[10] * b[0],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mtd, Mnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mtd*)(&a),*(Mnv*)(&b));
}			
		 
inline Mtd gp (const Mtd& a, const Rot& b) { 
	return Mtd (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0],
a[4] * b[0] - a[5] * b[1] - a[6] * b[2] - a[11] * b[3],
a[4] * b[1] + a[5] * b[0] - a[6] * b[3] + a[11] * b[2],
a[4] * b[2] + a[5] * b[3] + a[6] * b[0] - a[11] * b[1],
a[7] * b[0] - a[8] * b[1] - a[9] * b[2] - a[10] * b[3],
a[7] * b[1] + a[8] * b[0] - a[9] * b[3] + a[10] * b[2],
a[7] * b[2] + a[8] * b[3] + a[9] * b[0] - a[10] * b[1],
a[7] * b[3] - a[8] * b[2] + a[9] * b[1] + a[10] * b[0],
a[4] * b[3] - a[5] * b[2] + a[6] * b[1] + a[11] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mtd, Rot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mtd*)(&a),*(Rot*)(&b));
}			
		 
inline Mtd gp (const Mtd& a, const Mot& b) { 
	return Mtd (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] - a[3] * b[7] + a[4] * b[0] - a[5] * b[1] - a[6] * b[2] + a[7] * b[4] + a[8] * b[5] + a[9] * b[6] - a[10] * b[7] - a[11] * b[3],
a[0] * b[5] - a[1] * b[4] + a[2] * b[7] + a[3] * b[6] + a[4] * b[1] + a[5] * b[0] - a[6] * b[3] + a[7] * b[5] - a[8] * b[4] + a[9] * b[7] + a[10] * b[6] + a[11] * b[2],
a[0] * b[6] - a[1] * b[7] - a[2] * b[4] - a[3] * b[5] + a[4] * b[2] + a[5] * b[3] + a[6] * b[0] + a[7] * b[6] - a[8] * b[7] - a[9] * b[4] - a[10] * b[5] - a[11] * b[1],
a[7] * b[0] - a[8] * b[1] - a[9] * b[2] - a[10] * b[3],
a[7] * b[1] + a[8] * b[0] - a[9] * b[3] + a[10] * b[2],
a[7] * b[2] + a[8] * b[3] + a[9] * b[0] - a[10] * b[1],
a[7] * b[3] - a[8] * b[2] + a[9] * b[1] + a[10] * b[0],
a[0] * b[7] + a[1] * b[6] - a[2] * b[5] + a[3] * b[4] + a[4] * b[3] - a[5] * b[2] + a[6] * b[1] + a[7] * b[7] + a[8] * b[6] - a[9] * b[5] + a[10] * b[4] + a[11] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mtd, Mot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mtd*)(&a),*(Mot*)(&b));
}			
		 
inline Mtd gp (const Mtd& a, const Dil& b) { 
	return Mtd (
a[0] * b[0] + a[7] * b[1],
a[1] * b[0] + a[8] * b[1],
a[2] * b[0] + a[9] * b[1],
a[3] * b[0] + a[10] * b[1],
a[4] * b[0] - a[4] * b[1],
a[5] * b[0] - a[5] * b[1],
a[6] * b[0] - a[6] * b[1],
a[0] * b[1] + a[7] * b[0],
a[1] * b[1] + a[8] * b[0],
a[2] * b[1] + a[9] * b[0],
a[3] * b[1] + a[10] * b[0],
a[11] * b[0] - a[11] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Mtd, Dil> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mtd*)(&a),*(Dil*)(&b));
}			
		 
inline Mtt gp (const Mtd& a, const Trv& b) { 
	return Mtt (
a[0] * b[0] + a[4] * b[1] + a[5] * b[2] + a[6] * b[3],
a[1] * b[0] + a[4] * b[2] - a[5] * b[1] + a[11] * b[3],
a[2] * b[0] + a[4] * b[3] - a[6] * b[1] - a[11] * b[2],
a[3] * b[0] + a[5] * b[3] - a[6] * b[2] + a[11] * b[1],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3] - a[7] * b[1] - a[8] * b[2] - a[9] * b[3],
a[0] * b[2] - a[1] * b[1] + a[3] * b[3] - a[7] * b[2] + a[8] * b[1] - a[10] * b[3],
a[0] * b[3] - a[2] * b[1] - a[3] * b[2] - a[7] * b[3] + a[9] * b[1] + a[10] * b[2],
a[4] * b[0],
a[5] * b[0],
a[6] * b[0],
a[4] * b[1] + a[5] * b[2] + a[6] * b[3] + a[7] * b[0],
a[4] * b[2] - a[5] * b[1] + a[8] * b[0] + a[11] * b[3],
a[4] * b[3] - a[6] * b[1] + a[9] * b[0] - a[11] * b[2],
a[5] * b[3] - a[6] * b[2] + a[10] * b[0] + a[11] * b[1],
a[1] * b[3] - a[2] * b[2] + a[3] * b[1] - a[8] * b[3] + a[9] * b[2] - a[10] * b[1],
a[11] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mtd, Trv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mtd*)(&a),*(Trv*)(&b));
}			
		 
inline Mtd gp (const Mtd& a, const Mtd& b) { 
	return Mtd (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[7] * b[7] - a[8] * b[8] - a[9] * b[9] - a[10] * b[10],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[7] * b[8] + a[8] * b[7] - a[9] * b[10] + a[10] * b[9],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[7] * b[9] + a[8] * b[10] + a[9] * b[7] - a[10] * b[8],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[7] * b[10] - a[8] * b[9] + a[9] * b[8] + a[10] * b[7],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] - a[3] * b[11] + a[4] * b[0] - a[4] * b[7] - a[5] * b[1] + a[5] * b[8] - a[6] * b[2] + a[6] * b[9] + a[7] * b[4] + a[8] * b[5] + a[9] * b[6] - a[10] * b[11] - a[11] * b[3] + a[11] * b[10],
a[0] * b[5] - a[1] * b[4] + a[2] * b[11] + a[3] * b[6] + a[4] * b[1] - a[4] * b[8] + a[5] * b[0] - a[5] * b[7] - a[6] * b[3] + a[6] * b[10] + a[7] * b[5] - a[8] * b[4] + a[9] * b[11] + a[10] * b[6] + a[11] * b[2] - a[11] * b[9],
a[0] * b[6] - a[1] * b[11] - a[2] * b[4] - a[3] * b[5] + a[4] * b[2] - a[4] * b[9] + a[5] * b[3] - a[5] * b[10] + a[6] * b[0] - a[6] * b[7] + a[7] * b[6] - a[8] * b[11] - a[9] * b[4] - a[10] * b[5] - a[11] * b[1] + a[11] * b[8],
a[0] * b[7] - a[1] * b[8] - a[2] * b[9] - a[3] * b[10] + a[7] * b[0] - a[8] * b[1] - a[9] * b[2] - a[10] * b[3],
a[0] * b[8] + a[1] * b[7] - a[2] * b[10] + a[3] * b[9] + a[7] * b[1] + a[8] * b[0] - a[9] * b[3] + a[10] * b[2],
a[0] * b[9] + a[1] * b[10] + a[2] * b[7] - a[3] * b[8] + a[7] * b[2] + a[8] * b[3] + a[9] * b[0] - a[10] * b[1],
a[0] * b[10] - a[1] * b[9] + a[2] * b[8] + a[3] * b[7] + a[7] * b[3] - a[8] * b[2] + a[9] * b[1] + a[10] * b[0],
a[0] * b[11] + a[1] * b[6] - a[2] * b[5] + a[3] * b[4] + a[4] * b[3] - a[4] * b[10] - a[5] * b[2] + a[5] * b[9] + a[6] * b[1] - a[6] * b[8] + a[7] * b[11] + a[8] * b[6] - a[9] * b[5] + a[10] * b[4] + a[11] * b[0] - a[11] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Mtd, Mtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mtd*)(&a),*(Mtd*)(&b));
}			
		 
inline Mtd gp (const Mtd& a, const Trs& b) { 
	return Mtd (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3] + a[4] * b[0] + a[7] * b[1] + a[8] * b[2] + a[9] * b[3],
a[0] * b[2] - a[1] * b[1] + a[3] * b[3] + a[5] * b[0] + a[7] * b[2] - a[8] * b[1] + a[10] * b[3],
a[0] * b[3] - a[2] * b[1] - a[3] * b[2] + a[6] * b[0] + a[7] * b[3] - a[9] * b[1] - a[10] * b[2],
a[7] * b[0],
a[8] * b[0],
a[9] * b[0],
a[10] * b[0],
a[1] * b[3] - a[2] * b[2] + a[3] * b[1] + a[8] * b[3] - a[9] * b[2] + a[10] * b[1] + a[11] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mtd, Trs> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mtd*)(&a),*(Trs*)(&b));
}			
		 
inline Rtc gp (const Mtd& a, const Rtc& b) { 
	return Rtc (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[3] * b[14] - a[4] * b[3] + a[5] * b[5] + a[6] * b[6] + a[7] * b[11] + a[8] * b[12] + a[9] * b[13] - a[10] * b[15] + a[11] * b[7],
a[0] * b[1] - a[1] * b[0] + a[2] * b[14] + a[3] * b[2] - a[4] * b[5] - a[5] * b[3] + a[6] * b[7] + a[7] * b[12] - a[8] * b[11] + a[9] * b[15] + a[10] * b[13] - a[11] * b[6],
a[0] * b[2] - a[1] * b[14] - a[2] * b[0] - a[3] * b[1] - a[4] * b[6] - a[5] * b[7] - a[6] * b[3] + a[7] * b[13] - a[8] * b[15] - a[9] * b[11] - a[10] * b[12] + a[11] * b[5],
a[0] * b[3] - a[1] * b[5] - a[2] * b[6] - a[3] * b[7] - a[7] * b[3] + a[8] * b[5] + a[9] * b[6] + a[10] * b[7],
a[0] * b[4] - a[1] * b[8] - a[2] * b[9] - a[3] * b[10] - a[4] * b[0] + a[4] * b[11] - a[5] * b[1] + a[5] * b[12] - a[6] * b[2] + a[6] * b[13] + a[7] * b[4] - a[8] * b[8] - a[9] * b[9] - a[10] * b[10] + a[11] * b[14] - a[11] * b[15],
a[0] * b[5] + a[1] * b[3] - a[2] * b[7] + a[3] * b[6] - a[7] * b[5] - a[8] * b[3] + a[9] * b[7] - a[10] * b[6],
a[0] * b[6] + a[1] * b[7] + a[2] * b[3] - a[3] * b[5] - a[7] * b[6] - a[8] * b[7] - a[9] * b[3] + a[10] * b[5],
a[0] * b[7] - a[1] * b[6] + a[2] * b[5] + a[3] * b[3] - a[7] * b[7] + a[8] * b[6] - a[9] * b[5] - a[10] * b[3],
a[0] * b[8] + a[1] * b[4] - a[2] * b[10] + a[3] * b[9] - a[4] * b[1] + a[4] * b[12] + a[5] * b[0] - a[5] * b[11] - a[6] * b[14] + a[6] * b[15] + a[7] * b[8] + a[8] * b[4] - a[9] * b[10] + a[10] * b[9] - a[11] * b[2] + a[11] * b[13],
a[0] * b[9] + a[1] * b[10] + a[2] * b[4] - a[3] * b[8] - a[4] * b[2] + a[4] * b[13] + a[5] * b[14] - a[5] * b[15] + a[6] * b[0] - a[6] * b[11] + a[7] * b[9] + a[8] * b[10] + a[9] * b[4] - a[10] * b[8] + a[11] * b[1] - a[11] * b[12],
a[0] * b[10] - a[1] * b[9] + a[2] * b[8] + a[3] * b[4] - a[4] * b[14] + a[4] * b[15] - a[5] * b[2] + a[5] * b[13] + a[6] * b[1] - a[6] * b[12] + a[7] * b[10] - a[8] * b[9] + a[9] * b[8] + a[10] * b[4] - a[11] * b[0] + a[11] * b[11],
a[0] * b[11] + a[1] * b[12] + a[2] * b[13] - a[3] * b[15] - a[4] * b[3] + a[5] * b[5] + a[6] * b[6] + a[7] * b[0] + a[8] * b[1] + a[9] * b[2] - a[10] * b[14] + a[11] * b[7],
a[0] * b[12] - a[1] * b[11] + a[2] * b[15] + a[3] * b[13] - a[4] * b[5] - a[5] * b[3] + a[6] * b[7] + a[7] * b[1] - a[8] * b[0] + a[9] * b[14] + a[10] * b[2] - a[11] * b[6],
a[0] * b[13] - a[1] * b[15] - a[2] * b[11] - a[3] * b[12] - a[4] * b[6] - a[5] * b[7] - a[6] * b[3] + a[7] * b[2] - a[8] * b[14] - a[9] * b[0] - a[10] * b[1] + a[11] * b[5],
a[0] * b[14] + a[1] * b[2] - a[2] * b[1] + a[3] * b[0] - a[4] * b[7] + a[5] * b[6] - a[6] * b[5] + a[7] * b[15] + a[8] * b[13] - a[9] * b[12] + a[10] * b[11] - a[11] * b[3],
a[0] * b[15] + a[1] * b[13] - a[2] * b[12] + a[3] * b[11] - a[4] * b[7] + a[5] * b[6] - a[6] * b[5] + a[7] * b[14] + a[8] * b[2] - a[9] * b[1] + a[10] * b[0] - a[11] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Mtd, Rtc> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mtd*)(&a),*(Rtc*)(&b));
}			
		 
inline Mtt gp (const Mtd& a, const Mtt& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[4] * b[4] + a[5] * b[5] + a[6] * b[6] + a[7] * b[10] - a[8] * b[11] - a[9] * b[12] - a[10] * b[13] - a[11] * b[14],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[4] * b[5] - a[5] * b[4] + a[6] * b[14] + a[7] * b[11] + a[8] * b[10] - a[9] * b[13] + a[10] * b[12] + a[11] * b[6],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[4] * b[6] - a[5] * b[14] - a[6] * b[4] + a[7] * b[12] + a[8] * b[13] + a[9] * b[10] - a[10] * b[11] - a[11] * b[5],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[4] * b[14] + a[5] * b[6] - a[6] * b[5] + a[7] * b[13] - a[8] * b[12] + a[9] * b[11] + a[10] * b[10] + a[11] * b[4],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] - a[3] * b[14] - a[7] * b[4] - a[8] * b[5] - a[9] * b[6] + a[10] * b[14],
a[0] * b[5] - a[1] * b[4] + a[2] * b[14] + a[3] * b[6] - a[7] * b[5] + a[8] * b[4] - a[9] * b[14] - a[10] * b[6],
a[0] * b[6] - a[1] * b[14] - a[2] * b[4] - a[3] * b[5] - a[7] * b[6] + a[8] * b[14] + a[9] * b[4] + a[10] * b[5],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9] - a[3] * b[15] + a[4] * b[0] - a[4] * b[10] - a[5] * b[1] + a[5] * b[11] - a[6] * b[2] + a[6] * b[12] + a[7] * b[7] + a[8] * b[8] + a[9] * b[9] - a[10] * b[15] - a[11] * b[3] + a[11] * b[13],
a[0] * b[8] - a[1] * b[7] + a[2] * b[15] + a[3] * b[9] + a[4] * b[1] - a[4] * b[11] + a[5] * b[0] - a[5] * b[10] - a[6] * b[3] + a[6] * b[13] + a[7] * b[8] - a[8] * b[7] + a[9] * b[15] + a[10] * b[9] + a[11] * b[2] - a[11] * b[12],
a[0] * b[9] - a[1] * b[15] - a[2] * b[7] - a[3] * b[8] + a[4] * b[2] - a[4] * b[12] + a[5] * b[3] - a[5] * b[13] + a[6] * b[0] - a[6] * b[10] + a[7] * b[9] - a[8] * b[15] - a[9] * b[7] - a[10] * b[8] - a[11] * b[1] + a[11] * b[11],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12] - a[3] * b[13] + a[4] * b[4] + a[5] * b[5] + a[6] * b[6] + a[7] * b[0] - a[8] * b[1] - a[9] * b[2] - a[10] * b[3] - a[11] * b[14],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13] + a[3] * b[12] + a[4] * b[5] - a[5] * b[4] + a[6] * b[14] + a[7] * b[1] + a[8] * b[0] - a[9] * b[3] + a[10] * b[2] + a[11] * b[6],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10] - a[3] * b[11] + a[4] * b[6] - a[5] * b[14] - a[6] * b[4] + a[7] * b[2] + a[8] * b[3] + a[9] * b[0] - a[10] * b[1] - a[11] * b[5],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11] + a[3] * b[10] + a[4] * b[14] + a[5] * b[6] - a[6] * b[5] + a[7] * b[3] - a[8] * b[2] + a[9] * b[1] + a[10] * b[0] + a[11] * b[4],
a[0] * b[14] + a[1] * b[6] - a[2] * b[5] + a[3] * b[4] - a[7] * b[14] - a[8] * b[6] + a[9] * b[5] - a[10] * b[4],
a[0] * b[15] + a[1] * b[9] - a[2] * b[8] + a[3] * b[7] + a[4] * b[3] - a[4] * b[13] - a[5] * b[2] + a[5] * b[12] + a[6] * b[1] - a[6] * b[11] + a[7] * b[15] + a[8] * b[9] - a[9] * b[8] + a[10] * b[7] + a[11] * b[0] - a[11] * b[10]
);
}			
		 
		
template<> inline MVBase gp_gen<Mtd, Mtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mtd*)(&a),*(Mtt*)(&b));
}			
		 
inline Mtt gp (const Mtd& a, const Rtt& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[4] * b[4] + a[5] * b[5] + a[6] * b[6] - a[11] * b[7],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[4] * b[5] - a[5] * b[4] + a[6] * b[7] + a[11] * b[6],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[4] * b[6] - a[5] * b[7] - a[6] * b[4] - a[11] * b[5],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[4] * b[7] + a[5] * b[6] - a[6] * b[5] + a[11] * b[4],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] - a[3] * b[7] - a[7] * b[4] - a[8] * b[5] - a[9] * b[6] + a[10] * b[7],
a[0] * b[5] - a[1] * b[4] + a[2] * b[7] + a[3] * b[6] - a[7] * b[5] + a[8] * b[4] - a[9] * b[7] - a[10] * b[6],
a[0] * b[6] - a[1] * b[7] - a[2] * b[4] - a[3] * b[5] - a[7] * b[6] + a[8] * b[7] + a[9] * b[4] + a[10] * b[5],
a[4] * b[0] - a[5] * b[1] - a[6] * b[2] - a[11] * b[3],
a[4] * b[1] + a[5] * b[0] - a[6] * b[3] + a[11] * b[2],
a[4] * b[2] + a[5] * b[3] + a[6] * b[0] - a[11] * b[1],
a[4] * b[4] + a[5] * b[5] + a[6] * b[6] + a[7] * b[0] - a[8] * b[1] - a[9] * b[2] - a[10] * b[3] - a[11] * b[7],
a[4] * b[5] - a[5] * b[4] + a[6] * b[7] + a[7] * b[1] + a[8] * b[0] - a[9] * b[3] + a[10] * b[2] + a[11] * b[6],
a[4] * b[6] - a[5] * b[7] - a[6] * b[4] + a[7] * b[2] + a[8] * b[3] + a[9] * b[0] - a[10] * b[1] - a[11] * b[5],
a[4] * b[7] + a[5] * b[6] - a[6] * b[5] + a[7] * b[3] - a[8] * b[2] + a[9] * b[1] + a[10] * b[0] + a[11] * b[4],
a[0] * b[7] + a[1] * b[6] - a[2] * b[5] + a[3] * b[4] - a[7] * b[7] - a[8] * b[6] + a[9] * b[5] - a[10] * b[4],
a[4] * b[3] - a[5] * b[2] + a[6] * b[1] + a[11] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Mtd, Rtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mtd*)(&a),*(Rtt*)(&b));
}			
		 
inline Mtd gp (const Mtd& a, const Rtd& b) { 
	return Mtd (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[7] * b[4] - a[8] * b[5] - a[9] * b[6] - a[10] * b[7],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[7] * b[5] + a[8] * b[4] - a[9] * b[7] + a[10] * b[6],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[7] * b[6] + a[8] * b[7] + a[9] * b[4] - a[10] * b[5],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[7] * b[7] - a[8] * b[6] + a[9] * b[5] + a[10] * b[4],
a[4] * b[0] - a[4] * b[4] - a[5] * b[1] + a[5] * b[5] - a[6] * b[2] + a[6] * b[6] - a[11] * b[3] + a[11] * b[7],
a[4] * b[1] - a[4] * b[5] + a[5] * b[0] - a[5] * b[4] - a[6] * b[3] + a[6] * b[7] + a[11] * b[2] - a[11] * b[6],
a[4] * b[2] - a[4] * b[6] + a[5] * b[3] - a[5] * b[7] + a[6] * b[0] - a[6] * b[4] - a[11] * b[1] + a[11] * b[5],
a[0] * b[4] - a[1] * b[5] - a[2] * b[6] - a[3] * b[7] + a[7] * b[0] - a[8] * b[1] - a[9] * b[2] - a[10] * b[3],
a[0] * b[5] + a[1] * b[4] - a[2] * b[7] + a[3] * b[6] + a[7] * b[1] + a[8] * b[0] - a[9] * b[3] + a[10] * b[2],
a[0] * b[6] + a[1] * b[7] + a[2] * b[4] - a[3] * b[5] + a[7] * b[2] + a[8] * b[3] + a[9] * b[0] - a[10] * b[1],
a[0] * b[7] - a[1] * b[6] + a[2] * b[5] + a[3] * b[4] + a[7] * b[3] - a[8] * b[2] + a[9] * b[1] + a[10] * b[0],
a[4] * b[3] - a[4] * b[7] - a[5] * b[2] + a[5] * b[6] + a[6] * b[1] - a[6] * b[5] + a[11] * b[0] - a[11] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Mtd, Rtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mtd*)(&a),*(Rtd*)(&b));
}			
		 
inline Mtt gp (const Mtd& a, const Tvd& b) { 
	return Mtt (
a[0] * b[0] + a[4] * b[1] + a[5] * b[2] + a[6] * b[3] + a[7] * b[4],
a[1] * b[0] + a[4] * b[2] - a[5] * b[1] + a[8] * b[4] + a[11] * b[3],
a[2] * b[0] + a[4] * b[3] - a[6] * b[1] + a[9] * b[4] - a[11] * b[2],
a[3] * b[0] + a[5] * b[3] - a[6] * b[2] + a[10] * b[4] + a[11] * b[1],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3] - a[7] * b[1] - a[8] * b[2] - a[9] * b[3],
a[0] * b[2] - a[1] * b[1] + a[3] * b[3] - a[7] * b[2] + a[8] * b[1] - a[10] * b[3],
a[0] * b[3] - a[2] * b[1] - a[3] * b[2] - a[7] * b[3] + a[9] * b[1] + a[10] * b[2],
a[4] * b[0] - a[4] * b[4],
a[5] * b[0] - a[5] * b[4],
a[6] * b[0] - a[6] * b[4],
a[0] * b[4] + a[4] * b[1] + a[5] * b[2] + a[6] * b[3] + a[7] * b[0],
a[1] * b[4] + a[4] * b[2] - a[5] * b[1] + a[8] * b[0] + a[11] * b[3],
a[2] * b[4] + a[4] * b[3] - a[6] * b[1] + a[9] * b[0] - a[11] * b[2],
a[3] * b[4] + a[5] * b[3] - a[6] * b[2] + a[10] * b[0] + a[11] * b[1],
a[1] * b[3] - a[2] * b[2] + a[3] * b[1] - a[8] * b[3] + a[9] * b[2] - a[10] * b[1],
a[11] * b[0] - a[11] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Mtd, Tvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mtd*)(&a),*(Tvd*)(&b));
}			
		 
inline Mtd gp (const Mtd& a, const Tsd& b) { 
	return Mtd (
a[0] * b[0] + a[7] * b[4],
a[1] * b[0] + a[8] * b[4],
a[2] * b[0] + a[9] * b[4],
a[3] * b[0] + a[10] * b[4],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3] + a[4] * b[0] - a[4] * b[4] + a[7] * b[1] + a[8] * b[2] + a[9] * b[3],
a[0] * b[2] - a[1] * b[1] + a[3] * b[3] + a[5] * b[0] - a[5] * b[4] + a[7] * b[2] - a[8] * b[1] + a[10] * b[3],
a[0] * b[3] - a[2] * b[1] - a[3] * b[2] + a[6] * b[0] - a[6] * b[4] + a[7] * b[3] - a[9] * b[1] - a[10] * b[2],
a[0] * b[4] + a[7] * b[0],
a[1] * b[4] + a[8] * b[0],
a[2] * b[4] + a[9] * b[0],
a[3] * b[4] + a[10] * b[0],
a[1] * b[3] - a[2] * b[2] + a[3] * b[1] + a[8] * b[3] - a[9] * b[2] + a[10] * b[1] + a[11] * b[0] - a[11] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Mtd, Tsd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mtd*)(&a),*(Tsd*)(&b));
}			
		 
inline Mtt gp (const Mtd& a, const Trt& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[4] * b[4] + a[5] * b[5] + a[6] * b[6] + a[7] * b[10] - a[8] * b[11] - a[9] * b[12] - a[10] * b[13],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[4] * b[5] - a[5] * b[4] + a[7] * b[11] + a[8] * b[10] - a[9] * b[13] + a[10] * b[12] + a[11] * b[6],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[4] * b[6] - a[6] * b[4] + a[7] * b[12] + a[8] * b[13] + a[9] * b[10] - a[10] * b[11] - a[11] * b[5],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[5] * b[6] - a[6] * b[5] + a[7] * b[13] - a[8] * b[12] + a[9] * b[11] + a[10] * b[10] + a[11] * b[4],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] - a[7] * b[4] - a[8] * b[5] - a[9] * b[6],
a[0] * b[5] - a[1] * b[4] + a[3] * b[6] - a[7] * b[5] + a[8] * b[4] - a[10] * b[6],
a[0] * b[6] - a[2] * b[4] - a[3] * b[5] - a[7] * b[6] + a[9] * b[4] + a[10] * b[5],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9] + a[4] * b[0] - a[4] * b[10] - a[5] * b[1] + a[5] * b[11] - a[6] * b[2] + a[6] * b[12] + a[7] * b[7] + a[8] * b[8] + a[9] * b[9] - a[11] * b[3] + a[11] * b[13],
a[0] * b[8] - a[1] * b[7] + a[3] * b[9] + a[4] * b[1] - a[4] * b[11] + a[5] * b[0] - a[5] * b[10] - a[6] * b[3] + a[6] * b[13] + a[7] * b[8] - a[8] * b[7] + a[10] * b[9] + a[11] * b[2] - a[11] * b[12],
a[0] * b[9] - a[2] * b[7] - a[3] * b[8] + a[4] * b[2] - a[4] * b[12] + a[5] * b[3] - a[5] * b[13] + a[6] * b[0] - a[6] * b[10] + a[7] * b[9] - a[9] * b[7] - a[10] * b[8] - a[11] * b[1] + a[11] * b[11],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12] - a[3] * b[13] + a[4] * b[4] + a[5] * b[5] + a[6] * b[6] + a[7] * b[0] - a[8] * b[1] - a[9] * b[2] - a[10] * b[3],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13] + a[3] * b[12] + a[4] * b[5] - a[5] * b[4] + a[7] * b[1] + a[8] * b[0] - a[9] * b[3] + a[10] * b[2] + a[11] * b[6],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10] - a[3] * b[11] + a[4] * b[6] - a[6] * b[4] + a[7] * b[2] + a[8] * b[3] + a[9] * b[0] - a[10] * b[1] - a[11] * b[5],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11] + a[3] * b[10] + a[5] * b[6] - a[6] * b[5] + a[7] * b[3] - a[8] * b[2] + a[9] * b[1] + a[10] * b[0] + a[11] * b[4],
a[1] * b[6] - a[2] * b[5] + a[3] * b[4] - a[8] * b[6] + a[9] * b[5] - a[10] * b[4],
a[1] * b[9] - a[2] * b[8] + a[3] * b[7] + a[4] * b[3] - a[4] * b[13] - a[5] * b[2] + a[5] * b[12] + a[6] * b[1] - a[6] * b[11] + a[8] * b[9] - a[9] * b[8] + a[10] * b[7] + a[11] * b[0] - a[11] * b[10]
);
}			
		 
		
template<> inline MVBase gp_gen<Mtd, Trt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mtd*)(&a),*(Trt*)(&b));
}			
		 
inline Mtt gp (const Mtd& a, const Rvd& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[4] * b[4] + a[5] * b[5] + a[6] * b[6] + a[7] * b[7] - a[8] * b[8] - a[9] * b[9] - a[10] * b[10] - a[11] * b[11],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[4] * b[5] - a[5] * b[4] + a[6] * b[11] + a[7] * b[8] + a[8] * b[7] - a[9] * b[10] + a[10] * b[9] + a[11] * b[6],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[4] * b[6] - a[5] * b[11] - a[6] * b[4] + a[7] * b[9] + a[8] * b[10] + a[9] * b[7] - a[10] * b[8] - a[11] * b[5],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[4] * b[11] + a[5] * b[6] - a[6] * b[5] + a[7] * b[10] - a[8] * b[9] + a[9] * b[8] + a[10] * b[7] + a[11] * b[4],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] - a[3] * b[11] - a[7] * b[4] - a[8] * b[5] - a[9] * b[6] + a[10] * b[11],
a[0] * b[5] - a[1] * b[4] + a[2] * b[11] + a[3] * b[6] - a[7] * b[5] + a[8] * b[4] - a[9] * b[11] - a[10] * b[6],
a[0] * b[6] - a[1] * b[11] - a[2] * b[4] - a[3] * b[5] - a[7] * b[6] + a[8] * b[11] + a[9] * b[4] + a[10] * b[5],
a[4] * b[0] - a[4] * b[7] - a[5] * b[1] + a[5] * b[8] - a[6] * b[2] + a[6] * b[9] - a[11] * b[3] + a[11] * b[10],
a[4] * b[1] - a[4] * b[8] + a[5] * b[0] - a[5] * b[7] - a[6] * b[3] + a[6] * b[10] + a[11] * b[2] - a[11] * b[9],
a[4] * b[2] - a[4] * b[9] + a[5] * b[3] - a[5] * b[10] + a[6] * b[0] - a[6] * b[7] - a[11] * b[1] + a[11] * b[8],
a[0] * b[7] - a[1] * b[8] - a[2] * b[9] - a[3] * b[10] + a[4] * b[4] + a[5] * b[5] + a[6] * b[6] + a[7] * b[0] - a[8] * b[1] - a[9] * b[2] - a[10] * b[3] - a[11] * b[11],
a[0] * b[8] + a[1] * b[7] - a[2] * b[10] + a[3] * b[9] + a[4] * b[5] - a[5] * b[4] + a[6] * b[11] + a[7] * b[1] + a[8] * b[0] - a[9] * b[3] + a[10] * b[2] + a[11] * b[6],
a[0] * b[9] + a[1] * b[10] + a[2] * b[7] - a[3] * b[8] + a[4] * b[6] - a[5] * b[11] - a[6] * b[4] + a[7] * b[2] + a[8] * b[3] + a[9] * b[0] - a[10] * b[1] - a[11] * b[5],
a[0] * b[10] - a[1] * b[9] + a[2] * b[8] + a[3] * b[7] + a[4] * b[11] + a[5] * b[6] - a[6] * b[5] + a[7] * b[3] - a[8] * b[2] + a[9] * b[1] + a[10] * b[0] + a[11] * b[4],
a[0] * b[11] + a[1] * b[6] - a[2] * b[5] + a[3] * b[4] - a[7] * b[11] - a[8] * b[6] + a[9] * b[5] - a[10] * b[4],
a[4] * b[3] - a[4] * b[10] - a[5] * b[2] + a[5] * b[9] + a[6] * b[1] - a[6] * b[8] + a[11] * b[0] - a[11] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Mtd, Rvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mtd*)(&a),*(Rvd*)(&b));
}			
		 
inline Mtt gp (const Mtd& a, const Tst& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[4] * b[4] + a[5] * b[5] + a[6] * b[6] + a[7] * b[10] - a[8] * b[11] - a[9] * b[12] - a[10] * b[13] - a[11] * b[14],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[4] * b[5] - a[5] * b[4] + a[6] * b[14] + a[7] * b[11] + a[8] * b[10] - a[9] * b[13] + a[10] * b[12] + a[11] * b[6],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[4] * b[6] - a[5] * b[14] - a[6] * b[4] + a[7] * b[12] + a[8] * b[13] + a[9] * b[10] - a[10] * b[11] - a[11] * b[5],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[4] * b[14] + a[5] * b[6] - a[6] * b[5] + a[7] * b[13] - a[8] * b[12] + a[9] * b[11] + a[10] * b[10] + a[11] * b[4],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] - a[3] * b[14] - a[7] * b[4] - a[8] * b[5] - a[9] * b[6] + a[10] * b[14],
a[0] * b[5] - a[1] * b[4] + a[2] * b[14] + a[3] * b[6] - a[7] * b[5] + a[8] * b[4] - a[9] * b[14] - a[10] * b[6],
a[0] * b[6] - a[1] * b[14] - a[2] * b[4] - a[3] * b[5] - a[7] * b[6] + a[8] * b[14] + a[9] * b[4] + a[10] * b[5],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9] + a[4] * b[0] - a[4] * b[10] - a[5] * b[1] + a[5] * b[11] - a[6] * b[2] + a[6] * b[12] + a[7] * b[7] + a[8] * b[8] + a[9] * b[9] - a[11] * b[3] + a[11] * b[13],
a[0] * b[8] - a[1] * b[7] + a[3] * b[9] + a[4] * b[1] - a[4] * b[11] + a[5] * b[0] - a[5] * b[10] - a[6] * b[3] + a[6] * b[13] + a[7] * b[8] - a[8] * b[7] + a[10] * b[9] + a[11] * b[2] - a[11] * b[12],
a[0] * b[9] - a[2] * b[7] - a[3] * b[8] + a[4] * b[2] - a[4] * b[12] + a[5] * b[3] - a[5] * b[13] + a[6] * b[0] - a[6] * b[10] + a[7] * b[9] - a[9] * b[7] - a[10] * b[8] - a[11] * b[1] + a[11] * b[11],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12] - a[3] * b[13] + a[4] * b[4] + a[5] * b[5] + a[6] * b[6] + a[7] * b[0] - a[8] * b[1] - a[9] * b[2] - a[10] * b[3] - a[11] * b[14],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13] + a[3] * b[12] + a[4] * b[5] - a[5] * b[4] + a[6] * b[14] + a[7] * b[1] + a[8] * b[0] - a[9] * b[3] + a[10] * b[2] + a[11] * b[6],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10] - a[3] * b[11] + a[4] * b[6] - a[5] * b[14] - a[6] * b[4] + a[7] * b[2] + a[8] * b[3] + a[9] * b[0] - a[10] * b[1] - a[11] * b[5],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11] + a[3] * b[10] + a[4] * b[14] + a[5] * b[6] - a[6] * b[5] + a[7] * b[3] - a[8] * b[2] + a[9] * b[1] + a[10] * b[0] + a[11] * b[4],
a[0] * b[14] + a[1] * b[6] - a[2] * b[5] + a[3] * b[4] - a[7] * b[14] - a[8] * b[6] + a[9] * b[5] - a[10] * b[4],
a[1] * b[9] - a[2] * b[8] + a[3] * b[7] + a[4] * b[3] - a[4] * b[13] - a[5] * b[2] + a[5] * b[12] + a[6] * b[1] - a[6] * b[11] + a[8] * b[9] - a[9] * b[8] + a[10] * b[7] + a[11] * b[0] - a[11] * b[10]
);
}			
		 
		
template<> inline MVBase gp_gen<Mtd, Tst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mtd*)(&a),*(Tst*)(&b));
}			
		 
inline Mtt gp (const Mtd& a, const Tvt& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[4] * b[4] + a[5] * b[5] + a[6] * b[6] + a[7] * b[10] - a[8] * b[11] - a[9] * b[12] - a[10] * b[13],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[4] * b[5] - a[5] * b[4] + a[7] * b[11] + a[8] * b[10] - a[9] * b[13] + a[10] * b[12] + a[11] * b[6],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[4] * b[6] - a[6] * b[4] + a[7] * b[12] + a[8] * b[13] + a[9] * b[10] - a[10] * b[11] - a[11] * b[5],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[5] * b[6] - a[6] * b[5] + a[7] * b[13] - a[8] * b[12] + a[9] * b[11] + a[10] * b[10] + a[11] * b[4],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] - a[7] * b[4] - a[8] * b[5] - a[9] * b[6],
a[0] * b[5] - a[1] * b[4] + a[3] * b[6] - a[7] * b[5] + a[8] * b[4] - a[10] * b[6],
a[0] * b[6] - a[2] * b[4] - a[3] * b[5] - a[7] * b[6] + a[9] * b[4] + a[10] * b[5],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9] - a[3] * b[14] + a[4] * b[0] - a[4] * b[10] - a[5] * b[1] + a[5] * b[11] - a[6] * b[2] + a[6] * b[12] + a[7] * b[7] + a[8] * b[8] + a[9] * b[9] - a[10] * b[14] - a[11] * b[3] + a[11] * b[13],
a[0] * b[8] - a[1] * b[7] + a[2] * b[14] + a[3] * b[9] + a[4] * b[1] - a[4] * b[11] + a[5] * b[0] - a[5] * b[10] - a[6] * b[3] + a[6] * b[13] + a[7] * b[8] - a[8] * b[7] + a[9] * b[14] + a[10] * b[9] + a[11] * b[2] - a[11] * b[12],
a[0] * b[9] - a[1] * b[14] - a[2] * b[7] - a[3] * b[8] + a[4] * b[2] - a[4] * b[12] + a[5] * b[3] - a[5] * b[13] + a[6] * b[0] - a[6] * b[10] + a[7] * b[9] - a[8] * b[14] - a[9] * b[7] - a[10] * b[8] - a[11] * b[1] + a[11] * b[11],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12] - a[3] * b[13] + a[4] * b[4] + a[5] * b[5] + a[6] * b[6] + a[7] * b[0] - a[8] * b[1] - a[9] * b[2] - a[10] * b[3],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13] + a[3] * b[12] + a[4] * b[5] - a[5] * b[4] + a[7] * b[1] + a[8] * b[0] - a[9] * b[3] + a[10] * b[2] + a[11] * b[6],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10] - a[3] * b[11] + a[4] * b[6] - a[6] * b[4] + a[7] * b[2] + a[8] * b[3] + a[9] * b[0] - a[10] * b[1] - a[11] * b[5],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11] + a[3] * b[10] + a[5] * b[6] - a[6] * b[5] + a[7] * b[3] - a[8] * b[2] + a[9] * b[1] + a[10] * b[0] + a[11] * b[4],
a[1] * b[6] - a[2] * b[5] + a[3] * b[4] - a[8] * b[6] + a[9] * b[5] - a[10] * b[4],
a[0] * b[14] + a[1] * b[9] - a[2] * b[8] + a[3] * b[7] + a[4] * b[3] - a[4] * b[13] - a[5] * b[2] + a[5] * b[12] + a[6] * b[1] - a[6] * b[11] + a[7] * b[14] + a[8] * b[9] - a[9] * b[8] + a[10] * b[7] + a[11] * b[0] - a[11] * b[10]
);
}			
		 
		
template<> inline MVBase gp_gen<Mtd, Tvt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mtd*)(&a),*(Tvt*)(&b));
}			
		 
inline Mtt gp (const Mtd& a, const Bst& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[4] * b[4] + a[5] * b[5] + a[6] * b[6] + a[7] * b[10],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[4] * b[5] - a[5] * b[4] + a[8] * b[10] + a[11] * b[6],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[4] * b[6] - a[6] * b[4] + a[9] * b[10] - a[11] * b[5],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[5] * b[6] - a[6] * b[5] + a[10] * b[10] + a[11] * b[4],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] - a[7] * b[4] - a[8] * b[5] - a[9] * b[6],
a[0] * b[5] - a[1] * b[4] + a[3] * b[6] - a[7] * b[5] + a[8] * b[4] - a[10] * b[6],
a[0] * b[6] - a[2] * b[4] - a[3] * b[5] - a[7] * b[6] + a[9] * b[4] + a[10] * b[5],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9] + a[4] * b[0] - a[4] * b[10] - a[5] * b[1] - a[6] * b[2] + a[7] * b[7] + a[8] * b[8] + a[9] * b[9] - a[11] * b[3],
a[0] * b[8] - a[1] * b[7] + a[3] * b[9] + a[4] * b[1] + a[5] * b[0] - a[5] * b[10] - a[6] * b[3] + a[7] * b[8] - a[8] * b[7] + a[10] * b[9] + a[11] * b[2],
a[0] * b[9] - a[2] * b[7] - a[3] * b[8] + a[4] * b[2] + a[5] * b[3] + a[6] * b[0] - a[6] * b[10] + a[7] * b[9] - a[9] * b[7] - a[10] * b[8] - a[11] * b[1],
a[0] * b[10] + a[4] * b[4] + a[5] * b[5] + a[6] * b[6] + a[7] * b[0] - a[8] * b[1] - a[9] * b[2] - a[10] * b[3],
a[1] * b[10] + a[4] * b[5] - a[5] * b[4] + a[7] * b[1] + a[8] * b[0] - a[9] * b[3] + a[10] * b[2] + a[11] * b[6],
a[2] * b[10] + a[4] * b[6] - a[6] * b[4] + a[7] * b[2] + a[8] * b[3] + a[9] * b[0] - a[10] * b[1] - a[11] * b[5],
a[3] * b[10] + a[5] * b[6] - a[6] * b[5] + a[7] * b[3] - a[8] * b[2] + a[9] * b[1] + a[10] * b[0] + a[11] * b[4],
a[1] * b[6] - a[2] * b[5] + a[3] * b[4] - a[8] * b[6] + a[9] * b[5] - a[10] * b[4],
a[1] * b[9] - a[2] * b[8] + a[3] * b[7] + a[4] * b[3] - a[5] * b[2] + a[6] * b[1] + a[8] * b[9] - a[9] * b[8] + a[10] * b[7] + a[11] * b[0] - a[11] * b[10]
);
}			
		 
		
template<> inline MVBase gp_gen<Mtd, Bst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Mtd*)(&a),*(Bst*)(&b));
}			
		 
inline Mtd ip (const Mtd& a, const Mtd& b) { 
	return Mtd (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[7] * b[7] - a[8] * b[8] - a[9] * b[9] - a[10] * b[10],
a[0] * b[1] + a[7] * b[8],
a[0] * b[2] + a[7] * b[9],
a[0] * b[3] + a[7] * b[10],
a[0] * b[4] - a[3] * b[11] + a[5] * b[8] + a[6] * b[9],
a[0] * b[5] + a[2] * b[11] - a[4] * b[8] + a[6] * b[10],
a[0] * b[6] - a[1] * b[11] - a[4] * b[9] - a[5] * b[10],
a[0] * b[7] - a[1] * b[8] - a[2] * b[9] - a[3] * b[10],
a[0] * b[8],
a[0] * b[9],
a[0] * b[10],
a[0] * b[11]
);
}			
		 
		
template<> inline MVBase ip_gen<Mtd, Mtd> (const MVBase& a, const MVBase& b) { 
	return ip(*(Mtd*)(&a),*(Mtd*)(&b));
}			
		  	
template<>
inline Mtd sp (const Mtd& mtd, const Rot& rot) {					
					
const Rot& t1 = rot;
const Mtd& t2 = mtd;
Mtd t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] - t1[3] * t2[11],
t1[0] * t2[5] - t1[1] * t2[4] + t1[2] * t2[11] + t1[3] * t2[6],
t1[0] * t2[6] - t1[1] * t2[11] - t1[2] * t2[4] - t1[3] * t2[5],
t1[0] * t2[7] - t1[1] * t2[8] - t1[2] * t2[9] - t1[3] * t2[10],
t1[0] * t2[8] + t1[1] * t2[7] - t1[2] * t2[10] + t1[3] * t2[9],
t1[0] * t2[9] + t1[1] * t2[10] + t1[2] * t2[7] - t1[3] * t2[8],
t1[0] * t2[10] - t1[1] * t2[9] + t1[2] * t2[8] + t1[3] * t2[7],
t1[0] * t2[11] + t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4]
);
const Rot& t4 = rot;
Rot t5 = reverse( t4);
return Mtd (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0],
t3[4] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[11] * t5[3],
t3[4] * t5[1] + t3[5] * t5[0] - t3[6] * t5[3] + t3[11] * t5[2],
t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] - t3[11] * t5[1],
t3[7] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[10] * t5[3],
t3[7] * t5[1] + t3[8] * t5[0] - t3[9] * t5[3] + t3[10] * t5[2],
t3[7] * t5[2] + t3[8] * t5[3] + t3[9] * t5[0] - t3[10] * t5[1],
t3[7] * t5[3] - t3[8] * t5[2] + t3[9] * t5[1] + t3[10] * t5[0],
t3[4] * t5[3] - t3[5] * t5[2] + t3[6] * t5[1] + t3[11] * t5[0]
);

}
		
	
	  	
template<>
inline Mtd sp (const Mtd& mtd, const Mot& mot) {					
					
const Mot& t1 = mot;
const Mtd& t2 = mtd;
Mtd t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] - t1[3] * t2[11] + t1[4] * t2[0] - t1[4] * t2[7] - t1[5] * t2[1] + t1[5] * t2[8] - t1[6] * t2[2] + t1[6] * t2[9] - t1[7] * t2[3] + t1[7] * t2[10],
t1[0] * t2[5] - t1[1] * t2[4] + t1[2] * t2[11] + t1[3] * t2[6] + t1[4] * t2[1] - t1[4] * t2[8] + t1[5] * t2[0] - t1[5] * t2[7] - t1[6] * t2[3] + t1[6] * t2[10] + t1[7] * t2[2] - t1[7] * t2[9],
t1[0] * t2[6] - t1[1] * t2[11] - t1[2] * t2[4] - t1[3] * t2[5] + t1[4] * t2[2] - t1[4] * t2[9] + t1[5] * t2[3] - t1[5] * t2[10] + t1[6] * t2[0] - t1[6] * t2[7] - t1[7] * t2[1] + t1[7] * t2[8],
t1[0] * t2[7] - t1[1] * t2[8] - t1[2] * t2[9] - t1[3] * t2[10],
t1[0] * t2[8] + t1[1] * t2[7] - t1[2] * t2[10] + t1[3] * t2[9],
t1[0] * t2[9] + t1[1] * t2[10] + t1[2] * t2[7] - t1[3] * t2[8],
t1[0] * t2[10] - t1[1] * t2[9] + t1[2] * t2[8] + t1[3] * t2[7],
t1[0] * t2[11] + t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4] + t1[4] * t2[3] - t1[4] * t2[10] - t1[5] * t2[2] + t1[5] * t2[9] + t1[6] * t2[1] - t1[6] * t2[8] + t1[7] * t2[0] - t1[7] * t2[7]
);
const Mot& t4 = mot;
Mot t5 = reverse( t4);
return Mtd (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0],
t3[0] * t5[4] + t3[1] * t5[5] + t3[2] * t5[6] - t3[3] * t5[7] + t3[4] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] - t3[10] * t5[7] - t3[11] * t5[3],
t3[0] * t5[5] - t3[1] * t5[4] + t3[2] * t5[7] + t3[3] * t5[6] + t3[4] * t5[1] + t3[5] * t5[0] - t3[6] * t5[3] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[7] + t3[10] * t5[6] + t3[11] * t5[2],
t3[0] * t5[6] - t3[1] * t5[7] - t3[2] * t5[4] - t3[3] * t5[5] + t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] + t3[7] * t5[6] - t3[8] * t5[7] - t3[9] * t5[4] - t3[10] * t5[5] - t3[11] * t5[1],
t3[7] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[10] * t5[3],
t3[7] * t5[1] + t3[8] * t5[0] - t3[9] * t5[3] + t3[10] * t5[2],
t3[7] * t5[2] + t3[8] * t5[3] + t3[9] * t5[0] - t3[10] * t5[1],
t3[7] * t5[3] - t3[8] * t5[2] + t3[9] * t5[1] + t3[10] * t5[0],
t3[0] * t5[7] + t3[1] * t5[6] - t3[2] * t5[5] + t3[3] * t5[4] + t3[4] * t5[3] - t3[5] * t5[2] + t3[6] * t5[1] + t3[7] * t5[7] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[4] + t3[11] * t5[0]
);

}
		
	
	  	
template<>
inline Mtd sp (const Mtd& mtd, const Dil& dil) {					
					
const Dil& t1 = dil;
const Mtd& t2 = mtd;
Mtd t3 (
t1[0] * t2[0] + t1[1] * t2[7],
t1[0] * t2[1] + t1[1] * t2[8],
t1[0] * t2[2] + t1[1] * t2[9],
t1[0] * t2[3] + t1[1] * t2[10],
t1[0] * t2[4] + t1[1] * t2[4],
t1[0] * t2[5] + t1[1] * t2[5],
t1[0] * t2[6] + t1[1] * t2[6],
t1[0] * t2[7] + t1[1] * t2[0],
t1[0] * t2[8] + t1[1] * t2[1],
t1[0] * t2[9] + t1[1] * t2[2],
t1[0] * t2[10] + t1[1] * t2[3],
t1[0] * t2[11] + t1[1] * t2[11]
);
const Dil& t4 = dil;
Dil t5 = reverse( t4);
return Mtd (
t3[0] * t5[0] + t3[7] * t5[1],
t3[1] * t5[0] + t3[8] * t5[1],
t3[2] * t5[0] + t3[9] * t5[1],
t3[3] * t5[0] + t3[10] * t5[1],
t3[4] * t5[0] - t3[4] * t5[1],
t3[5] * t5[0] - t3[5] * t5[1],
t3[6] * t5[0] - t3[6] * t5[1],
t3[0] * t5[1] + t3[7] * t5[0],
t3[1] * t5[1] + t3[8] * t5[0],
t3[2] * t5[1] + t3[9] * t5[0],
t3[3] * t5[1] + t3[10] * t5[0],
t3[11] * t5[0] - t3[11] * t5[1]
);

}
		
	
	  	
template<>
inline Mtd sp (const Mtd& mtd, const Trv& trv) {					
					
const Trv& t1 = trv;
const Mtd& t2 = mtd;
Mtt t3 (
t1[0] * t2[0] + t1[1] * t2[4] + t1[2] * t2[5] + t1[3] * t2[6],
t1[0] * t2[1] + t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[11],
t1[0] * t2[2] + t1[1] * t2[6] - t1[2] * t2[11] - t1[3] * t2[4],
t1[0] * t2[3] + t1[1] * t2[11] + t1[2] * t2[6] - t1[3] * t2[5],
t1[1] * t2[0] + t1[1] * t2[7] - t1[2] * t2[1] - t1[2] * t2[8] - t1[3] * t2[2] - t1[3] * t2[9],
t1[1] * t2[1] + t1[1] * t2[8] + t1[2] * t2[0] + t1[2] * t2[7] - t1[3] * t2[3] - t1[3] * t2[10],
t1[1] * t2[2] + t1[1] * t2[9] + t1[2] * t2[3] + t1[2] * t2[10] + t1[3] * t2[0] + t1[3] * t2[7],
t1[0] * t2[4],
t1[0] * t2[5],
t1[0] * t2[6],
t1[0] * t2[7] - t1[1] * t2[4] - t1[2] * t2[5] - t1[3] * t2[6],
t1[0] * t2[8] - t1[1] * t2[5] + t1[2] * t2[4] - t1[3] * t2[11],
t1[0] * t2[9] - t1[1] * t2[6] + t1[2] * t2[11] + t1[3] * t2[4],
t1[0] * t2[10] - t1[1] * t2[11] - t1[2] * t2[6] + t1[3] * t2[5],
t1[1] * t2[3] + t1[1] * t2[10] - t1[2] * t2[2] - t1[2] * t2[9] + t1[3] * t2[1] + t1[3] * t2[8],
t1[0] * t2[11]
);
const Trv& t4 = trv;
Trv t5 = reverse( t4);
return Mtd (
t3[0] * t5[0] + t3[7] * t5[1] + t3[8] * t5[2] + t3[9] * t5[3],
t3[1] * t5[0] + t3[7] * t5[2] - t3[8] * t5[1] + t3[15] * t5[3],
t3[2] * t5[0] + t3[7] * t5[3] - t3[9] * t5[1] - t3[15] * t5[2],
t3[3] * t5[0] + t3[8] * t5[3] - t3[9] * t5[2] + t3[15] * t5[1],
t3[7] * t5[0],
t3[8] * t5[0],
t3[9] * t5[0],
t3[7] * t5[1] + t3[8] * t5[2] + t3[9] * t5[3] + t3[10] * t5[0],
t3[7] * t5[2] - t3[8] * t5[1] + t3[11] * t5[0] + t3[15] * t5[3],
t3[7] * t5[3] - t3[9] * t5[1] + t3[12] * t5[0] - t3[15] * t5[2],
t3[8] * t5[3] - t3[9] * t5[2] + t3[13] * t5[0] + t3[15] * t5[1],
t3[15] * t5[0]
);

}
		
	
	  	
template<>
inline Mtd sp (const Mtd& mtd, const Trs& trs) {					
					
const Trs& t1 = trs;
const Mtd& t2 = mtd;
Mtd t3 (
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
t1[0] * t2[3],
t1[0] * t2[4] + t1[1] * t2[0] - t1[1] * t2[7] - t1[2] * t2[1] + t1[2] * t2[8] - t1[3] * t2[2] + t1[3] * t2[9],
t1[0] * t2[5] + t1[1] * t2[1] - t1[1] * t2[8] + t1[2] * t2[0] - t1[2] * t2[7] - t1[3] * t2[3] + t1[3] * t2[10],
t1[0] * t2[6] + t1[1] * t2[2] - t1[1] * t2[9] + t1[2] * t2[3] - t1[2] * t2[10] + t1[3] * t2[0] - t1[3] * t2[7],
t1[0] * t2[7],
t1[0] * t2[8],
t1[0] * t2[9],
t1[0] * t2[10],
t1[0] * t2[11] + t1[1] * t2[3] - t1[1] * t2[10] - t1[2] * t2[2] + t1[2] * t2[9] + t1[3] * t2[1] - t1[3] * t2[8]
);
const Trs& t4 = trs;
Trs t5 = reverse( t4);
return Mtd (
t3[0] * t5[0],
t3[1] * t5[0],
t3[2] * t5[0],
t3[3] * t5[0],
t3[0] * t5[1] + t3[1] * t5[2] + t3[2] * t5[3] + t3[4] * t5[0] + t3[7] * t5[1] + t3[8] * t5[2] + t3[9] * t5[3],
t3[0] * t5[2] - t3[1] * t5[1] + t3[3] * t5[3] + t3[5] * t5[0] + t3[7] * t5[2] - t3[8] * t5[1] + t3[10] * t5[3],
t3[0] * t5[3] - t3[2] * t5[1] - t3[3] * t5[2] + t3[6] * t5[0] + t3[7] * t5[3] - t3[9] * t5[1] - t3[10] * t5[2],
t3[7] * t5[0],
t3[8] * t5[0],
t3[9] * t5[0],
t3[10] * t5[0],
t3[1] * t5[3] - t3[2] * t5[2] + t3[3] * t5[1] + t3[8] * t5[3] - t3[9] * t5[2] + t3[10] * t5[1] + t3[11] * t5[0]
);

}
		
	
	  	
template<>
inline Mtd sp (const Mtd& mtd, const Rtc& rtc) {					
					
const Rtc& t1 = rtc;
const Mtd& t2 = mtd;
Rtc t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] + t1[3] * t2[4] + t1[5] * t2[5] + t1[6] * t2[6] - t1[7] * t2[11] + t1[11] * t2[7] - t1[12] * t2[8] - t1[13] * t2[9] - t1[14] * t2[3] - t1[15] * t2[10],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[5] - t1[5] * t2[4] + t1[6] * t2[11] + t1[7] * t2[6] + t1[11] * t2[8] + t1[12] * t2[7] - t1[13] * t2[10] + t1[14] * t2[2] + t1[15] * t2[9],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] + t1[3] * t2[6] - t1[5] * t2[11] - t1[6] * t2[4] - t1[7] * t2[5] + t1[11] * t2[9] + t1[12] * t2[10] + t1[13] * t2[7] - t1[14] * t2[1] - t1[15] * t2[8],
t1[3] * t2[0] + t1[3] * t2[7] - t1[5] * t2[1] - t1[5] * t2[8] - t1[6] * t2[2] - t1[6] * t2[9] - t1[7] * t2[3] - t1[7] * t2[10],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] + t1[4] * t2[0] - t1[4] * t2[7] - t1[8] * t2[1] + t1[8] * t2[8] - t1[9] * t2[2] + t1[9] * t2[9] - t1[10] * t2[3] + t1[10] * t2[10] + t1[11] * t2[4] + t1[12] * t2[5] + t1[13] * t2[6] - t1[14] * t2[11] - t1[15] * t2[11],
t1[3] * t2[1] + t1[3] * t2[8] + t1[5] * t2[0] + t1[5] * t2[7] - t1[6] * t2[3] - t1[6] * t2[10] + t1[7] * t2[2] + t1[7] * t2[9],
t1[3] * t2[2] + t1[3] * t2[9] + t1[5] * t2[3] + t1[5] * t2[10] + t1[6] * t2[0] + t1[6] * t2[7] - t1[7] * t2[1] - t1[7] * t2[8],
t1[3] * t2[3] + t1[3] * t2[10] - t1[5] * t2[2] - t1[5] * t2[9] + t1[6] * t2[1] + t1[6] * t2[8] + t1[7] * t2[0] + t1[7] * t2[7],
t1[0] * t2[5] - t1[1] * t2[4] + t1[2] * t2[11] + t1[4] * t2[1] - t1[4] * t2[8] + t1[8] * t2[0] - t1[8] * t2[7] - t1[9] * t2[3] + t1[9] * t2[10] + t1[10] * t2[2] - t1[10] * t2[9] + t1[11] * t2[5] - t1[12] * t2[4] + t1[13] * t2[11] + t1[14] * t2[6] + t1[15] * t2[6],
t1[0] * t2[6] - t1[1] * t2[11] - t1[2] * t2[4] + t1[4] * t2[2] - t1[4] * t2[9] + t1[8] * t2[3] - t1[8] * t2[10] + t1[9] * t2[0] - t1[9] * t2[7] - t1[10] * t2[1] + t1[10] * t2[8] + t1[11] * t2[6] - t1[12] * t2[11] - t1[13] * t2[4] - t1[14] * t2[5] - t1[15] * t2[5],
t1[0] * t2[11] + t1[1] * t2[6] - t1[2] * t2[5] + t1[4] * t2[3] - t1[4] * t2[10] - t1[8] * t2[2] + t1[8] * t2[9] + t1[9] * t2[1] - t1[9] * t2[8] + t1[10] * t2[0] - t1[10] * t2[7] + t1[11] * t2[11] + t1[12] * t2[6] - t1[13] * t2[5] + t1[14] * t2[4] + t1[15] * t2[4],
t1[0] * t2[7] - t1[1] * t2[8] - t1[2] * t2[9] - t1[3] * t2[4] - t1[5] * t2[5] - t1[6] * t2[6] + t1[7] * t2[11] + t1[11] * t2[0] - t1[12] * t2[1] - t1[13] * t2[2] - t1[14] * t2[10] - t1[15] * t2[3],
t1[0] * t2[8] + t1[1] * t2[7] - t1[2] * t2[10] - t1[3] * t2[5] + t1[5] * t2[4] - t1[6] * t2[11] - t1[7] * t2[6] + t1[11] * t2[1] + t1[12] * t2[0] - t1[13] * t2[3] + t1[14] * t2[9] + t1[15] * t2[2],
t1[0] * t2[9] + t1[1] * t2[10] + t1[2] * t2[7] - t1[3] * t2[6] + t1[5] * t2[11] + t1[6] * t2[4] + t1[7] * t2[5] + t1[11] * t2[2] + t1[12] * t2[3] + t1[13] * t2[0] - t1[14] * t2[8] - t1[15] * t2[1],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[11] + t1[5] * t2[6] - t1[6] * t2[5] + t1[7] * t2[4] + t1[11] * t2[10] - t1[12] * t2[9] + t1[13] * t2[8] + t1[14] * t2[0] + t1[15] * t2[7],
t1[0] * t2[10] - t1[1] * t2[9] + t1[2] * t2[8] - t1[3] * t2[11] - t1[5] * t2[6] + t1[6] * t2[5] - t1[7] * t2[4] + t1[11] * t2[3] - t1[12] * t2[2] + t1[13] * t2[1] + t1[14] * t2[7] + t1[15] * t2[0]
);
const Rtc& t4 = rtc;
Rtc t5 = reverse( t4);
return Mtd (
t3[0] * t5[0] + t3[1] * t5[1] + t3[2] * t5[2] - t3[3] * t5[4] - t3[4] * t5[3] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[10] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[7] + t3[11] * t5[11] + t3[12] * t5[12] + t3[13] * t5[13] - t3[14] * t5[14] - t3[15] * t5[15],
t3[0] * t5[1] - t3[1] * t5[0] + t3[2] * t5[14] - t3[3] * t5[8] - t3[4] * t5[5] - t3[5] * t5[4] + t3[6] * t5[10] - t3[7] * t5[9] - t3[8] * t5[3] + t3[9] * t5[7] - t3[10] * t5[6] + t3[11] * t5[12] - t3[12] * t5[11] + t3[13] * t5[15] + t3[14] * t5[2] + t3[15] * t5[13],
t3[0] * t5[2] - t3[1] * t5[14] - t3[2] * t5[0] - t3[3] * t5[9] - t3[4] * t5[6] - t3[5] * t5[10] - t3[6] * t5[4] + t3[7] * t5[8] - t3[8] * t5[7] - t3[9] * t5[3] + t3[10] * t5[5] + t3[11] * t5[13] - t3[12] * t5[15] - t3[13] * t5[11] - t3[14] * t5[1] - t3[15] * t5[12],
t3[0] * t5[14] + t3[1] * t5[2] - t3[2] * t5[1] - t3[3] * t5[10] - t3[4] * t5[7] + t3[5] * t5[9] - t3[6] * t5[8] - t3[7] * t5[4] + t3[8] * t5[6] - t3[9] * t5[5] - t3[10] * t5[3] + t3[11] * t5[15] + t3[12] * t5[13] - t3[13] * t5[12] + t3[14] * t5[0] + t3[15] * t5[11],
t3[0] * t5[4] - t3[1] * t5[8] - t3[2] * t5[9] - t3[4] * t5[0] + t3[4] * t5[11] - t3[8] * t5[1] + t3[8] * t5[12] - t3[9] * t5[2] + t3[9] * t5[13] + t3[10] * t5[14] - t3[10] * t5[15] + t3[11] * t5[4] - t3[12] * t5[8] - t3[13] * t5[9] - t3[14] * t5[10] - t3[15] * t5[10],
t3[0] * t5[8] + t3[1] * t5[4] - t3[2] * t5[10] - t3[4] * t5[1] + t3[4] * t5[12] + t3[8] * t5[0] - t3[8] * t5[11] - t3[9] * t5[14] + t3[9] * t5[15] - t3[10] * t5[2] + t3[10] * t5[13] + t3[11] * t5[8] + t3[12] * t5[4] - t3[13] * t5[10] + t3[14] * t5[9] + t3[15] * t5[9],
t3[0] * t5[9] + t3[1] * t5[10] + t3[2] * t5[4] - t3[4] * t5[2] + t3[4] * t5[13] + t3[8] * t5[14] - t3[8] * t5[15] + t3[9] * t5[0] - t3[9] * t5[11] + t3[10] * t5[1] - t3[10] * t5[12] + t3[11] * t5[9] + t3[12] * t5[10] + t3[13] * t5[4] - t3[14] * t5[8] - t3[15] * t5[8],
t3[0] * t5[11] + t3[1] * t5[12] + t3[2] * t5[13] + t3[3] * t5[4] - t3[4] * t5[3] - t3[5] * t5[8] - t3[6] * t5[9] - t3[7] * t5[10] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[7] + t3[11] * t5[0] + t3[12] * t5[1] + t3[13] * t5[2] - t3[14] * t5[15] - t3[15] * t5[14],
t3[0] * t5[12] - t3[1] * t5[11] + t3[2] * t5[15] + t3[3] * t5[8] - t3[4] * t5[5] + t3[5] * t5[4] - t3[6] * t5[10] + t3[7] * t5[9] - t3[8] * t5[3] + t3[9] * t5[7] - t3[10] * t5[6] + t3[11] * t5[1] - t3[12] * t5[0] + t3[13] * t5[14] + t3[14] * t5[13] + t3[15] * t5[2],
t3[0] * t5[13] - t3[1] * t5[15] - t3[2] * t5[11] + t3[3] * t5[9] - t3[4] * t5[6] + t3[5] * t5[10] + t3[6] * t5[4] - t3[7] * t5[8] - t3[8] * t5[7] - t3[9] * t5[3] + t3[10] * t5[5] + t3[11] * t5[2] - t3[12] * t5[14] - t3[13] * t5[0] - t3[14] * t5[12] - t3[15] * t5[1],
t3[0] * t5[15] + t3[1] * t5[13] - t3[2] * t5[12] + t3[3] * t5[10] - t3[4] * t5[7] - t3[5] * t5[9] + t3[6] * t5[8] + t3[7] * t5[4] + t3[8] * t5[6] - t3[9] * t5[5] - t3[10] * t5[3] + t3[11] * t5[14] + t3[12] * t5[2] - t3[13] * t5[1] + t3[14] * t5[11] + t3[15] * t5[0],
t3[0] * t5[10] - t3[1] * t5[9] + t3[2] * t5[8] - t3[4] * t5[14] + t3[4] * t5[15] - t3[8] * t5[2] + t3[8] * t5[13] + t3[9] * t5[1] - t3[9] * t5[12] - t3[10] * t5[0] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[9] + t3[13] * t5[8] + t3[14] * t5[4] + t3[15] * t5[4]
);

}
		
	
	  	
template<>
inline Mtd sp (const Mtd& mtd, const Mtt& mtt) {					
					
const Mtt& t1 = mtt;
const Mtd& t2 = mtd;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[4] * t2[4] + t1[5] * t2[5] + t1[6] * t2[6] + t1[10] * t2[7] - t1[11] * t2[8] - t1[12] * t2[9] - t1[13] * t2[10] - t1[14] * t2[11],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2] + t1[4] * t2[5] - t1[5] * t2[4] + t1[6] * t2[11] + t1[10] * t2[8] + t1[11] * t2[7] - t1[12] * t2[10] + t1[13] * t2[9] + t1[14] * t2[6],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1] + t1[4] * t2[6] - t1[5] * t2[11] - t1[6] * t2[4] + t1[10] * t2[9] + t1[11] * t2[10] + t1[12] * t2[7] - t1[13] * t2[8] - t1[14] * t2[5],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0] + t1[4] * t2[11] + t1[5] * t2[6] - t1[6] * t2[5] + t1[10] * t2[10] - t1[11] * t2[9] + t1[12] * t2[8] + t1[13] * t2[7] + t1[14] * t2[4],
t1[4] * t2[0] + t1[4] * t2[7] - t1[5] * t2[1] - t1[5] * t2[8] - t1[6] * t2[2] - t1[6] * t2[9] - t1[14] * t2[3] - t1[14] * t2[10],
t1[4] * t2[1] + t1[4] * t2[8] + t1[5] * t2[0] + t1[5] * t2[7] - t1[6] * t2[3] - t1[6] * t2[10] + t1[14] * t2[2] + t1[14] * t2[9],
t1[4] * t2[2] + t1[4] * t2[9] + t1[5] * t2[3] + t1[5] * t2[10] + t1[6] * t2[0] + t1[6] * t2[7] - t1[14] * t2[1] - t1[14] * t2[8],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] - t1[3] * t2[11] + t1[7] * t2[0] - t1[7] * t2[7] - t1[8] * t2[1] + t1[8] * t2[8] - t1[9] * t2[2] + t1[9] * t2[9] + t1[10] * t2[4] + t1[11] * t2[5] + t1[12] * t2[6] - t1[13] * t2[11] - t1[15] * t2[3] + t1[15] * t2[10],
t1[0] * t2[5] - t1[1] * t2[4] + t1[2] * t2[11] + t1[3] * t2[6] + t1[7] * t2[1] - t1[7] * t2[8] + t1[8] * t2[0] - t1[8] * t2[7] - t1[9] * t2[3] + t1[9] * t2[10] + t1[10] * t2[5] - t1[11] * t2[4] + t1[12] * t2[11] + t1[13] * t2[6] + t1[15] * t2[2] - t1[15] * t2[9],
t1[0] * t2[6] - t1[1] * t2[11] - t1[2] * t2[4] - t1[3] * t2[5] + t1[7] * t2[2] - t1[7] * t2[9] + t1[8] * t2[3] - t1[8] * t2[10] + t1[9] * t2[0] - t1[9] * t2[7] + t1[10] * t2[6] - t1[11] * t2[11] - t1[12] * t2[4] - t1[13] * t2[5] - t1[15] * t2[1] + t1[15] * t2[8],
t1[0] * t2[7] - t1[1] * t2[8] - t1[2] * t2[9] - t1[3] * t2[10] - t1[4] * t2[4] - t1[5] * t2[5] - t1[6] * t2[6] + t1[10] * t2[0] - t1[11] * t2[1] - t1[12] * t2[2] - t1[13] * t2[3] + t1[14] * t2[11],
t1[0] * t2[8] + t1[1] * t2[7] - t1[2] * t2[10] + t1[3] * t2[9] - t1[4] * t2[5] + t1[5] * t2[4] - t1[6] * t2[11] + t1[10] * t2[1] + t1[11] * t2[0] - t1[12] * t2[3] + t1[13] * t2[2] - t1[14] * t2[6],
t1[0] * t2[9] + t1[1] * t2[10] + t1[2] * t2[7] - t1[3] * t2[8] - t1[4] * t2[6] + t1[5] * t2[11] + t1[6] * t2[4] + t1[10] * t2[2] + t1[11] * t2[3] + t1[12] * t2[0] - t1[13] * t2[1] + t1[14] * t2[5],
t1[0] * t2[10] - t1[1] * t2[9] + t1[2] * t2[8] + t1[3] * t2[7] - t1[4] * t2[11] - t1[5] * t2[6] + t1[6] * t2[5] + t1[10] * t2[3] - t1[11] * t2[2] + t1[12] * t2[1] + t1[13] * t2[0] - t1[14] * t2[4],
t1[4] * t2[3] + t1[4] * t2[10] - t1[5] * t2[2] - t1[5] * t2[9] + t1[6] * t2[1] + t1[6] * t2[8] + t1[14] * t2[0] + t1[14] * t2[7],
t1[0] * t2[11] + t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4] + t1[7] * t2[3] - t1[7] * t2[10] - t1[8] * t2[2] + t1[8] * t2[9] + t1[9] * t2[1] - t1[9] * t2[8] + t1[10] * t2[11] + t1[11] * t2[6] - t1[12] * t2[5] + t1[13] * t2[4] + t1[15] * t2[0] - t1[15] * t2[7]
);
const Mtt& t4 = mtt;
Mtt t5 = reverse( t4);
return Mtd (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] - t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13] - t3[14] * t5[15] - t3[15] * t5[14],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[6] * t5[15] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[13] + t3[13] * t5[12] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[5] * t5[15] - t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[14] - t3[9] * t5[4] + t3[10] * t5[12] + t3[11] * t5[13] + t3[12] * t5[10] - t3[13] * t5[11] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[4] * t5[15] + t3[5] * t5[9] - t3[6] * t5[8] + t3[7] * t5[14] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] - t3[3] * t5[15] + t3[7] * t5[0] - t3[7] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] + t3[10] * t5[7] + t3[11] * t5[8] + t3[12] * t5[9] - t3[13] * t5[15] - t3[15] * t5[3] + t3[15] * t5[13],
t3[0] * t5[8] - t3[1] * t5[7] + t3[2] * t5[15] + t3[3] * t5[9] + t3[7] * t5[1] - t3[7] * t5[11] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[9] * t5[13] + t3[10] * t5[8] - t3[11] * t5[7] + t3[12] * t5[15] + t3[13] * t5[9] + t3[15] * t5[2] - t3[15] * t5[12],
t3[0] * t5[9] - t3[1] * t5[15] - t3[2] * t5[7] - t3[3] * t5[8] + t3[7] * t5[2] - t3[7] * t5[12] + t3[8] * t5[3] - t3[8] * t5[13] + t3[9] * t5[0] - t3[9] * t5[10] + t3[10] * t5[9] - t3[11] * t5[15] - t3[12] * t5[7] - t3[13] * t5[8] - t3[15] * t5[1] + t3[15] * t5[11],
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[13] - t3[4] * t5[7] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3] + t3[14] * t5[15] - t3[15] * t5[14],
t3[0] * t5[11] + t3[1] * t5[10] - t3[2] * t5[13] + t3[3] * t5[12] - t3[4] * t5[8] + t3[5] * t5[7] - t3[6] * t5[15] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2] - t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[12] + t3[1] * t5[13] + t3[2] * t5[10] - t3[3] * t5[11] - t3[4] * t5[9] + t3[5] * t5[15] + t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[14] - t3[9] * t5[4] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1] + t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[13] - t3[1] * t5[12] + t3[2] * t5[11] + t3[3] * t5[10] - t3[4] * t5[15] - t3[5] * t5[9] + t3[6] * t5[8] + t3[7] * t5[14] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0] - t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[15] + t3[1] * t5[9] - t3[2] * t5[8] + t3[3] * t5[7] + t3[7] * t5[3] - t3[7] * t5[13] - t3[8] * t5[2] + t3[8] * t5[12] + t3[9] * t5[1] - t3[9] * t5[11] + t3[10] * t5[15] + t3[11] * t5[9] - t3[12] * t5[8] + t3[13] * t5[7] + t3[15] * t5[0] - t3[15] * t5[10]
);

}
		
	
	  	
template<>
inline Mtd sp (const Mtd& mtd, const Rtt& rtt) {					
					
const Rtt& t1 = rtt;
const Mtd& t2 = mtd;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[4] * t2[4] + t1[5] * t2[5] + t1[6] * t2[6] - t1[7] * t2[11],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2] + t1[4] * t2[5] - t1[5] * t2[4] + t1[6] * t2[11] + t1[7] * t2[6],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1] + t1[4] * t2[6] - t1[5] * t2[11] - t1[6] * t2[4] - t1[7] * t2[5],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0] + t1[4] * t2[11] + t1[5] * t2[6] - t1[6] * t2[5] + t1[7] * t2[4],
t1[4] * t2[0] + t1[4] * t2[7] - t1[5] * t2[1] - t1[5] * t2[8] - t1[6] * t2[2] - t1[6] * t2[9] - t1[7] * t2[3] - t1[7] * t2[10],
t1[4] * t2[1] + t1[4] * t2[8] + t1[5] * t2[0] + t1[5] * t2[7] - t1[6] * t2[3] - t1[6] * t2[10] + t1[7] * t2[2] + t1[7] * t2[9],
t1[4] * t2[2] + t1[4] * t2[9] + t1[5] * t2[3] + t1[5] * t2[10] + t1[6] * t2[0] + t1[6] * t2[7] - t1[7] * t2[1] - t1[7] * t2[8],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] - t1[3] * t2[11],
t1[0] * t2[5] - t1[1] * t2[4] + t1[2] * t2[11] + t1[3] * t2[6],
t1[0] * t2[6] - t1[1] * t2[11] - t1[2] * t2[4] - t1[3] * t2[5],
t1[0] * t2[7] - t1[1] * t2[8] - t1[2] * t2[9] - t1[3] * t2[10] - t1[4] * t2[4] - t1[5] * t2[5] - t1[6] * t2[6] + t1[7] * t2[11],
t1[0] * t2[8] + t1[1] * t2[7] - t1[2] * t2[10] + t1[3] * t2[9] - t1[4] * t2[5] + t1[5] * t2[4] - t1[6] * t2[11] - t1[7] * t2[6],
t1[0] * t2[9] + t1[1] * t2[10] + t1[2] * t2[7] - t1[3] * t2[8] - t1[4] * t2[6] + t1[5] * t2[11] + t1[6] * t2[4] + t1[7] * t2[5],
t1[0] * t2[10] - t1[1] * t2[9] + t1[2] * t2[8] + t1[3] * t2[7] - t1[4] * t2[11] - t1[5] * t2[6] + t1[6] * t2[5] - t1[7] * t2[4],
t1[4] * t2[3] + t1[4] * t2[10] - t1[5] * t2[2] - t1[5] * t2[9] + t1[6] * t2[1] + t1[6] * t2[8] + t1[7] * t2[0] + t1[7] * t2[7],
t1[0] * t2[11] + t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4]
);
const Rtt& t4 = rtt;
Rtt t5 = reverse( t4);
return Mtd (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] - t3[15] * t5[7],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[7] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[7] * t5[6] - t3[8] * t5[7] - t3[9] * t5[4] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[7] * t5[7] + t3[8] * t5[6] - t3[9] * t5[5] + t3[15] * t5[4],
t3[7] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[15] * t5[3],
t3[7] * t5[1] + t3[8] * t5[0] - t3[9] * t5[3] + t3[15] * t5[2],
t3[7] * t5[2] + t3[8] * t5[3] + t3[9] * t5[0] - t3[15] * t5[1],
t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3] - t3[15] * t5[7],
t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[7] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2] + t3[15] * t5[6],
t3[7] * t5[6] - t3[8] * t5[7] - t3[9] * t5[4] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1] - t3[15] * t5[5],
t3[7] * t5[7] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0] + t3[15] * t5[4],
t3[7] * t5[3] - t3[8] * t5[2] + t3[9] * t5[1] + t3[15] * t5[0]
);

}
		
	
	  	
template<>
inline Mtd sp (const Mtd& mtd, const Rtd& rtd) {					
					
const Rtd& t1 = rtd;
const Mtd& t2 = mtd;
Mtd t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[4] * t2[7] - t1[5] * t2[8] - t1[6] * t2[9] - t1[7] * t2[10],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2] + t1[4] * t2[8] + t1[5] * t2[7] - t1[6] * t2[10] + t1[7] * t2[9],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1] + t1[4] * t2[9] + t1[5] * t2[10] + t1[6] * t2[7] - t1[7] * t2[8],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0] + t1[4] * t2[10] - t1[5] * t2[9] + t1[6] * t2[8] + t1[7] * t2[7],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] - t1[3] * t2[11] + t1[4] * t2[4] + t1[5] * t2[5] + t1[6] * t2[6] - t1[7] * t2[11],
t1[0] * t2[5] - t1[1] * t2[4] + t1[2] * t2[11] + t1[3] * t2[6] + t1[4] * t2[5] - t1[5] * t2[4] + t1[6] * t2[11] + t1[7] * t2[6],
t1[0] * t2[6] - t1[1] * t2[11] - t1[2] * t2[4] - t1[3] * t2[5] + t1[4] * t2[6] - t1[5] * t2[11] - t1[6] * t2[4] - t1[7] * t2[5],
t1[0] * t2[7] - t1[1] * t2[8] - t1[2] * t2[9] - t1[3] * t2[10] + t1[4] * t2[0] - t1[5] * t2[1] - t1[6] * t2[2] - t1[7] * t2[3],
t1[0] * t2[8] + t1[1] * t2[7] - t1[2] * t2[10] + t1[3] * t2[9] + t1[4] * t2[1] + t1[5] * t2[0] - t1[6] * t2[3] + t1[7] * t2[2],
t1[0] * t2[9] + t1[1] * t2[10] + t1[2] * t2[7] - t1[3] * t2[8] + t1[4] * t2[2] + t1[5] * t2[3] + t1[6] * t2[0] - t1[7] * t2[1],
t1[0] * t2[10] - t1[1] * t2[9] + t1[2] * t2[8] + t1[3] * t2[7] + t1[4] * t2[3] - t1[5] * t2[2] + t1[6] * t2[1] + t1[7] * t2[0],
t1[0] * t2[11] + t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4] + t1[4] * t2[11] + t1[5] * t2[6] - t1[6] * t2[5] + t1[7] * t2[4]
);
const Rtd& t4 = rtd;
Rtd t5 = reverse( t4);
return Mtd (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[7] * t5[4] - t3[8] * t5[5] - t3[9] * t5[6] - t3[10] * t5[7],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[7] * t5[5] + t3[8] * t5[4] - t3[9] * t5[7] + t3[10] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[7] * t5[6] + t3[8] * t5[7] + t3[9] * t5[4] - t3[10] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[7] * t5[7] - t3[8] * t5[6] + t3[9] * t5[5] + t3[10] * t5[4],
t3[4] * t5[0] - t3[4] * t5[4] - t3[5] * t5[1] + t3[5] * t5[5] - t3[6] * t5[2] + t3[6] * t5[6] - t3[11] * t5[3] + t3[11] * t5[7],
t3[4] * t5[1] - t3[4] * t5[5] + t3[5] * t5[0] - t3[5] * t5[4] - t3[6] * t5[3] + t3[6] * t5[7] + t3[11] * t5[2] - t3[11] * t5[6],
t3[4] * t5[2] - t3[4] * t5[6] + t3[5] * t5[3] - t3[5] * t5[7] + t3[6] * t5[0] - t3[6] * t5[4] - t3[11] * t5[1] + t3[11] * t5[5],
t3[0] * t5[4] - t3[1] * t5[5] - t3[2] * t5[6] - t3[3] * t5[7] + t3[7] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[10] * t5[3],
t3[0] * t5[5] + t3[1] * t5[4] - t3[2] * t5[7] + t3[3] * t5[6] + t3[7] * t5[1] + t3[8] * t5[0] - t3[9] * t5[3] + t3[10] * t5[2],
t3[0] * t5[6] + t3[1] * t5[7] + t3[2] * t5[4] - t3[3] * t5[5] + t3[7] * t5[2] + t3[8] * t5[3] + t3[9] * t5[0] - t3[10] * t5[1],
t3[0] * t5[7] - t3[1] * t5[6] + t3[2] * t5[5] + t3[3] * t5[4] + t3[7] * t5[3] - t3[8] * t5[2] + t3[9] * t5[1] + t3[10] * t5[0],
t3[4] * t5[3] - t3[4] * t5[7] - t3[5] * t5[2] + t3[5] * t5[6] + t3[6] * t5[1] - t3[6] * t5[5] + t3[11] * t5[0] - t3[11] * t5[4]
);

}
		
	
	  	
template<>
inline Mtd sp (const Mtd& mtd, const Tvd& tvd) {					
					
const Tvd& t1 = tvd;
const Mtd& t2 = mtd;
Mtt t3 (
t1[0] * t2[0] + t1[1] * t2[4] + t1[2] * t2[5] + t1[3] * t2[6] + t1[4] * t2[7],
t1[0] * t2[1] + t1[1] * t2[5] - t1[2] * t2[4] + t1[3] * t2[11] + t1[4] * t2[8],
t1[0] * t2[2] + t1[1] * t2[6] - t1[2] * t2[11] - t1[3] * t2[4] + t1[4] * t2[9],
t1[0] * t2[3] + t1[1] * t2[11] + t1[2] * t2[6] - t1[3] * t2[5] + t1[4] * t2[10],
t1[1] * t2[0] + t1[1] * t2[7] - t1[2] * t2[1] - t1[2] * t2[8] - t1[3] * t2[2] - t1[3] * t2[9],
t1[1] * t2[1] + t1[1] * t2[8] + t1[2] * t2[0] + t1[2] * t2[7] - t1[3] * t2[3] - t1[3] * t2[10],
t1[1] * t2[2] + t1[1] * t2[9] + t1[2] * t2[3] + t1[2] * t2[10] + t1[3] * t2[0] + t1[3] * t2[7],
t1[0] * t2[4] + t1[4] * t2[4],
t1[0] * t2[5] + t1[4] * t2[5],
t1[0] * t2[6] + t1[4] * t2[6],
t1[0] * t2[7] - t1[1] * t2[4] - t1[2] * t2[5] - t1[3] * t2[6] + t1[4] * t2[0],
t1[0] * t2[8] - t1[1] * t2[5] + t1[2] * t2[4] - t1[3] * t2[11] + t1[4] * t2[1],
t1[0] * t2[9] - t1[1] * t2[6] + t1[2] * t2[11] + t1[3] * t2[4] + t1[4] * t2[2],
t1[0] * t2[10] - t1[1] * t2[11] - t1[2] * t2[6] + t1[3] * t2[5] + t1[4] * t2[3],
t1[1] * t2[3] + t1[1] * t2[10] - t1[2] * t2[2] - t1[2] * t2[9] + t1[3] * t2[1] + t1[3] * t2[8],
t1[0] * t2[11] + t1[4] * t2[11]
);
const Tvd& t4 = tvd;
Tvd t5 = reverse( t4);
return Mtd (
t3[0] * t5[0] + t3[7] * t5[1] + t3[8] * t5[2] + t3[9] * t5[3] + t3[10] * t5[4],
t3[1] * t5[0] + t3[7] * t5[2] - t3[8] * t5[1] + t3[11] * t5[4] + t3[15] * t5[3],
t3[2] * t5[0] + t3[7] * t5[3] - t3[9] * t5[1] + t3[12] * t5[4] - t3[15] * t5[2],
t3[3] * t5[0] + t3[8] * t5[3] - t3[9] * t5[2] + t3[13] * t5[4] + t3[15] * t5[1],
t3[7] * t5[0] - t3[7] * t5[4],
t3[8] * t5[0] - t3[8] * t5[4],
t3[9] * t5[0] - t3[9] * t5[4],
t3[0] * t5[4] + t3[7] * t5[1] + t3[8] * t5[2] + t3[9] * t5[3] + t3[10] * t5[0],
t3[1] * t5[4] + t3[7] * t5[2] - t3[8] * t5[1] + t3[11] * t5[0] + t3[15] * t5[3],
t3[2] * t5[4] + t3[7] * t5[3] - t3[9] * t5[1] + t3[12] * t5[0] - t3[15] * t5[2],
t3[3] * t5[4] + t3[8] * t5[3] - t3[9] * t5[2] + t3[13] * t5[0] + t3[15] * t5[1],
t3[15] * t5[0] - t3[15] * t5[4]
);

}
		
	
	  	
template<>
inline Mtd sp (const Mtd& mtd, const Tsd& tsd) {					
					
const Tsd& t1 = tsd;
const Mtd& t2 = mtd;
Mtd t3 (
t1[0] * t2[0] + t1[4] * t2[7],
t1[0] * t2[1] + t1[4] * t2[8],
t1[0] * t2[2] + t1[4] * t2[9],
t1[0] * t2[3] + t1[4] * t2[10],
t1[0] * t2[4] + t1[1] * t2[0] - t1[1] * t2[7] - t1[2] * t2[1] + t1[2] * t2[8] - t1[3] * t2[2] + t1[3] * t2[9] + t1[4] * t2[4],
t1[0] * t2[5] + t1[1] * t2[1] - t1[1] * t2[8] + t1[2] * t2[0] - t1[2] * t2[7] - t1[3] * t2[3] + t1[3] * t2[10] + t1[4] * t2[5],
t1[0] * t2[6] + t1[1] * t2[2] - t1[1] * t2[9] + t1[2] * t2[3] - t1[2] * t2[10] + t1[3] * t2[0] - t1[3] * t2[7] + t1[4] * t2[6],
t1[0] * t2[7] + t1[4] * t2[0],
t1[0] * t2[8] + t1[4] * t2[1],
t1[0] * t2[9] + t1[4] * t2[2],
t1[0] * t2[10] + t1[4] * t2[3],
t1[0] * t2[11] + t1[1] * t2[3] - t1[1] * t2[10] - t1[2] * t2[2] + t1[2] * t2[9] + t1[3] * t2[1] - t1[3] * t2[8] + t1[4] * t2[11]
);
const Tsd& t4 = tsd;
Tsd t5 = reverse( t4);
return Mtd (
t3[0] * t5[0] + t3[7] * t5[4],
t3[1] * t5[0] + t3[8] * t5[4],
t3[2] * t5[0] + t3[9] * t5[4],
t3[3] * t5[0] + t3[10] * t5[4],
t3[0] * t5[1] + t3[1] * t5[2] + t3[2] * t5[3] + t3[4] * t5[0] - t3[4] * t5[4] + t3[7] * t5[1] + t3[8] * t5[2] + t3[9] * t5[3],
t3[0] * t5[2] - t3[1] * t5[1] + t3[3] * t5[3] + t3[5] * t5[0] - t3[5] * t5[4] + t3[7] * t5[2] - t3[8] * t5[1] + t3[10] * t5[3],
t3[0] * t5[3] - t3[2] * t5[1] - t3[3] * t5[2] + t3[6] * t5[0] - t3[6] * t5[4] + t3[7] * t5[3] - t3[9] * t5[1] - t3[10] * t5[2],
t3[0] * t5[4] + t3[7] * t5[0],
t3[1] * t5[4] + t3[8] * t5[0],
t3[2] * t5[4] + t3[9] * t5[0],
t3[3] * t5[4] + t3[10] * t5[0],
t3[1] * t5[3] - t3[2] * t5[2] + t3[3] * t5[1] + t3[8] * t5[3] - t3[9] * t5[2] + t3[10] * t5[1] + t3[11] * t5[0] - t3[11] * t5[4]
);

}
		
	
	  	
template<>
inline Mtd sp (const Mtd& mtd, const Trt& trt) {					
					
const Trt& t1 = trt;
const Mtd& t2 = mtd;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[4] * t2[4] + t1[5] * t2[5] + t1[6] * t2[6] + t1[10] * t2[7] - t1[11] * t2[8] - t1[12] * t2[9] - t1[13] * t2[10],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2] + t1[4] * t2[5] - t1[5] * t2[4] + t1[6] * t2[11] + t1[10] * t2[8] + t1[11] * t2[7] - t1[12] * t2[10] + t1[13] * t2[9],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1] + t1[4] * t2[6] - t1[5] * t2[11] - t1[6] * t2[4] + t1[10] * t2[9] + t1[11] * t2[10] + t1[12] * t2[7] - t1[13] * t2[8],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0] + t1[4] * t2[11] + t1[5] * t2[6] - t1[6] * t2[5] + t1[10] * t2[10] - t1[11] * t2[9] + t1[12] * t2[8] + t1[13] * t2[7],
t1[4] * t2[0] + t1[4] * t2[7] - t1[5] * t2[1] - t1[5] * t2[8] - t1[6] * t2[2] - t1[6] * t2[9],
t1[4] * t2[1] + t1[4] * t2[8] + t1[5] * t2[0] + t1[5] * t2[7] - t1[6] * t2[3] - t1[6] * t2[10],
t1[4] * t2[2] + t1[4] * t2[9] + t1[5] * t2[3] + t1[5] * t2[10] + t1[6] * t2[0] + t1[6] * t2[7],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] - t1[3] * t2[11] + t1[7] * t2[0] - t1[7] * t2[7] - t1[8] * t2[1] + t1[8] * t2[8] - t1[9] * t2[2] + t1[9] * t2[9] + t1[10] * t2[4] + t1[11] * t2[5] + t1[12] * t2[6] - t1[13] * t2[11],
t1[0] * t2[5] - t1[1] * t2[4] + t1[2] * t2[11] + t1[3] * t2[6] + t1[7] * t2[1] - t1[7] * t2[8] + t1[8] * t2[0] - t1[8] * t2[7] - t1[9] * t2[3] + t1[9] * t2[10] + t1[10] * t2[5] - t1[11] * t2[4] + t1[12] * t2[11] + t1[13] * t2[6],
t1[0] * t2[6] - t1[1] * t2[11] - t1[2] * t2[4] - t1[3] * t2[5] + t1[7] * t2[2] - t1[7] * t2[9] + t1[8] * t2[3] - t1[8] * t2[10] + t1[9] * t2[0] - t1[9] * t2[7] + t1[10] * t2[6] - t1[11] * t2[11] - t1[12] * t2[4] - t1[13] * t2[5],
t1[0] * t2[7] - t1[1] * t2[8] - t1[2] * t2[9] - t1[3] * t2[10] - t1[4] * t2[4] - t1[5] * t2[5] - t1[6] * t2[6] + t1[10] * t2[0] - t1[11] * t2[1] - t1[12] * t2[2] - t1[13] * t2[3],
t1[0] * t2[8] + t1[1] * t2[7] - t1[2] * t2[10] + t1[3] * t2[9] - t1[4] * t2[5] + t1[5] * t2[4] - t1[6] * t2[11] + t1[10] * t2[1] + t1[11] * t2[0] - t1[12] * t2[3] + t1[13] * t2[2],
t1[0] * t2[9] + t1[1] * t2[10] + t1[2] * t2[7] - t1[3] * t2[8] - t1[4] * t2[6] + t1[5] * t2[11] + t1[6] * t2[4] + t1[10] * t2[2] + t1[11] * t2[3] + t1[12] * t2[0] - t1[13] * t2[1],
t1[0] * t2[10] - t1[1] * t2[9] + t1[2] * t2[8] + t1[3] * t2[7] - t1[4] * t2[11] - t1[5] * t2[6] + t1[6] * t2[5] + t1[10] * t2[3] - t1[11] * t2[2] + t1[12] * t2[1] + t1[13] * t2[0],
t1[4] * t2[3] + t1[4] * t2[10] - t1[5] * t2[2] - t1[5] * t2[9] + t1[6] * t2[1] + t1[6] * t2[8],
t1[0] * t2[11] + t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4] + t1[7] * t2[3] - t1[7] * t2[10] - t1[8] * t2[2] + t1[8] * t2[9] + t1[9] * t2[1] - t1[9] * t2[8] + t1[10] * t2[11] + t1[11] * t2[6] - t1[12] * t2[5] + t1[13] * t2[4]
);
const Trt& t4 = trt;
Trt t5 = reverse( t4);
return Mtd (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] - t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[13] + t3[13] * t5[12] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[10] * t5[12] + t3[11] * t5[13] + t3[12] * t5[10] - t3[13] * t5[11] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[5] * t5[9] - t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[7] * t5[0] - t3[7] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] + t3[10] * t5[7] + t3[11] * t5[8] + t3[12] * t5[9] - t3[15] * t5[3] + t3[15] * t5[13],
t3[0] * t5[8] - t3[1] * t5[7] + t3[3] * t5[9] + t3[7] * t5[1] - t3[7] * t5[11] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[9] * t5[13] + t3[10] * t5[8] - t3[11] * t5[7] + t3[13] * t5[9] + t3[15] * t5[2] - t3[15] * t5[12],
t3[0] * t5[9] - t3[2] * t5[7] - t3[3] * t5[8] + t3[7] * t5[2] - t3[7] * t5[12] + t3[8] * t5[3] - t3[8] * t5[13] + t3[9] * t5[0] - t3[9] * t5[10] + t3[10] * t5[9] - t3[12] * t5[7] - t3[13] * t5[8] - t3[15] * t5[1] + t3[15] * t5[11],
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[13] - t3[4] * t5[7] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3],
t3[0] * t5[11] + t3[1] * t5[10] - t3[2] * t5[13] + t3[3] * t5[12] - t3[4] * t5[8] + t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2] - t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[12] + t3[1] * t5[13] + t3[2] * t5[10] - t3[3] * t5[11] - t3[4] * t5[9] + t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1] + t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[13] - t3[1] * t5[12] + t3[2] * t5[11] + t3[3] * t5[10] - t3[5] * t5[9] + t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0] - t3[14] * t5[7] + t3[15] * t5[4],
t3[1] * t5[9] - t3[2] * t5[8] + t3[3] * t5[7] + t3[7] * t5[3] - t3[7] * t5[13] - t3[8] * t5[2] + t3[8] * t5[12] + t3[9] * t5[1] - t3[9] * t5[11] + t3[11] * t5[9] - t3[12] * t5[8] + t3[13] * t5[7] + t3[15] * t5[0] - t3[15] * t5[10]
);

}
		
	
	  	
template<>
inline Mtd sp (const Mtd& mtd, const Rvd& rvd) {					
					
const Rvd& t1 = rvd;
const Mtd& t2 = mtd;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[4] * t2[4] + t1[5] * t2[5] + t1[6] * t2[6] + t1[7] * t2[7] - t1[8] * t2[8] - t1[9] * t2[9] - t1[10] * t2[10] - t1[11] * t2[11],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2] + t1[4] * t2[5] - t1[5] * t2[4] + t1[6] * t2[11] + t1[7] * t2[8] + t1[8] * t2[7] - t1[9] * t2[10] + t1[10] * t2[9] + t1[11] * t2[6],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1] + t1[4] * t2[6] - t1[5] * t2[11] - t1[6] * t2[4] + t1[7] * t2[9] + t1[8] * t2[10] + t1[9] * t2[7] - t1[10] * t2[8] - t1[11] * t2[5],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0] + t1[4] * t2[11] + t1[5] * t2[6] - t1[6] * t2[5] + t1[7] * t2[10] - t1[8] * t2[9] + t1[9] * t2[8] + t1[10] * t2[7] + t1[11] * t2[4],
t1[4] * t2[0] + t1[4] * t2[7] - t1[5] * t2[1] - t1[5] * t2[8] - t1[6] * t2[2] - t1[6] * t2[9] - t1[11] * t2[3] - t1[11] * t2[10],
t1[4] * t2[1] + t1[4] * t2[8] + t1[5] * t2[0] + t1[5] * t2[7] - t1[6] * t2[3] - t1[6] * t2[10] + t1[11] * t2[2] + t1[11] * t2[9],
t1[4] * t2[2] + t1[4] * t2[9] + t1[5] * t2[3] + t1[5] * t2[10] + t1[6] * t2[0] + t1[6] * t2[7] - t1[11] * t2[1] - t1[11] * t2[8],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] - t1[3] * t2[11] + t1[7] * t2[4] + t1[8] * t2[5] + t1[9] * t2[6] - t1[10] * t2[11],
t1[0] * t2[5] - t1[1] * t2[4] + t1[2] * t2[11] + t1[3] * t2[6] + t1[7] * t2[5] - t1[8] * t2[4] + t1[9] * t2[11] + t1[10] * t2[6],
t1[0] * t2[6] - t1[1] * t2[11] - t1[2] * t2[4] - t1[3] * t2[5] + t1[7] * t2[6] - t1[8] * t2[11] - t1[9] * t2[4] - t1[10] * t2[5],
t1[0] * t2[7] - t1[1] * t2[8] - t1[2] * t2[9] - t1[3] * t2[10] - t1[4] * t2[4] - t1[5] * t2[5] - t1[6] * t2[6] + t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2] - t1[10] * t2[3] + t1[11] * t2[11],
t1[0] * t2[8] + t1[1] * t2[7] - t1[2] * t2[10] + t1[3] * t2[9] - t1[4] * t2[5] + t1[5] * t2[4] - t1[6] * t2[11] + t1[7] * t2[1] + t1[8] * t2[0] - t1[9] * t2[3] + t1[10] * t2[2] - t1[11] * t2[6],
t1[0] * t2[9] + t1[1] * t2[10] + t1[2] * t2[7] - t1[3] * t2[8] - t1[4] * t2[6] + t1[5] * t2[11] + t1[6] * t2[4] + t1[7] * t2[2] + t1[8] * t2[3] + t1[9] * t2[0] - t1[10] * t2[1] + t1[11] * t2[5],
t1[0] * t2[10] - t1[1] * t2[9] + t1[2] * t2[8] + t1[3] * t2[7] - t1[4] * t2[11] - t1[5] * t2[6] + t1[6] * t2[5] + t1[7] * t2[3] - t1[8] * t2[2] + t1[9] * t2[1] + t1[10] * t2[0] - t1[11] * t2[4],
t1[4] * t2[3] + t1[4] * t2[10] - t1[5] * t2[2] - t1[5] * t2[9] + t1[6] * t2[1] + t1[6] * t2[8] + t1[11] * t2[0] + t1[11] * t2[7],
t1[0] * t2[11] + t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4] + t1[7] * t2[11] + t1[8] * t2[6] - t1[9] * t2[5] + t1[10] * t2[4]
);
const Rvd& t4 = rvd;
Rvd t5 = reverse( t4);
return Mtd (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[7] - t3[11] * t5[8] - t3[12] * t5[9] - t3[13] * t5[10] - t3[15] * t5[11],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[11] + t3[10] * t5[8] + t3[11] * t5[7] - t3[12] * t5[10] + t3[13] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[7] * t5[6] - t3[8] * t5[11] - t3[9] * t5[4] + t3[10] * t5[9] + t3[11] * t5[10] + t3[12] * t5[7] - t3[13] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[7] * t5[11] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[10] - t3[11] * t5[9] + t3[12] * t5[8] + t3[13] * t5[7] + t3[15] * t5[4],
t3[7] * t5[0] - t3[7] * t5[7] - t3[8] * t5[1] + t3[8] * t5[8] - t3[9] * t5[2] + t3[9] * t5[9] - t3[15] * t5[3] + t3[15] * t5[10],
t3[7] * t5[1] - t3[7] * t5[8] + t3[8] * t5[0] - t3[8] * t5[7] - t3[9] * t5[3] + t3[9] * t5[10] + t3[15] * t5[2] - t3[15] * t5[9],
t3[7] * t5[2] - t3[7] * t5[9] + t3[8] * t5[3] - t3[8] * t5[10] + t3[9] * t5[0] - t3[9] * t5[7] - t3[15] * t5[1] + t3[15] * t5[8],
t3[0] * t5[7] - t3[1] * t5[8] - t3[2] * t5[9] - t3[3] * t5[10] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3] - t3[15] * t5[11],
t3[0] * t5[8] + t3[1] * t5[7] - t3[2] * t5[10] + t3[3] * t5[9] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[11] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2] + t3[15] * t5[6],
t3[0] * t5[9] + t3[1] * t5[10] + t3[2] * t5[7] - t3[3] * t5[8] + t3[7] * t5[6] - t3[8] * t5[11] - t3[9] * t5[4] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1] - t3[15] * t5[5],
t3[0] * t5[10] - t3[1] * t5[9] + t3[2] * t5[8] + t3[3] * t5[7] + t3[7] * t5[11] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0] + t3[15] * t5[4],
t3[7] * t5[3] - t3[7] * t5[10] - t3[8] * t5[2] + t3[8] * t5[9] + t3[9] * t5[1] - t3[9] * t5[8] + t3[15] * t5[0] - t3[15] * t5[7]
);

}
		
	
	  	
template<>
inline Mtd sp (const Mtd& mtd, const Tst& tst) {					
					
const Tst& t1 = tst;
const Mtd& t2 = mtd;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[4] * t2[4] + t1[5] * t2[5] + t1[6] * t2[6] + t1[10] * t2[7] - t1[11] * t2[8] - t1[12] * t2[9] - t1[13] * t2[10] - t1[14] * t2[11],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2] + t1[4] * t2[5] - t1[5] * t2[4] + t1[6] * t2[11] + t1[10] * t2[8] + t1[11] * t2[7] - t1[12] * t2[10] + t1[13] * t2[9] + t1[14] * t2[6],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1] + t1[4] * t2[6] - t1[5] * t2[11] - t1[6] * t2[4] + t1[10] * t2[9] + t1[11] * t2[10] + t1[12] * t2[7] - t1[13] * t2[8] - t1[14] * t2[5],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0] + t1[4] * t2[11] + t1[5] * t2[6] - t1[6] * t2[5] + t1[10] * t2[10] - t1[11] * t2[9] + t1[12] * t2[8] + t1[13] * t2[7] + t1[14] * t2[4],
t1[4] * t2[0] + t1[4] * t2[7] - t1[5] * t2[1] - t1[5] * t2[8] - t1[6] * t2[2] - t1[6] * t2[9] - t1[14] * t2[3] - t1[14] * t2[10],
t1[4] * t2[1] + t1[4] * t2[8] + t1[5] * t2[0] + t1[5] * t2[7] - t1[6] * t2[3] - t1[6] * t2[10] + t1[14] * t2[2] + t1[14] * t2[9],
t1[4] * t2[2] + t1[4] * t2[9] + t1[5] * t2[3] + t1[5] * t2[10] + t1[6] * t2[0] + t1[6] * t2[7] - t1[14] * t2[1] - t1[14] * t2[8],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] - t1[3] * t2[11] + t1[7] * t2[0] - t1[7] * t2[7] - t1[8] * t2[1] + t1[8] * t2[8] - t1[9] * t2[2] + t1[9] * t2[9] + t1[10] * t2[4] + t1[11] * t2[5] + t1[12] * t2[6] - t1[13] * t2[11],
t1[0] * t2[5] - t1[1] * t2[4] + t1[2] * t2[11] + t1[3] * t2[6] + t1[7] * t2[1] - t1[7] * t2[8] + t1[8] * t2[0] - t1[8] * t2[7] - t1[9] * t2[3] + t1[9] * t2[10] + t1[10] * t2[5] - t1[11] * t2[4] + t1[12] * t2[11] + t1[13] * t2[6],
t1[0] * t2[6] - t1[1] * t2[11] - t1[2] * t2[4] - t1[3] * t2[5] + t1[7] * t2[2] - t1[7] * t2[9] + t1[8] * t2[3] - t1[8] * t2[10] + t1[9] * t2[0] - t1[9] * t2[7] + t1[10] * t2[6] - t1[11] * t2[11] - t1[12] * t2[4] - t1[13] * t2[5],
t1[0] * t2[7] - t1[1] * t2[8] - t1[2] * t2[9] - t1[3] * t2[10] - t1[4] * t2[4] - t1[5] * t2[5] - t1[6] * t2[6] + t1[10] * t2[0] - t1[11] * t2[1] - t1[12] * t2[2] - t1[13] * t2[3] + t1[14] * t2[11],
t1[0] * t2[8] + t1[1] * t2[7] - t1[2] * t2[10] + t1[3] * t2[9] - t1[4] * t2[5] + t1[5] * t2[4] - t1[6] * t2[11] + t1[10] * t2[1] + t1[11] * t2[0] - t1[12] * t2[3] + t1[13] * t2[2] - t1[14] * t2[6],
t1[0] * t2[9] + t1[1] * t2[10] + t1[2] * t2[7] - t1[3] * t2[8] - t1[4] * t2[6] + t1[5] * t2[11] + t1[6] * t2[4] + t1[10] * t2[2] + t1[11] * t2[3] + t1[12] * t2[0] - t1[13] * t2[1] + t1[14] * t2[5],
t1[0] * t2[10] - t1[1] * t2[9] + t1[2] * t2[8] + t1[3] * t2[7] - t1[4] * t2[11] - t1[5] * t2[6] + t1[6] * t2[5] + t1[10] * t2[3] - t1[11] * t2[2] + t1[12] * t2[1] + t1[13] * t2[0] - t1[14] * t2[4],
t1[4] * t2[3] + t1[4] * t2[10] - t1[5] * t2[2] - t1[5] * t2[9] + t1[6] * t2[1] + t1[6] * t2[8] + t1[14] * t2[0] + t1[14] * t2[7],
t1[0] * t2[11] + t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4] + t1[7] * t2[3] - t1[7] * t2[10] - t1[8] * t2[2] + t1[8] * t2[9] + t1[9] * t2[1] - t1[9] * t2[8] + t1[10] * t2[11] + t1[11] * t2[6] - t1[12] * t2[5] + t1[13] * t2[4]
);
const Tst& t4 = tst;
Tst t5 = reverse( t4);
return Mtd (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] - t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13] - t3[15] * t5[14],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[13] + t3[13] * t5[12] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[14] - t3[9] * t5[4] + t3[10] * t5[12] + t3[11] * t5[13] + t3[12] * t5[10] - t3[13] * t5[11] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[5] * t5[9] - t3[6] * t5[8] + t3[7] * t5[14] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[7] * t5[0] - t3[7] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] + t3[10] * t5[7] + t3[11] * t5[8] + t3[12] * t5[9] - t3[15] * t5[3] + t3[15] * t5[13],
t3[0] * t5[8] - t3[1] * t5[7] + t3[3] * t5[9] + t3[7] * t5[1] - t3[7] * t5[11] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[9] * t5[13] + t3[10] * t5[8] - t3[11] * t5[7] + t3[13] * t5[9] + t3[15] * t5[2] - t3[15] * t5[12],
t3[0] * t5[9] - t3[2] * t5[7] - t3[3] * t5[8] + t3[7] * t5[2] - t3[7] * t5[12] + t3[8] * t5[3] - t3[8] * t5[13] + t3[9] * t5[0] - t3[9] * t5[10] + t3[10] * t5[9] - t3[12] * t5[7] - t3[13] * t5[8] - t3[15] * t5[1] + t3[15] * t5[11],
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[13] - t3[4] * t5[7] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3] - t3[15] * t5[14],
t3[0] * t5[11] + t3[1] * t5[10] - t3[2] * t5[13] + t3[3] * t5[12] - t3[4] * t5[8] + t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2] - t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[12] + t3[1] * t5[13] + t3[2] * t5[10] - t3[3] * t5[11] - t3[4] * t5[9] + t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[14] - t3[9] * t5[4] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1] + t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[13] - t3[1] * t5[12] + t3[2] * t5[11] + t3[3] * t5[10] - t3[5] * t5[9] + t3[6] * t5[8] + t3[7] * t5[14] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0] - t3[14] * t5[7] + t3[15] * t5[4],
t3[1] * t5[9] - t3[2] * t5[8] + t3[3] * t5[7] + t3[7] * t5[3] - t3[7] * t5[13] - t3[8] * t5[2] + t3[8] * t5[12] + t3[9] * t5[1] - t3[9] * t5[11] + t3[11] * t5[9] - t3[12] * t5[8] + t3[13] * t5[7] + t3[15] * t5[0] - t3[15] * t5[10]
);

}
		
	
	  	
template<>
inline Mtd sp (const Mtd& mtd, const Tvt& tvt) {					
					
const Tvt& t1 = tvt;
const Mtd& t2 = mtd;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[4] * t2[4] + t1[5] * t2[5] + t1[6] * t2[6] + t1[10] * t2[7] - t1[11] * t2[8] - t1[12] * t2[9] - t1[13] * t2[10],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2] + t1[4] * t2[5] - t1[5] * t2[4] + t1[6] * t2[11] + t1[10] * t2[8] + t1[11] * t2[7] - t1[12] * t2[10] + t1[13] * t2[9],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1] + t1[4] * t2[6] - t1[5] * t2[11] - t1[6] * t2[4] + t1[10] * t2[9] + t1[11] * t2[10] + t1[12] * t2[7] - t1[13] * t2[8],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0] + t1[4] * t2[11] + t1[5] * t2[6] - t1[6] * t2[5] + t1[10] * t2[10] - t1[11] * t2[9] + t1[12] * t2[8] + t1[13] * t2[7],
t1[4] * t2[0] + t1[4] * t2[7] - t1[5] * t2[1] - t1[5] * t2[8] - t1[6] * t2[2] - t1[6] * t2[9],
t1[4] * t2[1] + t1[4] * t2[8] + t1[5] * t2[0] + t1[5] * t2[7] - t1[6] * t2[3] - t1[6] * t2[10],
t1[4] * t2[2] + t1[4] * t2[9] + t1[5] * t2[3] + t1[5] * t2[10] + t1[6] * t2[0] + t1[6] * t2[7],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] - t1[3] * t2[11] + t1[7] * t2[0] - t1[7] * t2[7] - t1[8] * t2[1] + t1[8] * t2[8] - t1[9] * t2[2] + t1[9] * t2[9] + t1[10] * t2[4] + t1[11] * t2[5] + t1[12] * t2[6] - t1[13] * t2[11] - t1[14] * t2[3] + t1[14] * t2[10],
t1[0] * t2[5] - t1[1] * t2[4] + t1[2] * t2[11] + t1[3] * t2[6] + t1[7] * t2[1] - t1[7] * t2[8] + t1[8] * t2[0] - t1[8] * t2[7] - t1[9] * t2[3] + t1[9] * t2[10] + t1[10] * t2[5] - t1[11] * t2[4] + t1[12] * t2[11] + t1[13] * t2[6] + t1[14] * t2[2] - t1[14] * t2[9],
t1[0] * t2[6] - t1[1] * t2[11] - t1[2] * t2[4] - t1[3] * t2[5] + t1[7] * t2[2] - t1[7] * t2[9] + t1[8] * t2[3] - t1[8] * t2[10] + t1[9] * t2[0] - t1[9] * t2[7] + t1[10] * t2[6] - t1[11] * t2[11] - t1[12] * t2[4] - t1[13] * t2[5] - t1[14] * t2[1] + t1[14] * t2[8],
t1[0] * t2[7] - t1[1] * t2[8] - t1[2] * t2[9] - t1[3] * t2[10] - t1[4] * t2[4] - t1[5] * t2[5] - t1[6] * t2[6] + t1[10] * t2[0] - t1[11] * t2[1] - t1[12] * t2[2] - t1[13] * t2[3],
t1[0] * t2[8] + t1[1] * t2[7] - t1[2] * t2[10] + t1[3] * t2[9] - t1[4] * t2[5] + t1[5] * t2[4] - t1[6] * t2[11] + t1[10] * t2[1] + t1[11] * t2[0] - t1[12] * t2[3] + t1[13] * t2[2],
t1[0] * t2[9] + t1[1] * t2[10] + t1[2] * t2[7] - t1[3] * t2[8] - t1[4] * t2[6] + t1[5] * t2[11] + t1[6] * t2[4] + t1[10] * t2[2] + t1[11] * t2[3] + t1[12] * t2[0] - t1[13] * t2[1],
t1[0] * t2[10] - t1[1] * t2[9] + t1[2] * t2[8] + t1[3] * t2[7] - t1[4] * t2[11] - t1[5] * t2[6] + t1[6] * t2[5] + t1[10] * t2[3] - t1[11] * t2[2] + t1[12] * t2[1] + t1[13] * t2[0],
t1[4] * t2[3] + t1[4] * t2[10] - t1[5] * t2[2] - t1[5] * t2[9] + t1[6] * t2[1] + t1[6] * t2[8],
t1[0] * t2[11] + t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4] + t1[7] * t2[3] - t1[7] * t2[10] - t1[8] * t2[2] + t1[8] * t2[9] + t1[9] * t2[1] - t1[9] * t2[8] + t1[10] * t2[11] + t1[11] * t2[6] - t1[12] * t2[5] + t1[13] * t2[4] + t1[14] * t2[0] - t1[14] * t2[7]
);
const Tvt& t4 = tvt;
Tvt t5 = reverse( t4);
return Mtd (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] - t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13] - t3[14] * t5[14],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[6] * t5[14] + t3[7] * t5[5] - t3[8] * t5[4] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[13] + t3[13] * t5[12] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[5] * t5[14] - t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[10] * t5[12] + t3[11] * t5[13] + t3[12] * t5[10] - t3[13] * t5[11] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[4] * t5[14] + t3[5] * t5[9] - t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] - t3[3] * t5[14] + t3[7] * t5[0] - t3[7] * t5[10] - t3[8] * t5[1] + t3[8] * t5[11] - t3[9] * t5[2] + t3[9] * t5[12] + t3[10] * t5[7] + t3[11] * t5[8] + t3[12] * t5[9] - t3[13] * t5[14] - t3[15] * t5[3] + t3[15] * t5[13],
t3[0] * t5[8] - t3[1] * t5[7] + t3[2] * t5[14] + t3[3] * t5[9] + t3[7] * t5[1] - t3[7] * t5[11] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[9] * t5[13] + t3[10] * t5[8] - t3[11] * t5[7] + t3[12] * t5[14] + t3[13] * t5[9] + t3[15] * t5[2] - t3[15] * t5[12],
t3[0] * t5[9] - t3[1] * t5[14] - t3[2] * t5[7] - t3[3] * t5[8] + t3[7] * t5[2] - t3[7] * t5[12] + t3[8] * t5[3] - t3[8] * t5[13] + t3[9] * t5[0] - t3[9] * t5[10] + t3[10] * t5[9] - t3[11] * t5[14] - t3[12] * t5[7] - t3[13] * t5[8] - t3[15] * t5[1] + t3[15] * t5[11],
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[13] - t3[4] * t5[7] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3] + t3[14] * t5[14],
t3[0] * t5[11] + t3[1] * t5[10] - t3[2] * t5[13] + t3[3] * t5[12] - t3[4] * t5[8] + t3[5] * t5[7] - t3[6] * t5[14] + t3[7] * t5[5] - t3[8] * t5[4] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2] - t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[12] + t3[1] * t5[13] + t3[2] * t5[10] - t3[3] * t5[11] - t3[4] * t5[9] + t3[5] * t5[14] + t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1] + t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[13] - t3[1] * t5[12] + t3[2] * t5[11] + t3[3] * t5[10] - t3[4] * t5[14] - t3[5] * t5[9] + t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0] - t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[14] + t3[1] * t5[9] - t3[2] * t5[8] + t3[3] * t5[7] + t3[7] * t5[3] - t3[7] * t5[13] - t3[8] * t5[2] + t3[8] * t5[12] + t3[9] * t5[1] - t3[9] * t5[11] + t3[10] * t5[14] + t3[11] * t5[9] - t3[12] * t5[8] + t3[13] * t5[7] + t3[15] * t5[0] - t3[15] * t5[10]
);

}
		
	
	  	
template<>
inline Mtd sp (const Mtd& mtd, const Bst& bst) {					
					
const Bst& t1 = bst;
const Mtd& t2 = mtd;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[4] * t2[4] + t1[5] * t2[5] + t1[6] * t2[6] + t1[10] * t2[7],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2] + t1[4] * t2[5] - t1[5] * t2[4] + t1[6] * t2[11] + t1[10] * t2[8],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1] + t1[4] * t2[6] - t1[5] * t2[11] - t1[6] * t2[4] + t1[10] * t2[9],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0] + t1[4] * t2[11] + t1[5] * t2[6] - t1[6] * t2[5] + t1[10] * t2[10],
t1[4] * t2[0] + t1[4] * t2[7] - t1[5] * t2[1] - t1[5] * t2[8] - t1[6] * t2[2] - t1[6] * t2[9],
t1[4] * t2[1] + t1[4] * t2[8] + t1[5] * t2[0] + t1[5] * t2[7] - t1[6] * t2[3] - t1[6] * t2[10],
t1[4] * t2[2] + t1[4] * t2[9] + t1[5] * t2[3] + t1[5] * t2[10] + t1[6] * t2[0] + t1[6] * t2[7],
t1[0] * t2[4] + t1[1] * t2[5] + t1[2] * t2[6] - t1[3] * t2[11] + t1[7] * t2[0] - t1[7] * t2[7] - t1[8] * t2[1] + t1[8] * t2[8] - t1[9] * t2[2] + t1[9] * t2[9] + t1[10] * t2[4],
t1[0] * t2[5] - t1[1] * t2[4] + t1[2] * t2[11] + t1[3] * t2[6] + t1[7] * t2[1] - t1[7] * t2[8] + t1[8] * t2[0] - t1[8] * t2[7] - t1[9] * t2[3] + t1[9] * t2[10] + t1[10] * t2[5],
t1[0] * t2[6] - t1[1] * t2[11] - t1[2] * t2[4] - t1[3] * t2[5] + t1[7] * t2[2] - t1[7] * t2[9] + t1[8] * t2[3] - t1[8] * t2[10] + t1[9] * t2[0] - t1[9] * t2[7] + t1[10] * t2[6],
t1[0] * t2[7] - t1[1] * t2[8] - t1[2] * t2[9] - t1[3] * t2[10] - t1[4] * t2[4] - t1[5] * t2[5] - t1[6] * t2[6] + t1[10] * t2[0],
t1[0] * t2[8] + t1[1] * t2[7] - t1[2] * t2[10] + t1[3] * t2[9] - t1[4] * t2[5] + t1[5] * t2[4] - t1[6] * t2[11] + t1[10] * t2[1],
t1[0] * t2[9] + t1[1] * t2[10] + t1[2] * t2[7] - t1[3] * t2[8] - t1[4] * t2[6] + t1[5] * t2[11] + t1[6] * t2[4] + t1[10] * t2[2],
t1[0] * t2[10] - t1[1] * t2[9] + t1[2] * t2[8] + t1[3] * t2[7] - t1[4] * t2[11] - t1[5] * t2[6] + t1[6] * t2[5] + t1[10] * t2[3],
t1[4] * t2[3] + t1[4] * t2[10] - t1[5] * t2[2] - t1[5] * t2[9] + t1[6] * t2[1] + t1[6] * t2[8],
t1[0] * t2[11] + t1[1] * t2[6] - t1[2] * t2[5] + t1[3] * t2[4] + t1[7] * t2[3] - t1[7] * t2[10] - t1[8] * t2[2] + t1[8] * t2[9] + t1[9] * t2[1] - t1[9] * t2[8] + t1[10] * t2[11]
);
const Bst& t4 = bst;
Bst t5 = reverse( t4);
return Mtd (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[11] * t5[10] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[12] * t5[10] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[5] * t5[9] - t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[7] + t3[1] * t5[8] + t3[2] * t5[9] + t3[7] * t5[0] - t3[7] * t5[10] - t3[8] * t5[1] - t3[9] * t5[2] + t3[10] * t5[7] + t3[11] * t5[8] + t3[12] * t5[9] - t3[15] * t5[3],
t3[0] * t5[8] - t3[1] * t5[7] + t3[3] * t5[9] + t3[7] * t5[1] + t3[8] * t5[0] - t3[8] * t5[10] - t3[9] * t5[3] + t3[10] * t5[8] - t3[11] * t5[7] + t3[13] * t5[9] + t3[15] * t5[2],
t3[0] * t5[9] - t3[2] * t5[7] - t3[3] * t5[8] + t3[7] * t5[2] + t3[8] * t5[3] + t3[9] * t5[0] - t3[9] * t5[10] + t3[10] * t5[9] - t3[12] * t5[7] - t3[13] * t5[8] - t3[15] * t5[1],
t3[0] * t5[10] - t3[4] * t5[7] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3],
t3[1] * t5[10] - t3[4] * t5[8] + t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2] - t3[14] * t5[9] + t3[15] * t5[6],
t3[2] * t5[10] - t3[4] * t5[9] + t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1] + t3[14] * t5[8] - t3[15] * t5[5],
t3[3] * t5[10] - t3[5] * t5[9] + t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0] - t3[14] * t5[7] + t3[15] * t5[4],
t3[1] * t5[9] - t3[2] * t5[8] + t3[3] * t5[7] + t3[7] * t5[3] - t3[8] * t5[2] + t3[9] * t5[1] + t3[11] * t5[9] - t3[12] * t5[8] + t3[13] * t5[7] + t3[15] * t5[0] - t3[15] * t5[10]
);

}
		
	
	  	
template<>
inline Mtd re (const Mtd& mtd, const Vec& vec) {					
					
const Vec& t1 = vec;
const Mtd& t2 = mtd;
Mtd t3 = involute( t2);
Par_Drb t4 (
t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2],
t1[0] * t3[1] + t1[1] * t3[0] - t1[2] * t3[3],
t1[0] * t3[2] + t1[1] * t3[3] + t1[2] * t3[0],
t1[0] * t3[4] + t1[1] * t3[5] + t1[2] * t3[6],
t1[0] * t3[5] - t1[1] * t3[4] + t1[2] * t3[11],
t1[0] * t3[6] - t1[1] * t3[11] - t1[2] * t3[4],
t1[0] * t3[11] + t1[1] * t3[6] - t1[2] * t3[5],
t1[0] * t3[7] - t1[1] * t3[8] - t1[2] * t3[9],
t1[0] * t3[8] + t1[1] * t3[7] - t1[2] * t3[10],
t1[0] * t3[9] + t1[1] * t3[10] + t1[2] * t3[7],
t1[0] * t3[3] - t1[1] * t3[2] + t1[2] * t3[1],
t1[0] * t3[10] - t1[1] * t3[9] + t1[2] * t3[8]
);
const Vec& t5 = vec;
Vec t6 = reverse( t5);
return Mtd (
t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2],
t4[0] * t6[1] - t4[1] * t6[0] + t4[10] * t6[2],
t4[0] * t6[2] - t4[2] * t6[0] - t4[10] * t6[1],
t4[1] * t6[2] - t4[2] * t6[1] + t4[10] * t6[0],
 - t4[3] * t6[0] - t4[4] * t6[1] - t4[5] * t6[2],
 - t4[3] * t6[1] + t4[4] * t6[0] - t4[6] * t6[2],
 - t4[3] * t6[2] + t4[5] * t6[0] + t4[6] * t6[1],
t4[7] * t6[0] + t4[8] * t6[1] + t4[9] * t6[2],
t4[7] * t6[1] - t4[8] * t6[0] + t4[11] * t6[2],
t4[7] * t6[2] - t4[9] * t6[0] - t4[11] * t6[1],
t4[8] * t6[2] - t4[9] * t6[1] + t4[11] * t6[0],
 - t4[4] * t6[2] + t4[5] * t6[1] - t4[6] * t6[0]
);

}
		
	
	  	
template<>
inline Mtd re (const Mtd& mtd, const Dlp& dlp) {					
					
const Dlp& t1 = dlp;
const Mtd& t2 = mtd;
Mtd t3 = involute( t2);
Par_Drb t4 (
t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2],
t1[0] * t3[1] + t1[1] * t3[0] - t1[2] * t3[3],
t1[0] * t3[2] + t1[1] * t3[3] + t1[2] * t3[0],
t1[0] * t3[4] + t1[1] * t3[5] + t1[2] * t3[6] + t1[3] * t3[0] - t1[3] * t3[7],
t1[0] * t3[5] - t1[1] * t3[4] + t1[2] * t3[11] + t1[3] * t3[1] - t1[3] * t3[8],
t1[0] * t3[6] - t1[1] * t3[11] - t1[2] * t3[4] + t1[3] * t3[2] - t1[3] * t3[9],
t1[0] * t3[11] + t1[1] * t3[6] - t1[2] * t3[5] + t1[3] * t3[3] - t1[3] * t3[10],
t1[0] * t3[7] - t1[1] * t3[8] - t1[2] * t3[9],
t1[0] * t3[8] + t1[1] * t3[7] - t1[2] * t3[10],
t1[0] * t3[9] + t1[1] * t3[10] + t1[2] * t3[7],
t1[0] * t3[3] - t1[1] * t3[2] + t1[2] * t3[1],
t1[0] * t3[10] - t1[1] * t3[9] + t1[2] * t3[8]
);
const Dlp& t5 = dlp;
Dlp t6 = reverse( t5);
return Mtd (
t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2],
t4[0] * t6[1] - t4[1] * t6[0] + t4[10] * t6[2],
t4[0] * t6[2] - t4[2] * t6[0] - t4[10] * t6[1],
t4[1] * t6[2] - t4[2] * t6[1] + t4[10] * t6[0],
t4[0] * t6[3] - t4[3] * t6[0] - t4[4] * t6[1] - t4[5] * t6[2] + t4[7] * t6[3],
t4[1] * t6[3] - t4[3] * t6[1] + t4[4] * t6[0] - t4[6] * t6[2] + t4[8] * t6[3],
t4[2] * t6[3] - t4[3] * t6[2] + t4[5] * t6[0] + t4[6] * t6[1] + t4[9] * t6[3],
t4[7] * t6[0] + t4[8] * t6[1] + t4[9] * t6[2],
t4[7] * t6[1] - t4[8] * t6[0] + t4[11] * t6[2],
t4[7] * t6[2] - t4[9] * t6[0] - t4[11] * t6[1],
t4[8] * t6[2] - t4[9] * t6[1] + t4[11] * t6[0],
 - t4[4] * t6[2] + t4[5] * t6[1] - t4[6] * t6[0] + t4[10] * t6[3] + t4[11] * t6[3]
);

}
		
	
	  	
template<>
inline Mtd re (const Mtd& mtd, const Pln& pln) {					
					
const Pln& t1 = pln;
const Mtd& t2 = mtd;
Mtd t3 = involute( t2);
Mtd t4 (
 - t1[0] * t3[8] - t1[1] * t3[9] - t1[2] * t3[10],
t1[0] * t3[7] - t1[1] * t3[10] + t1[2] * t3[9],
t1[0] * t3[10] + t1[1] * t3[7] - t1[2] * t3[8],
 - t1[0] * t3[9] + t1[1] * t3[8] + t1[2] * t3[7],
t1[0] * t3[5] + t1[1] * t3[6] - t1[2] * t3[11] - t1[3] * t3[3] + t1[3] * t3[10],
 - t1[0] * t3[4] + t1[1] * t3[11] + t1[2] * t3[6] + t1[3] * t3[2] - t1[3] * t3[9],
 - t1[0] * t3[11] - t1[1] * t3[4] - t1[2] * t3[5] - t1[3] * t3[1] + t1[3] * t3[8],
 - t1[0] * t3[1] - t1[1] * t3[2] - t1[2] * t3[3],
t1[0] * t3[0] - t1[1] * t3[3] + t1[2] * t3[2],
t1[0] * t3[3] + t1[1] * t3[0] - t1[2] * t3[1],
 - t1[0] * t3[2] + t1[1] * t3[1] + t1[2] * t3[0],
t1[0] * t3[6] - t1[1] * t3[5] + t1[2] * t3[4] + t1[3] * t3[0] - t1[3] * t3[7]
);
const Pln& t5 = pln;
Pln t6 = reverse( t5);
return Mtd (
 - t4[8] * t6[0] - t4[9] * t6[1] - t4[10] * t6[2],
t4[7] * t6[0] - t4[9] * t6[2] + t4[10] * t6[1],
t4[7] * t6[1] + t4[8] * t6[2] - t4[10] * t6[0],
t4[7] * t6[2] - t4[8] * t6[1] + t4[9] * t6[0],
 - t4[3] * t6[3] + t4[5] * t6[0] + t4[6] * t6[1] - t4[10] * t6[3] + t4[11] * t6[2],
t4[2] * t6[3] - t4[4] * t6[0] + t4[6] * t6[2] + t4[9] * t6[3] - t4[11] * t6[1],
 - t4[1] * t6[3] - t4[4] * t6[1] - t4[5] * t6[2] - t4[8] * t6[3] + t4[11] * t6[0],
 - t4[1] * t6[0] - t4[2] * t6[1] - t4[3] * t6[2],
t4[0] * t6[0] - t4[2] * t6[2] + t4[3] * t6[1],
t4[0] * t6[1] + t4[1] * t6[2] - t4[3] * t6[0],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0],
t4[0] * t6[3] - t4[4] * t6[2] + t4[5] * t6[1] - t4[6] * t6[0] + t4[7] * t6[3]
);

}
		
	
	  	
template<>
inline Mtd re (const Mtd& mtd, const Dll& dll) {					
					
const Dll& t1 = dll;
const Mtd& t2 = mtd;
Mtd t3 = involute( t2);
Mtd t4 (
 - t1[0] * t3[1] - t1[1] * t3[2] - t1[2] * t3[3],
t1[0] * t3[0] - t1[1] * t3[3] + t1[2] * t3[2],
t1[0] * t3[3] + t1[1] * t3[0] - t1[2] * t3[1],
 - t1[0] * t3[2] + t1[1] * t3[1] + t1[2] * t3[0],
t1[0] * t3[5] + t1[1] * t3[6] - t1[2] * t3[11] + t1[3] * t3[0] - t1[3] * t3[7] - t1[4] * t3[1] + t1[4] * t3[8] - t1[5] * t3[2] + t1[5] * t3[9],
 - t1[0] * t3[4] + t1[1] * t3[11] + t1[2] * t3[6] + t1[3] * t3[1] - t1[3] * t3[8] + t1[4] * t3[0] - t1[4] * t3[7] - t1[5] * t3[3] + t1[5] * t3[10],
 - t1[0] * t3[11] - t1[1] * t3[4] - t1[2] * t3[5] + t1[3] * t3[2] - t1[3] * t3[9] + t1[4] * t3[3] - t1[4] * t3[10] + t1[5] * t3[0] - t1[5] * t3[7],
 - t1[0] * t3[8] - t1[1] * t3[9] - t1[2] * t3[10],
t1[0] * t3[7] - t1[1] * t3[10] + t1[2] * t3[9],
t1[0] * t3[10] + t1[1] * t3[7] - t1[2] * t3[8],
 - t1[0] * t3[9] + t1[1] * t3[8] + t1[2] * t3[7],
t1[0] * t3[6] - t1[1] * t3[5] + t1[2] * t3[4] + t1[3] * t3[3] - t1[3] * t3[10] - t1[4] * t3[2] + t1[4] * t3[9] + t1[5] * t3[1] - t1[5] * t3[8]
);
const Dll& t5 = dll;
Dll t6 = reverse( t5);
return Mtd (
 - t4[1] * t6[0] - t4[2] * t6[1] - t4[3] * t6[2],
t4[0] * t6[0] - t4[2] * t6[2] + t4[3] * t6[1],
t4[0] * t6[1] + t4[1] * t6[2] - t4[3] * t6[0],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0],
t4[0] * t6[3] + t4[1] * t6[4] + t4[2] * t6[5] - t4[5] * t6[0] - t4[6] * t6[1] + t4[7] * t6[3] + t4[8] * t6[4] + t4[9] * t6[5] - t4[11] * t6[2],
t4[0] * t6[4] - t4[1] * t6[3] + t4[3] * t6[5] + t4[4] * t6[0] - t4[6] * t6[2] + t4[7] * t6[4] - t4[8] * t6[3] + t4[10] * t6[5] + t4[11] * t6[1],
t4[0] * t6[5] - t4[2] * t6[3] - t4[3] * t6[4] + t4[4] * t6[1] + t4[5] * t6[2] + t4[7] * t6[5] - t4[9] * t6[3] - t4[10] * t6[4] - t4[11] * t6[0],
 - t4[8] * t6[0] - t4[9] * t6[1] - t4[10] * t6[2],
t4[7] * t6[0] - t4[9] * t6[2] + t4[10] * t6[1],
t4[7] * t6[1] + t4[8] * t6[2] - t4[10] * t6[0],
t4[7] * t6[2] - t4[8] * t6[1] + t4[9] * t6[0],
t4[1] * t6[5] - t4[2] * t6[4] + t4[3] * t6[3] + t4[4] * t6[2] - t4[5] * t6[1] + t4[6] * t6[0] + t4[8] * t6[5] - t4[9] * t6[4] + t4[10] * t6[3]
);

}
		
	
	  	
template<>
inline Mtd re (const Mtd& mtd, const Lin& lin) {					
					
const Lin& t1 = lin;
const Mtd& t2 = mtd;
Mtd t3 = involute( t2);
Par_Drb t4 (
t1[3] * t3[7] - t1[4] * t3[8] - t1[5] * t3[9],
t1[3] * t3[8] + t1[4] * t3[7] - t1[5] * t3[10],
t1[3] * t3[9] + t1[4] * t3[10] + t1[5] * t3[7],
 - t1[0] * t3[1] + t1[0] * t3[8] - t1[1] * t3[2] + t1[1] * t3[9] - t1[2] * t3[3] + t1[2] * t3[10] + t1[3] * t3[4] + t1[4] * t3[5] + t1[5] * t3[6],
t1[0] * t3[0] - t1[0] * t3[7] - t1[1] * t3[3] + t1[1] * t3[10] + t1[2] * t3[2] - t1[2] * t3[9] + t1[3] * t3[5] - t1[4] * t3[4] + t1[5] * t3[11],
t1[0] * t3[3] - t1[0] * t3[10] + t1[1] * t3[0] - t1[1] * t3[7] - t1[2] * t3[1] + t1[2] * t3[8] + t1[3] * t3[6] - t1[4] * t3[11] - t1[5] * t3[4],
 - t1[0] * t3[2] + t1[0] * t3[9] + t1[1] * t3[1] - t1[1] * t3[8] + t1[2] * t3[0] - t1[2] * t3[7] + t1[3] * t3[11] + t1[4] * t3[6] - t1[5] * t3[5],
t1[3] * t3[0] - t1[4] * t3[1] - t1[5] * t3[2],
t1[3] * t3[1] + t1[4] * t3[0] - t1[5] * t3[3],
t1[3] * t3[2] + t1[4] * t3[3] + t1[5] * t3[0],
t1[3] * t3[10] - t1[4] * t3[9] + t1[5] * t3[8],
t1[3] * t3[3] - t1[4] * t3[2] + t1[5] * t3[1]
);
const Lin& t5 = lin;
Lin t6 = reverse( t5);
return Mtd (
t4[7] * t6[3] + t4[8] * t6[4] + t4[9] * t6[5],
t4[7] * t6[4] - t4[8] * t6[3] + t4[11] * t6[5],
t4[7] * t6[5] - t4[9] * t6[3] - t4[11] * t6[4],
t4[8] * t6[5] - t4[9] * t6[4] + t4[11] * t6[3],
 - t4[1] * t6[0] - t4[2] * t6[1] + t4[3] * t6[3] + t4[4] * t6[4] + t4[5] * t6[5] - t4[8] * t6[0] - t4[9] * t6[1] - t4[10] * t6[2] - t4[11] * t6[2],
t4[0] * t6[0] - t4[2] * t6[2] + t4[3] * t6[4] - t4[4] * t6[3] + t4[6] * t6[5] + t4[7] * t6[0] - t4[9] * t6[2] + t4[10] * t6[1] + t4[11] * t6[1],
t4[0] * t6[1] + t4[1] * t6[2] + t4[3] * t6[5] - t4[5] * t6[3] - t4[6] * t6[4] + t4[7] * t6[1] + t4[8] * t6[2] - t4[10] * t6[0] - t4[11] * t6[0],
t4[0] * t6[3] + t4[1] * t6[4] + t4[2] * t6[5],
t4[0] * t6[4] - t4[1] * t6[3] + t4[10] * t6[5],
t4[0] * t6[5] - t4[2] * t6[3] - t4[10] * t6[4],
t4[1] * t6[5] - t4[2] * t6[4] + t4[10] * t6[3],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0] + t4[4] * t6[5] - t4[5] * t6[4] + t4[6] * t6[3] + t4[7] * t6[2] - t4[8] * t6[1] + t4[9] * t6[0]
);

}
		
	
	  	
template<>
inline Mtd re (const Mtd& mtd, const Pnt& pnt) {					
					
const Pnt& t1 = pnt;
const Mtd& t2 = mtd;
Mtd t3 = involute( t2);
Rtc t4 (
t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2] + t1[3] * t3[4],
t1[0] * t3[1] + t1[1] * t3[0] - t1[2] * t3[3] + t1[3] * t3[5],
t1[0] * t3[2] + t1[1] * t3[3] + t1[2] * t3[0] + t1[3] * t3[6],
t1[3] * t3[0] + t1[3] * t3[7],
t1[0] * t3[4] + t1[1] * t3[5] + t1[2] * t3[6] + t1[4] * t3[0] - t1[4] * t3[7],
t1[3] * t3[1] + t1[3] * t3[8],
t1[3] * t3[2] + t1[3] * t3[9],
t1[3] * t3[3] + t1[3] * t3[10],
t1[0] * t3[5] - t1[1] * t3[4] + t1[2] * t3[11] + t1[4] * t3[1] - t1[4] * t3[8],
t1[0] * t3[6] - t1[1] * t3[11] - t1[2] * t3[4] + t1[4] * t3[2] - t1[4] * t3[9],
t1[0] * t3[11] + t1[1] * t3[6] - t1[2] * t3[5] + t1[4] * t3[3] - t1[4] * t3[10],
t1[0] * t3[7] - t1[1] * t3[8] - t1[2] * t3[9] - t1[3] * t3[4],
t1[0] * t3[8] + t1[1] * t3[7] - t1[2] * t3[10] - t1[3] * t3[5],
t1[0] * t3[9] + t1[1] * t3[10] + t1[2] * t3[7] - t1[3] * t3[6],
t1[0] * t3[3] - t1[1] * t3[2] + t1[2] * t3[1] + t1[3] * t3[11],
t1[0] * t3[10] - t1[1] * t3[9] + t1[2] * t3[8] - t1[3] * t3[11]
);
const Pnt& t5 = pnt;
Pnt t6 = reverse( t5);
return Mtd (
t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2] - t4[3] * t6[4] - t4[4] * t6[3],
t4[0] * t6[1] - t4[1] * t6[0] - t4[5] * t6[4] - t4[8] * t6[3] + t4[14] * t6[2],
t4[0] * t6[2] - t4[2] * t6[0] - t4[6] * t6[4] - t4[9] * t6[3] - t4[14] * t6[1],
t4[1] * t6[2] - t4[2] * t6[1] - t4[7] * t6[4] - t4[10] * t6[3] + t4[14] * t6[0],
t4[0] * t6[4] - t4[4] * t6[0] - t4[8] * t6[1] - t4[9] * t6[2] + t4[11] * t6[4],
t4[1] * t6[4] - t4[4] * t6[1] + t4[8] * t6[0] - t4[10] * t6[2] + t4[12] * t6[4],
t4[2] * t6[4] - t4[4] * t6[2] + t4[9] * t6[0] + t4[10] * t6[1] + t4[13] * t6[4],
t4[3] * t6[4] - t4[4] * t6[3] + t4[11] * t6[0] + t4[12] * t6[1] + t4[13] * t6[2],
t4[5] * t6[4] - t4[8] * t6[3] + t4[11] * t6[1] - t4[12] * t6[0] + t4[15] * t6[2],
t4[6] * t6[4] - t4[9] * t6[3] + t4[11] * t6[2] - t4[13] * t6[0] - t4[15] * t6[1],
t4[7] * t6[4] - t4[10] * t6[3] + t4[12] * t6[2] - t4[13] * t6[1] + t4[15] * t6[0],
 - t4[8] * t6[2] + t4[9] * t6[1] - t4[10] * t6[0] + t4[14] * t6[4] + t4[15] * t6[4]
);

}
		
	
	  	
template<>
inline Mtd re (const Mtd& mtd, const Par& par) {					
					
const Par& t1 = par;
const Mtd& t2 = mtd;
Mtd t3 = involute( t2);
Mtt t4 (
 - t1[0] * t3[1] - t1[1] * t3[2] - t1[2] * t3[3] + t1[3] * t3[4] + t1[4] * t3[5] + t1[5] * t3[6] + t1[9] * t3[7],
t1[0] * t3[0] - t1[1] * t3[3] + t1[2] * t3[2] + t1[3] * t3[5] - t1[4] * t3[4] + t1[5] * t3[11] + t1[9] * t3[8],
t1[0] * t3[3] + t1[1] * t3[0] - t1[2] * t3[1] + t1[3] * t3[6] - t1[4] * t3[11] - t1[5] * t3[4] + t1[9] * t3[9],
 - t1[0] * t3[2] + t1[1] * t3[1] + t1[2] * t3[0] + t1[3] * t3[11] + t1[4] * t3[6] - t1[5] * t3[5] + t1[9] * t3[10],
t1[3] * t3[0] + t1[3] * t3[7] - t1[4] * t3[1] - t1[4] * t3[8] - t1[5] * t3[2] - t1[5] * t3[9],
t1[3] * t3[1] + t1[3] * t3[8] + t1[4] * t3[0] + t1[4] * t3[7] - t1[5] * t3[3] - t1[5] * t3[10],
t1[3] * t3[2] + t1[3] * t3[9] + t1[4] * t3[3] + t1[4] * t3[10] + t1[5] * t3[0] + t1[5] * t3[7],
t1[0] * t3[5] + t1[1] * t3[6] - t1[2] * t3[11] + t1[6] * t3[0] - t1[6] * t3[7] - t1[7] * t3[1] + t1[7] * t3[8] - t1[8] * t3[2] + t1[8] * t3[9] + t1[9] * t3[4],
 - t1[0] * t3[4] + t1[1] * t3[11] + t1[2] * t3[6] + t1[6] * t3[1] - t1[6] * t3[8] + t1[7] * t3[0] - t1[7] * t3[7] - t1[8] * t3[3] + t1[8] * t3[10] + t1[9] * t3[5],
 - t1[0] * t3[11] - t1[1] * t3[4] - t1[2] * t3[5] + t1[6] * t3[2] - t1[6] * t3[9] + t1[7] * t3[3] - t1[7] * t3[10] + t1[8] * t3[0] - t1[8] * t3[7] + t1[9] * t3[6],
 - t1[0] * t3[8] - t1[1] * t3[9] - t1[2] * t3[10] - t1[3] * t3[4] - t1[4] * t3[5] - t1[5] * t3[6] + t1[9] * t3[0],
t1[0] * t3[7] - t1[1] * t3[10] + t1[2] * t3[9] - t1[3] * t3[5] + t1[4] * t3[4] - t1[5] * t3[11] + t1[9] * t3[1],
t1[0] * t3[10] + t1[1] * t3[7] - t1[2] * t3[8] - t1[3] * t3[6] + t1[4] * t3[11] + t1[5] * t3[4] + t1[9] * t3[2],
 - t1[0] * t3[9] + t1[1] * t3[8] + t1[2] * t3[7] - t1[3] * t3[11] - t1[4] * t3[6] + t1[5] * t3[5] + t1[9] * t3[3],
t1[3] * t3[3] + t1[3] * t3[10] - t1[4] * t3[2] - t1[4] * t3[9] + t1[5] * t3[1] + t1[5] * t3[8],
t1[0] * t3[6] - t1[1] * t3[5] + t1[2] * t3[4] + t1[6] * t3[3] - t1[6] * t3[10] - t1[7] * t3[2] + t1[7] * t3[9] + t1[8] * t3[1] - t1[8] * t3[8] + t1[9] * t3[11]
);
const Par& t5 = par;
Par t6 = reverse( t5);
return Mtd (
 - t4[1] * t6[0] - t4[2] * t6[1] - t4[3] * t6[2] + t4[4] * t6[6] + t4[5] * t6[7] + t4[6] * t6[8] + t4[7] * t6[3] + t4[8] * t6[4] + t4[9] * t6[5] + t4[10] * t6[9],
t4[0] * t6[0] - t4[2] * t6[2] + t4[3] * t6[1] + t4[4] * t6[7] - t4[5] * t6[6] + t4[7] * t6[4] - t4[8] * t6[3] + t4[11] * t6[9] + t4[14] * t6[8] + t4[15] * t6[5],
t4[0] * t6[1] + t4[1] * t6[2] - t4[3] * t6[0] + t4[4] * t6[8] - t4[6] * t6[6] + t4[7] * t6[5] - t4[9] * t6[3] + t4[12] * t6[9] - t4[14] * t6[7] - t4[15] * t6[4],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0] + t4[5] * t6[8] - t4[6] * t6[7] + t4[8] * t6[5] - t4[9] * t6[4] + t4[13] * t6[9] + t4[14] * t6[6] + t4[15] * t6[3],
t4[0] * t6[6] + t4[1] * t6[7] + t4[2] * t6[8] - t4[7] * t6[9] - t4[8] * t6[0] - t4[9] * t6[1] + t4[10] * t6[6] + t4[11] * t6[7] + t4[12] * t6[8] - t4[15] * t6[2],
t4[0] * t6[7] - t4[1] * t6[6] + t4[3] * t6[8] + t4[7] * t6[0] - t4[8] * t6[9] - t4[9] * t6[2] + t4[10] * t6[7] - t4[11] * t6[6] + t4[13] * t6[8] + t4[15] * t6[1],
t4[0] * t6[8] - t4[2] * t6[6] - t4[3] * t6[7] + t4[7] * t6[1] + t4[8] * t6[2] - t4[9] * t6[9] + t4[10] * t6[8] - t4[12] * t6[6] - t4[13] * t6[7] - t4[15] * t6[0],
t4[0] * t6[9] - t4[4] * t6[6] - t4[5] * t6[7] - t4[6] * t6[8] + t4[7] * t6[3] + t4[8] * t6[4] + t4[9] * t6[5] - t4[11] * t6[0] - t4[12] * t6[1] - t4[13] * t6[2],
t4[1] * t6[9] - t4[4] * t6[7] + t4[5] * t6[6] + t4[7] * t6[4] - t4[8] * t6[3] + t4[10] * t6[0] - t4[12] * t6[2] + t4[13] * t6[1] - t4[14] * t6[8] + t4[15] * t6[5],
t4[2] * t6[9] - t4[4] * t6[8] + t4[6] * t6[6] + t4[7] * t6[5] - t4[9] * t6[3] + t4[10] * t6[1] + t4[11] * t6[2] - t4[13] * t6[0] + t4[14] * t6[7] - t4[15] * t6[4],
t4[3] * t6[9] - t4[5] * t6[8] + t4[6] * t6[7] + t4[8] * t6[5] - t4[9] * t6[4] + t4[10] * t6[2] - t4[11] * t6[1] + t4[12] * t6[0] - t4[14] * t6[6] + t4[15] * t6[3],
t4[1] * t6[8] - t4[2] * t6[7] + t4[3] * t6[6] + t4[7] * t6[2] - t4[8] * t6[1] + t4[9] * t6[0] + t4[11] * t6[8] - t4[12] * t6[7] + t4[13] * t6[6] - t4[15] * t6[9]
);

}
		
	
	  	
template<>
inline Mtd re (const Mtd& mtd, const Cir& cir) {					
					
const Cir& t1 = cir;
const Mtd& t2 = mtd;
Mtd t3 = involute( t2);
Rtc t4 (
t1[0] * t3[5] + t1[1] * t3[6] - t1[2] * t3[11] + t1[6] * t3[7] - t1[7] * t3[8] - t1[8] * t3[9] - t1[9] * t3[3],
 - t1[0] * t3[4] + t1[1] * t3[11] + t1[2] * t3[6] + t1[6] * t3[8] + t1[7] * t3[7] - t1[8] * t3[10] + t1[9] * t3[2],
 - t1[0] * t3[11] - t1[1] * t3[4] - t1[2] * t3[5] + t1[6] * t3[9] + t1[7] * t3[10] + t1[8] * t3[7] - t1[9] * t3[1],
 - t1[0] * t3[1] - t1[0] * t3[8] - t1[1] * t3[2] - t1[1] * t3[9] - t1[2] * t3[3] - t1[2] * t3[10],
 - t1[3] * t3[1] + t1[3] * t3[8] - t1[4] * t3[2] + t1[4] * t3[9] - t1[5] * t3[3] + t1[5] * t3[10] + t1[6] * t3[4] + t1[7] * t3[5] + t1[8] * t3[6] - t1[9] * t3[11],
t1[0] * t3[0] + t1[0] * t3[7] - t1[1] * t3[3] - t1[1] * t3[10] + t1[2] * t3[2] + t1[2] * t3[9],
t1[0] * t3[3] + t1[0] * t3[10] + t1[1] * t3[0] + t1[1] * t3[7] - t1[2] * t3[1] - t1[2] * t3[8],
 - t1[0] * t3[2] - t1[0] * t3[9] + t1[1] * t3[1] + t1[1] * t3[8] + t1[2] * t3[0] + t1[2] * t3[7],
t1[3] * t3[0] - t1[3] * t3[7] - t1[4] * t3[3] + t1[4] * t3[10] + t1[5] * t3[2] - t1[5] * t3[9] + t1[6] * t3[5] - t1[7] * t3[4] + t1[8] * t3[11] + t1[9] * t3[6],
t1[3] * t3[3] - t1[3] * t3[10] + t1[4] * t3[0] - t1[4] * t3[7] - t1[5] * t3[1] + t1[5] * t3[8] + t1[6] * t3[6] - t1[7] * t3[11] - t1[8] * t3[4] - t1[9] * t3[5],
 - t1[3] * t3[2] + t1[3] * t3[9] + t1[4] * t3[1] - t1[4] * t3[8] + t1[5] * t3[0] - t1[5] * t3[7] + t1[6] * t3[11] + t1[7] * t3[6] - t1[8] * t3[5] + t1[9] * t3[4],
 - t1[0] * t3[5] - t1[1] * t3[6] + t1[2] * t3[11] + t1[6] * t3[0] - t1[7] * t3[1] - t1[8] * t3[2] - t1[9] * t3[10],
t1[0] * t3[4] - t1[1] * t3[11] - t1[2] * t3[6] + t1[6] * t3[1] + t1[7] * t3[0] - t1[8] * t3[3] + t1[9] * t3[9],
t1[0] * t3[11] + t1[1] * t3[4] + t1[2] * t3[5] + t1[6] * t3[2] + t1[7] * t3[3] + t1[8] * t3[0] - t1[9] * t3[8],
t1[0] * t3[6] - t1[1] * t3[5] + t1[2] * t3[4] + t1[6] * t3[10] - t1[7] * t3[9] + t1[8] * t3[8] + t1[9] * t3[0],
 - t1[0] * t3[6] + t1[1] * t3[5] - t1[2] * t3[4] + t1[6] * t3[3] - t1[7] * t3[2] + t1[8] * t3[1] + t1[9] * t3[7]
);
const Cir& t5 = cir;
Cir t6 = reverse( t5);
return Mtd (
t4[5] * t6[3] + t4[6] * t6[4] + t4[7] * t6[5] + t4[8] * t6[0] + t4[9] * t6[1] + t4[10] * t6[2] + t4[11] * t6[6] + t4[12] * t6[7] + t4[13] * t6[8] - t4[14] * t6[9],
t4[2] * t6[9] - t4[3] * t6[3] - t4[4] * t6[0] + t4[6] * t6[5] - t4[7] * t6[4] + t4[9] * t6[2] - t4[10] * t6[1] + t4[11] * t6[7] - t4[12] * t6[6] + t4[15] * t6[8],
 - t4[1] * t6[9] - t4[3] * t6[4] - t4[4] * t6[1] - t4[5] * t6[5] + t4[7] * t6[3] - t4[8] * t6[2] + t4[10] * t6[0] + t4[11] * t6[8] - t4[13] * t6[6] - t4[15] * t6[7],
t4[0] * t6[9] - t4[3] * t6[5] - t4[4] * t6[2] + t4[5] * t6[4] - t4[6] * t6[3] + t4[8] * t6[1] - t4[9] * t6[0] + t4[12] * t6[8] - t4[13] * t6[7] + t4[15] * t6[6],
 - t4[1] * t6[3] - t4[2] * t6[4] + t4[4] * t6[6] + t4[8] * t6[7] + t4[9] * t6[8] + t4[10] * t6[9] - t4[12] * t6[3] - t4[13] * t6[4] - t4[14] * t6[5] - t4[15] * t6[5],
t4[0] * t6[3] - t4[2] * t6[5] + t4[4] * t6[7] - t4[8] * t6[6] - t4[9] * t6[9] + t4[10] * t6[8] + t4[11] * t6[3] - t4[13] * t6[5] + t4[14] * t6[4] + t4[15] * t6[4],
t4[0] * t6[4] + t4[1] * t6[5] + t4[4] * t6[8] + t4[8] * t6[9] - t4[9] * t6[6] - t4[10] * t6[7] + t4[11] * t6[4] + t4[12] * t6[5] - t4[14] * t6[3] - t4[15] * t6[3],
t4[0] * t6[6] + t4[1] * t6[7] + t4[2] * t6[8] - t4[5] * t6[3] - t4[6] * t6[4] - t4[7] * t6[5] + t4[8] * t6[0] + t4[9] * t6[1] + t4[10] * t6[2] - t4[15] * t6[9],
t4[0] * t6[7] - t4[1] * t6[6] + t4[3] * t6[3] - t4[4] * t6[0] - t4[6] * t6[5] + t4[7] * t6[4] + t4[9] * t6[2] - t4[10] * t6[1] + t4[13] * t6[9] + t4[14] * t6[8],
t4[0] * t6[8] - t4[2] * t6[6] + t4[3] * t6[4] - t4[4] * t6[1] + t4[5] * t6[5] - t4[7] * t6[3] - t4[8] * t6[2] + t4[10] * t6[0] - t4[12] * t6[9] - t4[14] * t6[7],
t4[1] * t6[8] - t4[2] * t6[7] + t4[3] * t6[5] - t4[4] * t6[2] - t4[5] * t6[4] + t4[6] * t6[3] + t4[8] * t6[1] - t4[9] * t6[0] + t4[11] * t6[9] + t4[14] * t6[6],
t4[0] * t6[5] - t4[1] * t6[4] + t4[2] * t6[3] - t4[4] * t6[9] + t4[8] * t6[8] - t4[9] * t6[7] + t4[10] * t6[6] + t4[11] * t6[5] - t4[12] * t6[4] + t4[13] * t6[3]
);

}
		
	
	  	
template<>
inline Mtd re (const Mtd& mtd, const Sph& sph) {					
					
const Sph& t1 = sph;
const Mtd& t2 = mtd;
Mtd t3 = involute( t2);
Mtt t4 (
 - t1[0] * t3[8] - t1[1] * t3[9] - t1[2] * t3[10] - t1[3] * t3[11],
t1[0] * t3[7] - t1[1] * t3[10] + t1[2] * t3[9] + t1[3] * t3[6],
t1[0] * t3[10] + t1[1] * t3[7] - t1[2] * t3[8] - t1[3] * t3[5],
 - t1[0] * t3[9] + t1[1] * t3[8] + t1[2] * t3[7] + t1[3] * t3[4],
 - t1[3] * t3[3] - t1[3] * t3[10],
t1[3] * t3[2] + t1[3] * t3[9],
 - t1[3] * t3[1] - t1[3] * t3[8],
t1[0] * t3[5] + t1[1] * t3[6] - t1[2] * t3[11] - t1[4] * t3[3] + t1[4] * t3[10],
 - t1[0] * t3[4] + t1[1] * t3[11] + t1[2] * t3[6] + t1[4] * t3[2] - t1[4] * t3[9],
 - t1[0] * t3[11] - t1[1] * t3[4] - t1[2] * t3[5] - t1[4] * t3[1] + t1[4] * t3[8],
 - t1[0] * t3[1] - t1[1] * t3[2] - t1[2] * t3[3] + t1[3] * t3[11],
t1[0] * t3[0] - t1[1] * t3[3] + t1[2] * t3[2] - t1[3] * t3[6],
t1[0] * t3[3] + t1[1] * t3[0] - t1[2] * t3[1] + t1[3] * t3[5],
 - t1[0] * t3[2] + t1[1] * t3[1] + t1[2] * t3[0] - t1[3] * t3[4],
t1[3] * t3[0] + t1[3] * t3[7],
t1[0] * t3[6] - t1[1] * t3[5] + t1[2] * t3[4] + t1[4] * t3[0] - t1[4] * t3[7]
);
const Sph& t5 = sph;
Sph t6 = reverse( t5);
return Mtd (
 - t4[11] * t6[0] - t4[12] * t6[1] - t4[13] * t6[2] - t4[14] * t6[4] - t4[15] * t6[3],
t4[6] * t6[4] + t4[9] * t6[3] + t4[10] * t6[0] - t4[12] * t6[2] + t4[13] * t6[1],
 - t4[5] * t6[4] - t4[8] * t6[3] + t4[10] * t6[1] + t4[11] * t6[2] - t4[13] * t6[0],
t4[4] * t6[4] + t4[7] * t6[3] + t4[10] * t6[2] - t4[11] * t6[1] + t4[12] * t6[0],
 - t4[3] * t6[4] + t4[8] * t6[0] + t4[9] * t6[1] - t4[13] * t6[4] + t4[15] * t6[2],
t4[2] * t6[4] - t4[7] * t6[0] + t4[9] * t6[2] + t4[12] * t6[4] - t4[15] * t6[1],
 - t4[1] * t6[4] - t4[7] * t6[1] - t4[8] * t6[2] - t4[11] * t6[4] + t4[15] * t6[0],
 - t4[1] * t6[0] - t4[2] * t6[1] - t4[3] * t6[2] + t4[14] * t6[4] - t4[15] * t6[3],
t4[0] * t6[0] - t4[2] * t6[2] + t4[3] * t6[1] - t4[6] * t6[4] + t4[9] * t6[3],
t4[0] * t6[1] + t4[1] * t6[2] - t4[3] * t6[0] + t4[5] * t6[4] - t4[8] * t6[3],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0] - t4[4] * t6[4] + t4[7] * t6[3],
t4[0] * t6[4] - t4[7] * t6[2] + t4[8] * t6[1] - t4[9] * t6[0] + t4[10] * t6[4]
);

}
		
	
		
	} //vsr::
	#endif
	