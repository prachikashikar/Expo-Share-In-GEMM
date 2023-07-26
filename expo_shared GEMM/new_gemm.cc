#include<stdio.h>
#include <ap_int.h>

#include "./new_gemm.h"

// Float as a combination of sign, exponent and mantissa
union MyUnion
{
	float f;
	struct
	{

		// Order is important. 
		// Here the members of the union data structure 
		// use the same memory (32 bits). 
		// The ordering is taken 
		// from the LSB to the MSB. 
		unsigned int mantissa : 23;
		unsigned int exponent : 8;
		unsigned int sign : 1;
	}raw;
};


void gemm(ap_uint<1> aSign[M][N], ap_uint<2> aInd[M][N],
		ap_uint<23> aMant[M][N], ap_uint<8>  aList[3],
		float b[N][O], float c[M][O])
{
	MyUnion tempA, tempB;
	for (int m = 0; m < M; m++)
	{

		for (int o = 0; o < O; o++)
		{
//#pragma HLS pipeline II = 1
			c[m][o] = 0;
			for (int n = 0; n < N; n++)
			{
                #pragma HLS pipeline

// Retrieve floats 
				tempA.raw.sign = aSign[m][n];
				tempA.raw.exponent = aList[aInd[m][n]];
				tempA.raw.mantissa = aMant[m][n];


				c[m][o] += tempA.f * b[n][o];
			}
		}
	}

}
