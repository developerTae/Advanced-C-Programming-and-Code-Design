#include<iostream>
#include"���.h"
using namespace std;

NODE*INPUT(NODE* head)
{
	int num;
	NODE *new_Node = NULL, *temp = NULL;

	while (TRUE)
	{
		cout << "������ ���� �Է�(����:0):";
		cin >> num;
		if (num == 0)
			break;

		//�������� ������ ���� ���ο� ��� ����
		new_Node = new NODE;
		if (new_Node == NULL)
		{
			cout << "�޸� �Ҵ� ����!!!!" << endl;
			exit(100);
		}

		//���ο� ����� �����Ϳ� ��ũ �ʵ� �ʱ�ȭ
		new_Node->data = num;
		new_Node->link = NULL;

		if (head == NULL)
			head = new_Node;
		else
		{
			//�� ������ ��� Ž��
			temp = head;
			while (temp->link != NULL)
				temp = temp->link;

			//���ο� ��带 �� ������ ��� ������ ����
			temp->link = new_Node;
		}
	}
	//���� �Ǵ� ����� ù ��° ����� �޸� �ּ� ��ȯ
	return head;
}