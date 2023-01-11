#include <iostream> //전처리 지시자

/*
c++에서 함수를 사용하고자 한다면
반드시 그 함수의 원형을 미리 정의하여야 한다.
-> 전처리 지시자에 기본 함수 정의되어 있음
*/

using namespace std;
// ';'은 종결자의 역할
// using namespace std; 가 없다면
// 다른 함수들에 std::cout 처럼 std를 붙여주어야 한다.

int main() {
	//c++ 코드에는 반드시
	//main의 이름을 가지고 있는 함수가 있어야 한다.
	
	cout << "Hello, World!" << endl;
	//cout: 다음 내용을 콘솔창에 출력
	// << : 데이터의 방향 표시
	//endl: 줄 바꿈

	return 0;
}