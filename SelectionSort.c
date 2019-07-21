/*���� ����*/
#include<stdio.h>
#define Max_size 10

void selectionSort(int *pArr, int n);
void getArray(int *pArr, int n);
void printArray(int *pArr, int n);
void SWAP(int *num1, int *num2);


int main(void)
{
	int arr[Max_size]; int i = 0;
	
	getArray(arr, Max_size);

	selectionSort(arr, Max_size);
	
	printArray(arr, Max_size);

	return 0;
}

void selectionSort(int *pArr, int n)
{
	int smallest; int temp;
	for (int i = 0; i < n - 1; i++)// (n-1)�� �ݺ�
	{	smallest = i; // ���� �� �� ������ ù ��° ���Ұ� ���� �۴ٰ� ����
	for (int j = i+1; j < n; j++)
	{
		if (pArr[j] < pArr[smallest])
			smallest = j; // ���� ���� ������ ��ġ�� ���
		}
	
	SWAP(&pArr[i], &pArr[smallest]);
	
	for (int i = 0; i < Max_size; i++)
		printf("%d ", pArr[i]);
	printf("\n\n");
	}
	return;
}

void getArray(int *pArr, int n)
{
	printf("���ĵ��� ���� �迭: ");
	for (int i = 0; i < Max_size; i++)
		scanf("%d", &pArr[i]);
	return;
}

void printArray(int *pArr, int n)
{
	printf("���ĵ� �迭: ");
	for (int i = 0; i < Max_size; i++)
		printf("%d ", pArr[i]);

	return;
}

void SWAP(int *num1, int *num2) // *num1=pArr[i], *num2=pArr[smallest]
{
	int temp; 
	temp = *num1;  // ���� �� �� ������ ù ��° ���ҿ� �ڸ� ��ȯ
	*num1 = *num2;
	*num2 = temp;

	return;
}