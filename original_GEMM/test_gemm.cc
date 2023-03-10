#include<stdio.h>
#include "gemm.h"


int main()
{
	float a[M][N] = {2,4,6,1};
	float b[N][O] = {3,2.2,2,1,-4,5};
	float c[M][O];

	gemm(a,b,c);
    // Print the output of gemm and match with the values printed from source code
	printf("\n In test bench now \n");

	for(int m=0;m<M;m++)
	{
		for(int o=0; o<O ;o++)
		{
			printf(" %f",c[m][o]);
		}
		printf("\n");
	}
	return 0;
}
