#include<stdio.h>

void stuGrade(double *pArr, int num, double *pSum, double*pAve, double*pMax);

int main(void)
{
	double arr[10];
	double sum,ave,max;
	
	printf("10���� �л� ������ �Է��Ͻÿ�\n\n");
	for(int i=0; i<10; i++)
	{
		printf("arr[%d]: ",i);
		scanf("%lf", &arr[i]);
	}
	
	stuGrade(arr,10,&sum,&ave,&max);
	
	printf("\n����:%.2f, ���:%.2f, �ִ밪:%.2f\n",sum,ave,max);
	
	return 0;
}

void stuGrade(double *pArr, int num, double *pSum, double*pAve, double*pMax)
{
	for(int i=0; i<10; i++)
		*pSum+=*(pArr+i);
	*pAve=*pSum/10;
	
	*pMax=pArr[0];
	
	for(int i=0;i<10;i++)
	{
		if(*pMax<*(pArr+i))
		{
		*pMax=*(pArr+i);
	}
}
}

