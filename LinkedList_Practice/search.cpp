#include<iostream>
#include"���.h"

using namespace std;

void SEARCH(const NODE*head)
{
	int num, state;
	const NODE*temp = NULL;

	//�� ����Ʈ ����Ȯ��
	if (!head)
	{
		cout << "�� ����Ʈ!!!" << endl;
		return;
	}

	while (TRUE)
	{
		cout << "�˻��� ������(����:0) : ";
		cin >> num;
		fflush(stdin);

		if (num == 0)
			break;

		//ù ��° ������ �� ������ ������ �˻�
		temp = head;
		state = TRUE;

		while (temp != NULL) {
			//ã���� �ϴ� �����Ϳ� ��ġ ���� �Ǵ�
			if (num == temp->data)
			{
				cout << temp->data << " ";
				state = FALSE;
			}
			//���� ���� �̵�
			temp = temp->link;
		}
		//ã���� �ϴ� �����Ͱ� �������� �ʴ� ���...
		if (state == TRUE)
			cout << "�������� �ʴ� ������!!!" << endl;
	}
	return;
}
