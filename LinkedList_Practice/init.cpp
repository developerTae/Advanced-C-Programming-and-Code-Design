#include<iostream>
#include"���.h"

using namespace std;

NODE*INIT(NODE*head)
{
	NODE* old = NULL;

	//�� ����Ʈ ���� Ȯ��
	if (!head)
	{
		cout << "�� ����Ʈ!!!" << endl;
		
	}

	//ù ��° ������ �� ������ ������ �޸� �ݳ�
	while (head != NULL)
	{
		old = head;
		head = old->link;
		delete old;
	}

	//ù ��° ����� �޸� �ּ� ��ȯ:NULL
	return head;
}