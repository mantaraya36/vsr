		
	#include "conga_assign_Tnb_con.h"
	
		int conga_assign_Tnb_switch[167] = {
	 
	45,  
	45,  
	45,  
	45,  
	45,  
	45,  
	45,  
	45,  
	0,  
	45,  
	45,  
	45,  
	45,  
	45,  
	45,  
	1,  
	45,  
	45,  
	45,  
	45,  
	45,  
	45,  
	45,  
	45,  
	45,  
	45,  
	45,  
	2,  
	45,  
	45,  
	45,  
	45,  
	45,  
	45,  
	45,  
	45,  
	45,  
	45,  
	45,  
	45,  
	3,  
	45,  
	45,  
	4,  
	45,  
	5,  
	6,  
	45,  
	45,  
	45,  
	45,  
	45,  
	45,  
	45,  
	45,  
	7,  
	45,  
	45,  
	45,  
	45,  
	45,  
	8,  
	45,  
	45,  
	9,  
	45,  
	45,  
	45,  
	45,  
	45,  
	45,  
	10,  
	45,  
	45,  
	45,  
	45,  
	45,  
	45,  
	45,  
	45,  
	45,  
	45,  
	11,  
	12,  
	45,  
	45,  
	13,  
	14,  
	45,  
	15,  
	45,  
	45,  
	45,  
	16,  
	45,  
	45,  
	17,  
	45,  
	18,  
	45,  
	45,  
	45,  
	45,  
	45,  
	19,  
	45,  
	45,  
	45,  
	45,  
	45,  
	45,  
	45,  
	45,  
	45,  
	45,  
	45,  
	45,  
	20,  
	45,  
	21,  
	22,  
	45,  
	23,  
	24,  
	45,  
	25,  
	45,  
	26,  
	45,  
	27,  
	45,  
	28,  
	45,  
	29,  
	30,  
	45,  
	31,  
	32,  
	45,  
	45,  
	33,  
	45,  
	45,  
	45,  
	45,  
	45,  
	45,  
	34,  
	45,  
	35,  
	45,  
	36,  
	37,  
	45,  
	38,  
	45,  
	45,  
	39,  
	45,  
	40,  
	41,  
	45,  
	45,  
	42,  
	43,  
	45,  
	44, 
	};
	
	
		int conga_assign_Tnb_base_index[3] = { 16,17,18, };
	
	
	void conga_assign_Tnb_fn(int _idx, double * a, double *r){
	
		conga_assign_Tnb_func[ conga_assign_Tnb_switch [_idx] ](a, r);
	}


	

	