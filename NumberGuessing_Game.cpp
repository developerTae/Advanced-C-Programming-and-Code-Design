#include<stdio.h>
#include<stdlib.h> //rand�Լ� ȣ���� ���� ���� 
#include<time.h>  //time�Լ� ȣ���� ���� ����  


int main(void)
{
	int random=0, answer=0;
	int count=1;
	int min=0, max=0;
	d
	srand(time(NULL));
	printf("������ų ������ �ּҰ��� �ִ밪�� ���ʷ� �Է��ϼ���!!\n"); 
	scanf("%d%d", &min, &max); 
	int na=(max+1)-min;
	random=rand()%na+min; 
	
		printf("������ %d~ %d ���̿��� �ֽ��ϴ�!\n",min,max); 
	while(1){
		scanf("%d", &answer);
		
		if(answer < random){
			printf(" �ƴմϴ�. �� �����ϴ�.\n");
			count++;
		}
		else if(answer > random){
			printf(" �ƴմϴ�. �� �����ϴ�. \n");
			count++;
		}
		else{
			printf("�����Դϴ�~ %d������ ������ϴ�!",count);
			break;
		}
	
}
	
	return 0;
}
