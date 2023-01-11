#include <iostream>
using namespace std;

int main() {

	//증가 연산자, 감소 연산자
	int a = 10;
	int b = 10;

	cout << a << b << endl; // 10, 10
	cout << a++ << endl; // 10
	cout << ++b << endl; // 11
	cout << a << b << endl; // 11, 11

	//반복문
	for (int i = 0; i < 5; i++) {
		cout << i << "번째입니다." << endl; // 0~4
	}
	// i < 5는 '관계표현식' -> true, false로 반환
	// == 같다
	// != 같지 않다

	return 0;
}