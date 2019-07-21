/*���� ����*/
#include<stdio.h>
#define Max_size 10

void insertionSort(int*, int);
void getArray(int*, int);
void printArray(int*, int);
void SWAP(int*, int*);

int main(void)
{
	int arr[Max_size];

	getArray(arr, Max_size);
	insertionSort(arr, Max_size);
	printf("���ĵ� �迭: ");
	printArray(arr, Max_size);

	return 0;
}

void insertionSort(int *pArr, int n)
{
	int temp;
	for (int i = 1; i < n; i++)
	{
		int j = i - 1; // ���� �� ������ ��ġ
		temp = pArr[i]; // ���� �ȵ� ������ ù ��° ���� ��
		while (j >= 0 && temp < pArr[j])
		{
			pArr[j + 1] = pArr[j]; // �ڷ� �̷��
			j--;
		}
		pArr[j + 1] = temp; 
		printArray(pArr, n); // ���� ���� Ȯ��
		printf("\n");
	}
	return;
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