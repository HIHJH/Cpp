#include <iostream>
using namespace std;

int main() {

    //�� ǥ����
    //����, ����, ������ ������

    //���� || (or) : �ϳ��� '��'�̸� true�� ��ȯ
    //���� && (and) : ��� '��'�̸� true�� ��ȯ
    //������ ! : ǥ���� �ݴ�� ��ȯ

    cout << "���� �Է�";
    int age;
    cin >> age;

    if (age < 0 || age>100) {
        cout << "������\n";
    }
    else if (20 <= age && age <= 29) {
        cout << "����� 20��\n";
    }
    else {
        cout << "���̸� �� �𸣰ڽ��ϴ�.\n";
    }

    return 0;
}