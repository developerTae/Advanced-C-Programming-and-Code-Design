#include<iostream>
#include"���.h"

using namespace std;

NODE* DELETE(NODE*head) {
	int num;
	NODE*pre = NULL, *temp = NULL, *old = NULL;

	//�� ����Ʈ ���� Ȯ��
	if (!head)
	{
		cout << "�� ����Ʈ!!!" << endl;
	}

	while (TRUE)
	{
		cout << "������ ������(����: 0) : ";
		cin >> num;
		fflush(stdin);
		if (num == 0)
			break;

		//ù ��° ������ �� ������ ������ ��ġ�ϴ� ������ ����
		temp = head;
		while (temp != NULL)
		{
			//������ �����Ͱ� �����ϴ� ���
			if (temp->data == num)
			{
				//ù ��° ����� ���
				if (temp == head)
					head = temp->link;
				//�߰� �Ǵ� �� ������ ����� ���
				else
					pre->link = temp->link;

				old = temp;
				temp = old->link;

				//������ ����� �޸� �ݳ�
				delete old;
			}
			else {
				pre = temp;
				temp = temp->link;
			}
		}
	}
	return head;
}