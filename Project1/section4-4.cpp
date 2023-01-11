#include <iostream>
using namespace std;

int main() {

	//배열 기반 반복문
	int a[5] = { 1, 3, 5, 7, 9 };

	for (int i = 0; i < 5; i++) {
		cout << a[i];
	}
	cout << "\n";

	for (int i : a) {
		cout << i;
	} // 배열 사이즈 끝까지 출력

	//중첩 루프 : 2차원 배열
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