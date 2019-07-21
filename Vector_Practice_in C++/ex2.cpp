#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<int> v(5);    // 0���� �ʱ�ȭ�� 5���� ����
	cout << "size : " << v.size() << " capacity : " << v.capacity() << endl;

	vector<int>().swap(v);        // ���� ���Ϳ� ��ȯ�Ѵ�.
	cout << "size : " << v.size() << " capacity : " << v.capacity() << endl;

	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	cout << v1[0] << ", " << v1.at(0) << ", " << v1.front() << endl; // ù��° ����
	cout << v1[4] << ", " << v1.at(4) << ", " << v1.back() << endl; //  ������ ����

	v1.front() = 100;
	v1.back() = 500;

	cout << v1[0] << ", " << v1.at(0) << ", " << v1.front() << endl; // ù��° ����
	cout << v1[4] << ", " << v1.at(4) << ", " << v1.back() << endl; //  ������ ����

	try {

		cout << v.at(10) << endl;        // ������ ��� ȣ�� throw out_of_range ����

	}
	catch (out_of_range &e) {
		cout << e.what() << endl;
	}

	return 0;
}

