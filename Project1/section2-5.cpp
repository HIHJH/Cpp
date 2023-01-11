#include <iostream>
using namespace std;

int main() {
	/*
	산술연산자
	>> +, -, *, /, %
	% : 나머지 구함 >> 부동 소수점(실수)에서는 사용 불가
	*/

	int a = 10;
	int b = 3;
	int c = 5;

	int multiple = a / b * c;
	// c++도 기본 연산 순서에 따름

	//auto > 초기화 형태 사용시 자동으로 dataType 결정
	auto x = 0.0; // float
	auto y = 0; // int
	return 0;
}