#include <iostream>
using namespace std;

int main() {

	//�迭 ��� �ݺ���
	int a[5] = { 1, 3, 5, 7, 9 };

	for (int i = 0; i < 5; i++) {
		cout << a[i];
	}
	cout << "\n";

	for (int i : a) {
		cout << i;
	} // �迭 ������ ������ ���

	//��ø ���� : 2���� �迭
	int temp[3][5] =
	{
		{1, 2, 3, 4, 5},
		{11, 22, 33, 44, 55},
		{111, 222, 333, 444, 555}
	};

	for (int row = 0; row < 3; row++) {
		for (int col = 0; col < 5; col++) {
			cout << temp[row][col] << " " << endl;
		}
		cout << "\n";
	}

	return 0;
}