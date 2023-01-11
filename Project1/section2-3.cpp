#include <iostream>
using namespace std;

int main() {
	//char: 작은 문자형 (거의 한 단어인 경우)
	int a = 77;
	char b = a; // M 출력
	b = 'a'; // a 출력

	// char형 변수에는 ""이 아니라 ''을 사용
	// null 문자 '\0' : 문자열이 끝났음을 알려준다
	// "" >> 명시적으로 null문자가 포함 => string과 관련

	cout << b << endl;

	//bool: 0(false) 혹은 1(true) -> 조건문에 사용
	bool c = 0;
	bool d = 1;
	bool e = 10;

	cout << c << d << e << endl; //011 출력
	
	return 0;
}