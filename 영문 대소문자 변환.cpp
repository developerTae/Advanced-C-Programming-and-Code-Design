#include<stdio.h>
#define Max_size 30

void stringConvert(const char*, char*);

int main(void)
{
	char str[Max_size]; 

	printf("���ڿ� �Է�: ");
	gets(str);  
	
	stringConvert(str,str);
	
	printf("��ȭ�� ���ڿ�: ");
	printf("%s",str);
	
	return 0;
}

void stringConvert(const char*fromString, char*toString) // fromString=str, toString=str
{
	for(int i=0; i<Max_size; i++)
	{
		if(*(fromString+i)>='a' && *(fromString+i)<='z')
		{
			*(toString+i)-='a'-'A';
		}
		else if(*(fromString+i)>='A' && *(fromString+i)<='Z')
		{
			*(toString+i)+='a'-'A';
		}
	}
}
