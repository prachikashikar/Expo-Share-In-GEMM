#include<stdio.h>

#include "./gemm.h"

void gemm(float a[M][N], float b[N][O],float c[M][O])
{
	//printf("\nIn Gemm.cc \n");
	for (int m = 0; m < M; m++)
	{
		for (int o = 0; o < O; o ++)
		{
			c[m][o] = 0;
			for (int n = 0; n < N; n++)
			{
                #pragma HLS pipeline
				c[m][o] += a[m][n]* b[n][o];
			}
			//printf(" %f",c[m][o]);
		}
		//printf(" \n");
	}
}
