#include<stdio.h>

int main(void)
{
	int num;
	int i,j,k=0;
	
	printf("*********	��	��	*********\n");
	printf("1.���ĺ� �ڽ� ��� ���\n2.���ĺ� �Ƕ�̵� ��� ���\n3.���α׷� ����\n");
	printf("******************************\n");
	printf("�޴� ���� : ");
	
	scanf("%d", &num);
	
	switch(num)
	{
		case 1:
		for(int i=0;i<26;i++)
		{
			for(int j=65+i;j<=90;j++)
			{
				printf("%c ",j);
			}
			for(int k=65;k<65+i;k++)
			{
				printf("%c ",k);
			}
			printf("\n");
		}
		break;
		
		case 2:
		for(i=0;i<26;i++)
		{
			{for(j=40-i;j>0;j--)
				printf(" ");
			for(j=0;j<=i;j++)
				printf("%2c",65+j);
			printf("\n");	
		}
	}
		
		break;
			
		case 3:
			printf("���α׷� ����");
	}
	
	return 0;
}

