#include <iostream>
using namespace std;

int main() {

	//while문, do while문

	string str = "Panda";
	int i = 0;
	while (str[i] != '\0'){
		cout << str[i] << endl;
		i++;
	}
	// for문과 while문의 차이점
	// 1. while문 내부에는 관계 연산자없이 boolean 데이터 하나만으로 선언 가능
	// 2. for문은 카운터 값을 반복문 내부에서 초기화 가능

	int j = 0;
	do {
		cout << "while문 입니다.\n";
		j++;
	} while (j < 3);
	// do while문은 반복 1회 실행 후 조건 검사 -> 최소 1회 수행

	return 0;
}