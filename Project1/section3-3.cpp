#include <iostream>
#include <cstring>

using namespace std;

int main() {
    //����ü: �ٸ� ���������� ���Ǵ� �������� ����

    struct MyStruct
    {
        // ���
        string name;
        string position;
        int height;
        int weight;
    } B; //������ �Է�

    MyStruct A; //������ ��������ó�� ����ü ���
    A.name = "Son";
    A.position = "Striker";
    A.height = 183;
    A.weight = 77;
    /*
    �ʱ�ȭ ������ε� ǥ�� ����
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

    } //�� ���� 0���� ����
    cout << B.height << endl;

    //����ü�� �迭 ���� ����
    MyStruct C[2] = {
        {"A", "A", 1, 1},
        {"B", "B", 2, 2}
    };

    cout << C[0].height << endl;

    return 0
}