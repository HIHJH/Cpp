#include <iostream>
using namespace std;

int main() {

	//���� ������, ���� ������
	int a = 10;
	int b = 10;

	cout << a << b << endl; // 10, 10
	cout << a++ << endl; // 10
	cout << ++b << endl; // 11
	cout << a << b << endl; // 11, 11

	//�ݺ���
	for (int i = 0; i < 5; i++) {
		cout << i << "��°�Դϴ�." << endl; // 0~4
	}
	// i < 5�� '����ǥ����' -> true, false�� ��ȯ
	// == ����
	// != ���� �ʴ�

	return 0;
}