#include <iostream>

int main() {
	//����ü(union)
	//���� �ٸ� ���������� �� ���� �� ������ ������ �� ����
	//�޸� ���� ����

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

	//����ü(enum)
	//��ȣ ����� ����� �Ϳ� ���� �Ǵٸ� ���

	enum spectrum { red, orange, yellow, green, blue, violet, indigo, ultraviolet };
	/*
	1. spectrum�� ���ο� �������� �̸����� ����
	2. red, orange.. 0�������� 7���� ���� ���� ���� ��Ÿ���� ��ȣ ����� ����
	 >> ������ �ʱ�ȭ�� ����
	*/

	spectrum a = orange; //1
	
	int b;
	b = blue;
	b = blue + 3; //7
	
	return 0;
}