#include <iostream>
#include <cstring> //strlen() �Լ��� ����ϱ� ����

using namespace std;

int main() {
    //����� �Է�
    const int Size = 15;
    char name1[Size]; //����ִ� �迭
    char name2[Size] = "C++programing"; //���ڿ� ����� �ʱ�ȭ�� �迭

    cout << "�ȳ��ϼ���! ���� " << name2;
    cout << "�Դϴ�! ������ ��� �ǽó���?\n";
    cin >> name1;
    // cin: ������� �Է��� �����ϴ� �Լ� -> whitespace ���� ������ ���ڿ� �������� �ν�
    //cin.get(name1, Size); -> ���� �����Ͽ� ���ڿ� �ν� (=getline)
    cin.getline(name1, Size); 
    cout << "��, " << name1 << "��, ����� �̸��� ";
    cout << strlen(name1) << "���Դϴٸ�\n";
    cout << sizeof(name1) << "����Ʈ ũ���� �迭�� ����Ǿ����ϴ�. \n";
    cout << "�̸��� " << name1[0] << "�ڷ� �����ϴ±���.\n";
    name2[3] = '\0';
    cout << "�� �̸��� ó�� �� ���ڴ� ������ �����ϴ�: ";
    cout << name2 << endl;

    //string
    /*
    c��Ÿ�Ϸ� string ��ü �ʱ�ȭ ����
    cin�� ����Ͽ� Ű���� �Է� ���� ����
    cout ����Ͽ� string ��ü ���÷��� ����
    �迭 ǥ�� ����Ͽ� string ��ü�� ����Ǿ� �ִ� �������� ���ڵ鿡 ���� ����
    */
    char char1[20];
    char char2[20] = "jaguar";
    string str1; //������ �������� �ʾƵ� ��
    string str2 = "panda";
    //char1 = char2; //�迭�� ��°�� ���� �Ұ���
    str1 = str2; //string�� ����
    cout << str1[0] << endl;
    
    return 0;
}