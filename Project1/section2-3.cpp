#include <iostream>
using namespace std;

int main() {
	//char: ���� ������ (���� �� �ܾ��� ���)
	int a = 77;
	char b = a; // M ���
	b = 'a'; // a ���

	// char�� �������� ""�� �ƴ϶� ''�� ���
	// null ���� '\0' : ���ڿ��� �������� �˷��ش�
	// "" >> ��������� null���ڰ� ���� => string�� ����

	cout << b << endl;

	//bool: 0(false) Ȥ�� 1(true) -> ���ǹ��� ���
	bool c = 0;
	bool d = 1;
	bool e = 10;

	cout << c << d << e << endl; //011 ���
	
	return 0;
}