#include <iostream>
using namespace std;

int main() {
	
	//switch ���� -> break ���� ����!

	int a;
	cin >> a;
	switch (a)
	{
	case 1:
		cout << "1 �Է�\n";
		break; //while Ż��

	case 2:
		cout << "2 �Է�\n";
		break;

	case 3:
		cout << "3 �Է�\n";
		break;

	default:
		cout << "1, 2, 3 �̿��� �� �Է�\n";
		break;
	}
	cout << "switch ���� ��\n";

	int i = 0;
	while (true) {
		cout << i << endl;
		if (i > 10)
			break;
		i++;
	}
	cout << "switch ���� ��\n";

	//continue;�� �Ʒ� ���� �ڵ� �������� �ʰ� �ٷ� ���� �ݺ� �����ϰ� ��.
}