#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<char> v;
	vector<int> a;
	vector<int> b;
	/*v.reserve(8);  */      // ���� �޸� ���� 8 ���� �Ҵ�

	v.push_back('a');
	v.push_back('b');
	v.push_back('c');
	v.push_back('d');
	v.push_back('e');

	a.push_back(65);

	b.push_back(30);

	for (int i = 0; i < v.size(); ++i)
		cout << v[i] << endl;
	cout << endl;

	cout << "size : " << v.size()                // ���� ���� ����
		<< " capacity : " << v.capacity()            // ������ �Ҵ�� �޸��� ũ��
		<< "  max_size : " << v.max_size() << endl;    // �ִ� ���� ������ ���� ����
cout	<< "  maxsize: " << a.max_size() << endl;
cout << "  maxsize: " << b.max_size() << endl;

	cout << endl << "-- resize(10) -- " << endl;

	v.resize(10);            // ������ ���� ������ 10���� Ȯ��, �߰��� ������ ����Ʈ 0���� ä������.

	for (vector<int>::size_type i = 0; i < v.size(); ++i)   // ������ size Ÿ������ i�� �����Ѵ� (unsigned int) 
		cout << v[i] << endl;
	cout << endl;

	cout << "size : " << v.size()
		<< " capacity : " << v.capacity()
		<< "  max_size : " << v.max_size() << endl;


	cout << endl << "-- resize(3) -- " << endl;

	v.resize(3);            // ������ ���� ������ 3���� ���, capacity�� ��ȭ ����.

	for (vector<int>::size_type i = 0; i < v.size(); ++i)
		cout << v[i] << endl;
	cout << endl;

	cout << "size : " << v.size()
		<< " capacity : " << v.capacity()
		<< "  max_size : " << v.max_size() << endl;


	cout << endl << "-- vector clear() -- " << endl;

	v.clear();    // ���� ����    capacity(�޸�) �� �״�� �����ִ�.

	if (v.empty()) {    // ���Ϳ� ���Ұ� ������ Ȯ���Ѵ�.
		cout << "���Ϳ� ���Ұ� ����." << endl;
	}

	cout << "size : " << v.size()
		<< " capacity : " << v.capacity()
		<< "  max_size : " << v.max_size() << endl;

	vector<int>().swap(v);

	return 0;
}
