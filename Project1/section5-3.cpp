#include <iostream>
using namespace std;

int main() {
	
	//switch 구문 -> break 구문 유의!

	int a;
	cin >> a;
	switch (a)
	{
	case 1:
		cout << "1 입력\n";
		break; //while 탈출

	case 2:
		cout << "2 입력\n";
		break;

	case 3:
		cout << "3 입력\n";
		break;

	default:
		cout << "1, 2, 3 이외의 값 입력\n";
		break;
	}
	cout << "switch 구문 끝\n";

	int i = 0;
	while (true) {
		cout << i << endl;
		if (i > 10)
			break;
		i++;
	}
	cout << "switch 구문 끝\n";

	//continue;는 아래 남은 코드 실행하지 않고 바로 다음 반복 진행하게 함.
}