#include <iostream>
#define SIZE 20

using namespace std;

struct MyStruct
{
    char name[20];
    int age;
};


int main() {

    char animal[SIZE];
    char* ps;

    cout << "���� �̸��� �Է��Ͻʽÿ�.\n";
    cin >> animal;

    ps = new char[strlen(animal) + 1]; //���ڸ� �����ϱ� ����� ���� Ȯ��
    strcpy(ps, animal); //animal�� ���� ps�� ����

    cout << "�Է��Ͻ� ���� �̸��� �����Ͽ����ϴ�." << endl;
    cout << "�Է��Ͻ� ���� �̸��� " << animal << "�̰�, �� �ּҴ� " << (int*)animal << " �Դϴ�." << endl;
    cout << "����� ���� �̸��� " << ps << "�̰�, �� �ּҴ� " << (int*)ps << " �Դϴ�." << endl;

    delete[] ps;

    //���� ����ü ����
    //temp* ps = new temp;
    //���� ����ü�� ��� �����ڴ� '->'

    MyStruct* temp = new MyStruct;

    cout << "����� �̸��� �Է��Ͻʽÿ�.\n";
    cin >> temp->name;

    cout << "����� ���̸� �Է��Ͻʽÿ�.\n";
    cin >> (*temp).age; // ��������� '->' ��� '.'�� ����ϴ� ���

    cout << "�ȳ��ϼ���! " << temp->name << "��!\n";
    cout << "����� " << temp->age << "�� �̱���!\n";

    delete temp;
   
    return 0;
}