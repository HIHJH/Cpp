#include <iostream>

using namespace std;

int main() {
    //new 연산자
    /*
    어떤 데이터형을 원하는지 new 연산자에게 알려주면,
    new 연산자는 그에 알맞은 크기의 메모리 블록을
    찾아내고 그 블록의 주소를 리턴
    */

    int a;
    int* b = &a; // b, &a로 접근 가능

    int* pointer = new int; // pointer로만 접근 가능, pointer: 데이터의 객체를 지시

    //delete 연산자
    /*
    사용한 메모리를 다시 메모리 폴로 환수
    환수된 메모리는 프로그램의 다른 부분이 다시 사용
    */

    int* ps = new int;
    //메모리 사용
    delete ps;
    //메모리 환수
    
    /*
    1. new로 대입하지 않은 메모리는 delete로 해제할 수 X
    2. 같은 메모리 블록을 연달아 두 번 delete로 해제할 수 X
    3. new[]로 메모리를 대입할 경우 delete[]로 해제
    4. 대괄호 사용하지 않았다면, delete도 대괄호 사용 X
    */
    

    double* p3 = new double[3]; // double형 데이터 3개를 저장할 수 있는 공간 대입
    p3[0] = 0.2; // p3를 배열 이름처럼 취급
    p3[1] = 0.5;
    p3[2] = 0.8;

    cout << "p3[1] is " << p3[1] << ".\n"; //0.5

    p3 = p3 + 1; // 포인터 증가
    // 여기서 +1 은 double형 데이터 공간 1개를 의미

    cout << "Now p3[0] is " << p3[0] << " and "; //0.5
    cout << "p3[1] is " << p3[1] << "\n."; //0.8

    p3 = p3 - 1; // 다시 시작 위치 지시
    delete[] p3; // 배열 메모리 해제

    return 0;
}