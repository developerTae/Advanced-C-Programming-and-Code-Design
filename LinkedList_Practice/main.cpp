#include<iostream>
#include "���.h"

using namespace std;

int main(void)
{
	int num;
	NODE*head = NULL;

	while (TRUE) {
		system("cls");

		cout << "###�ܼ� ���� ����Ʈ ###" << endl;
		cout << "1) ������ �Է�" << endl;
		cout << "2) ������ ���" << endl;
		cout << "3) ���α׷� ����!!!" << endl;
		cout << "4) ������ �˻�" << endl;
		cout << "5) �޸� �ݳ�" << endl;

		cout << "�޴� ���� : ";
		cin >> num;
		fflush(stdin);

		switch (num)
		{
		case 1:head = INPUT(head); break;
		case 2:OUTPUT(head); break;
		case 3:cout << "���α׷� ����" << endl;
			return 0;
		case 4:SEARCH(head); break;
		case 5:INIT(head); break;
		default:cout << "�߸��� ����!!!" << endl;
		}

		system("pause");
	}
	return 0;
}