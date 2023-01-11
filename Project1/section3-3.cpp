#include <iostream>
#include <cstring>

using namespace std;

int main() {
    //구조체: 다른 데이터형이 허용되는 데이터의 집합

    struct MyStruct
    {
        // 멤버
        string name;
        string position;
        int height;
        int weight;
    } B; //변수명 입력

    MyStruct A; //변수의 데이터형처럼 구조체 사용
    A.name = "Son";
    A.position = "Striker";
    A.height = 183;
    A.weight = 77;
    /*
    초기화 방식으로도 표현 가능
    MyStruct A = {
        "Son",
        "Striker",
        183,
        77
    }
    */
    cout << A.name << endl;
    cout << A.position << endl;
    cout << A.height << endl;
    cout << A.weight << endl;

    B = {

    } //빈 값은 0으로 저장
    cout << B.height << endl;

    //구조체로 배열 선언 가능
    MyStruct C[2] = {
        {"A", "A", 1, 1},
        {"B", "B", 2, 2}
    };

    cout << C[0].height << endl;

    return 0
}