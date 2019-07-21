/*���� Ž��(������ ����)*/
#include<stdio.h>
#include<stdbool.h>
#define MAX_SIZE 15

int *binarySearch(int*, int*, int*, int);
void PRINT(int *, int);

int main(void)
{
	int num;
	int *pIndex;
	int arr[MAX_SIZE] = { 5,9,10,15,20,24,29,30,38,40,48,50,51,59,69 };

	printf("���� ������: "); PRINT(arr, MAX_SIZE);
	

	while (true)
	{
		printf("ã���� �ϴ� ������(�˻� ����:0):");
		scanf("%d", &num);

		if (num == 0)			break;
		else
			pIndex = binarySearch(arr, arr, arr + MAX_SIZE - 1, num);

		if (pIndex == NULL)			printf("�˻� ����!!!");
		else			printf("�˻��� ������:%d ��ġ(÷��):%d\n", *pIndex, (pIndex - arr)+1);
	}
	return 0;
}

void PRINT(int *pArr, int num)
{
	for (int i = 0; i < num; i++) {
		printf("%3d", pArr[i]);
	}
	printf("\n");
}

int *binarySearch(int*pArr, int*pFirst, int*pLast, int key)
{
	if (pFirst > pLast)
		return NULL;
	
	int *pMid = pFirst + (pLast - pFirst) / 2;
	if (key == *pMid) return pMid;
	else if (key < *pMid) return binarySearch(pArr, pFirst, pMid - 1, key);
	else if (key > *pMid)return binarySearch(pArr, pMid + 1, pLast, key);

}