#include<iostream>
#include"���.h"

using namespace std;

void OUTPUT(const NODE* head)
{
	const NODE* temp = NULL;

	//�� ����Ʈ ���� Ȯ��
	if (!head)
	{
		cout << "�Էµ� �����Ͱ� �����ϴ�..." << endl;
		return;
	}

	//ù ��° ������ �� ������ ����� ������ ���
	temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->link;
	}
	cout << endl;

	return;
}