#include<stdio.h>

int main(void)
{
	int input;
	int sum=0, count=0;
	
	printf("������ ���� �Է� : ");
	scanf("%d", &input);
	printf("%d : ",input);
	
	if(input<0)
	input=-input;
	
	while(input!=0)
	{
	sum+=input%10;
	input=input/10;
	count++;
	}
	
	printf("%d �ڸ� ����\n",count);
	printf("�� �ڸ��� ���� : %d",sum);
	
	return 0;
}

