#include <iostream>
#include <cstring> //strlen() 함수를 사용하기 위해

using namespace std;

int main() {
    //사용자 입력
    const int Size = 15;
    char name1[Size]; //비어있는 배열
    char name2[Size] = "C++programing"; //문자열 상수로 초기화된 배열

    cout << "안녕하세요! 저는 " << name2;
    cout << "입니다! 성함이 어떻게 되시나요?\n";
    cin >> name1;
    // cin: 사용자의 입력을 저장하는 함수 -> whitespace 공백 만나면 문자열 끝남으로 인식
    //cin.get(name1, Size); -> 공백 포함하여 문자열 인식 (=getline)
    cin.getline(name1, Size); 
    cout << "음, " << name1 << "씨, 당신의 이름은 ";
    cout << strlen(name1) << "자입니다만\n";
    cout << sizeof(name1) << "바이트 크기의 배열에 저장되었습니다. \n";
    cout << "이름이 " << name1[0] << "자로 시작하는군요.\n";
    name2[3] = '\0';
    cout << "제 이름의 처음 세 문자는 다음과 같습니다: ";
    cout << name2 << endl;

    //string
    /*
    c스타일로 string 객체 초기화 가능
    cin을 사용하여 키보드 입력 저장 가능
    cout 사용하여 string 객체 디스플레이 가능
    배열 표기 사용하여 string 객체에 저장되어 있는 개별적인 문자들에 접근 가능
    */
    char char1[20];
    char char2[20] = "jaguar";
    string str1; //사이즈 지정하지 않아도 됨
    string str2 = "panda";
    //char1 = char2; //배열은 통째로 대입 불가능
    str1 = str2; //string은 가능
    cout << str1[0] << endl;
    
    return 0;
}