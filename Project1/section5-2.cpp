#include <iostream>
using namespace std;

int main() {

    //논리 표현식
    //논리합, 논리곱, 논리부정 연산자

    //논리합 || (or) : 하나라도 '참'이면 true를 반환
    //논리곱 && (and) : 모두 '참'이면 true를 반환
    //논리부정 ! : 표현식 반대로 반환

    cout << "나이 입력";
    int age;
    cin >> age;

    if (age < 0 || age>100) {
        cout << "거짓말\n";
    }
    else if (20 <= age && age <= 29) {
        cout << "당신은 20대\n";
    }
    else {
        cout << "나이를 잘 모르겠습니다.\n";
    }

    return 0;
}