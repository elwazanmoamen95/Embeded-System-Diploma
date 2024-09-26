// test the output

#include<stdio.h>

int main()
{
	char* px = 0x0;
	short* py = 0x0;
	int* pz = 0x0;
	long* pA = 0x0;
	float* pB = 0x0;
	long long* pC = 0x0;
	double* pD = 0x0;

	printf("px = 0x%X \n", px);
	printf("py = 0x%X \n", py);
	printf("pz = 0x%X, pA = 0x%X, pB = 0x%X \n", pz, pA, pB);
	printf("pC = 0x%X, pD = 0x%X \n", pC, pD);
	
	px++;
	py ++;
	pz++;
	pA ++;
	pB ++;
	pC ++;
	pD ++;
		
	printf("px = 0x%X \n", px);
	printf("py = 0x%X \n", py);
	printf("pz = 0x%X, pA = 0x%X, pB = 0x%X \n", pz, pA, pB);
	printf("pC = 0x%X, pD = 0x%X \n", pC, pD);
	
	return 0;
}