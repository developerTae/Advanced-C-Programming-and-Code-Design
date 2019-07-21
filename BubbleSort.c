/* ���� ����: ������ �˰���*/
#include<stdio.h>
#define Max_size 10

void bubbleSort(int *, int);
void getArray(int*,int);
void printArray(int*,int);
void SWAP(int*,int*);

int main(void)
{
	int arr[Max_size];

	getArray(arr, Max_size);

	bubbleSort(arr, Max_size);

	printf("���ĵ� �迭: ");
	printArray(arr, Max_size);

	return 0;
}

void bubbleSort(int *pArr, int n)
{
	int STATE;
	for (int i = 0; i < n - 1; i++) // (n-1)�� �ݺ�
	{
		STATE = 0;
		for (int j = n-1; j >= i; j--) // (���� �� �� ����)������ ���Һ��� ù ��° ���ұ��� ��
		{
			if (pArr[j] < pArr[j - 1])
			{
				SWAP(&pArr[j], &pArr[j - 1]);
				STATE = 1;
			}
		}
		if (STATE == 0)
			return;
		printArray(pArr, n);
		printf("\n");
	}
}	

void SWAP(int *num1, int *num2)
{
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
	return;
}

void getArray(int *pArr, int n) // pArr=arr
{
	printf("���ĵ��� ���� �迭: ");
	for (int i = 0; i < n; i++)
		scanf("%d", &pArr[i]);
	return;
}

void printArray(int *pArr, int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", pArr[i]);
	return;
}