#include<stdio.h>
#define ROW 5
#define COL 5
int main(void)
{
	int arr[ROW][COL] = {0};

	printf("5���� �л� ����<����,����,����>�� �Է��Ͻÿ�...\n\n");
	for (int i = 0; i < 5; i++) // ���� �Է��ϸ鼭 ���
	{
		printf("%d : ", i + 1);
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &arr[i][j]);
			arr[i][3] += arr[i][j];
			(float)arr[i][4] = (float)arr[i][3] / 3.0;
		}
	}

	
	printf("����  ����  ����  ����   ����  ���\n"); // ���� ���
	for (int i = 0; i < 5; i++)
	{
		printf("%d : ", i + 1);
		for (int j = 0; j <4; j++)
		{
			printf("%5d ", arr[i][j]);
		}
		printf("%.2f\n", arr[i][4]);
	}
	
	return 0;
}