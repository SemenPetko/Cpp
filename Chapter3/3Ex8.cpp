#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "ru");
    int a;
    start:
    cout << "������� ���� ����� �����";
    cout  <<  "\n(��� ����� �������� �����,\n����� ������� ������ ��� ����� �����): ";
    cin >> a;
    if (a % 2 == 0) {
        cout << "����� " << a << " �������� ������." << endl;
    }
    else {
        cout << "����� " << a << " �������� ��������." << endl;
    }
    
 }