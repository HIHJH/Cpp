#include <iostream>

int main() {
	//공용체(union)
	//서로 다른 데이터형을 한 번에 한 가지만 보관할 수 있음
	//메모리 절약 가능

	union MyUnion
	{
		int intVal;
		long longVal;
		float floatVal;
	};

	MyUnion test;
	test.intVal = 3;
	std::cout << test.intVal << std::endl; //3
	test.longVal = 33;
	std::cout << test.intVal << std::endl; //33
	std::cout << test.longVal << std::endl; //33
	test.floatVal = 3.3;
	std::cout << test.intVal << std::endl; //1079194419
	std::cout << test.longVal << std::endl; //1079194419
	std::cout << test.floatVal << std::endl; //3.3

	//열거체(enum)
	//기호 상수를 만드는 것에 대한 또다른 방법

	enum spectrum { red, orange, yellow, green, blue, violet, indigo, ultraviolet };
	/*
	1. spectrum을 새로운 데이터형 이름으로 만듦
	2. red, orange.. 0에서부터 7까지 정수 값을 각각 나타내는 기호 상수로 만듦
	 >> 정수로 초기화도 가능
	*/

	spectrum a = orange; //1
	
	int b;
	b = blue;
	b = blue + 3; //7
	
	return 0;
}