#include <iostream>
using namespace std;

int main() {

	//while��, do while��

	string str = "Panda";
	int i = 0;
	while (str[i] != '\0'){
		cout << str[i] << endl;
		i++;
	}
	// for���� while���� ������
	// 1. while�� ���ο��� ���� �����ھ��� boolean ������ �ϳ������� ���� ����
	// 2. for���� ī���� ���� �ݺ��� ���ο��� �ʱ�ȭ ����

	int j = 0;
	do {
		cout << "while�� �Դϴ�.\n";
		j++;
	} while (j < 3);
	// do while���� �ݺ� 1ȸ ���� �� ���� �˻� -> �ּ� 1ȸ ����

	return 0;
}