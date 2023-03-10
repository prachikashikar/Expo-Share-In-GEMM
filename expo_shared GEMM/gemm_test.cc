#include<stdio.h>
#include <ap_int.h>
#include "new_gemm.h"


int main()
{

	float c[M][O];

	ap_uint<1>  aSign[M][N] = { 0,0,0,0};
	ap_uint<2>  aIndex[M][N] = { 0,1,1,2 };
	ap_uint<23>  aMant[M][N] = { 0, 0, 4194304, 0};
	ap_uint<8>  aList[3] = { 128, 129, 127 };

	float b[N][O] = {3,2.2,2,1,-4,5};
	
	gemm(aSign, aIndex, aMant, aList, b,c);


	//Check output
	printf("\n In test bench \n");
	for (int m = 0; m < M; m++)
	{
		for (int o = 0; o < O; o++)
		{
			printf(" %f", c[m][o]);
		}
		printf("\n");
	}
	return 0;
}
