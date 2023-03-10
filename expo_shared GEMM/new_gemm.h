
#include<stdio.h>
#include <ap_int.h>

#define M 2
#define N 2
#define O 3


void gemm(ap_uint<1> aSign[M][N], ap_uint<2> aInd[M][N],
		ap_uint<23> aMant[M][N], ap_uint<8>  aList[3],
		float b[N][O], float c[M][O]);
