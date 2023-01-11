#include <iostream>

using namespace std;

int main() {
    //c++ : 객체지향 프로그래밍
    /*
    컴파일 시간이 아닌 실행 시간에 어떠한 결정을 내릴 수 있음
    - 배열 생성
    재래적 절차적 프로그래밍 : 배열의 크기 미리 결정
    객체지향 프로그래밍: 배열의 크기를 실행 시간에 결정 (변수로 배열크기 지정 가능)
    */
    // 프로그램이 메모리를 대입한 공간 -> 주소 공간
   
    //포인터: 사용할 주소에 이름을 붙인다.
    //즉, 포인터는 포인터의 이름이 주소를 나타냄
    // 간접값 연산자, 간접 참조 연산자 *

    int a = 6;
    int* b; //c++ sytle
    //int *b; //c style

    b = &a;

    cout << "a의 값 " << a << endl;
    cout << "*b의 값 " << *b << endl;

    cout << "a의 주소 " << &a << endl;
    cout << "*b의 주소 " << b << endl;

    *b = *b + 1;
    
    cout << "이제 a의 값은 " << a << endl; // 7 출력
   

    return 0
}