#include<stdio.h>

int main(void)
{
	int leapyear, cyear; // cyear(=commonyear)
	
	printf("�⵵ �Է� : ");
	scanf("%d",&cyear);
	
	if(cyear%4==0)
	{
		if(cyear%100==0)
		{
			if(cyear%400==0)
			{
				leapyear=cyear;
				printf("%d�� �����Դϴ�.",leapyear); 
			}
			else
			printf("%d�� ����Դϴ�.",cyear); 
		}
		else
		printf("%d�� ����Դϴ�.",cyear); 
	}
	else
	printf("%d�� ����Դϴ�.",cyear); 
	return 0;	
}

