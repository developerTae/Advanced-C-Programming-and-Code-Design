#include<stdio.h>
void clearBuffer(void);

typedef struct book{
	char author[10];
	char name[30];
	int page;
}Book;
int main(void){
	Book b[3];
	printf("���� ���� �Է�\n");
	for(int i=0;i<3;i++){
		putchar('\n');
		fputs("���� : ",stdout);
		fgets(b[i].author, sizeof(b[i].author), stdin);
		
		fputs("���� : ",stdout);
		fgets(b[i].name, sizeof(b[i].name), stdin);
		
		fputs("������ �� : ",stdout);
		scanf("%d", &b[i].page);
		
		clearBuffer();
		
	}
	fputs("\n\n\n���� ���� ���\n",stdout);
	
	for(int i = 0; i<3 ; i++){
	printf("\nbook %d \n",i+1);
	printf("���� : %s", b[i].author);
	printf("���� : %s", b[i].name);
	printf("������ �� : %d\n", b[i].page);
}
return 0;
}
void clearBuffer(void){
	while(getchar()!='\n');
}

