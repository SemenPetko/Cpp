#include<iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "ru");
    int one, five, tw, ten, fift;
    int sum;
    cout << "������� � ��� ������������ �����? -";
    cin >> one;
    cout << "������� � ��� ������������ �����? -";
    cin >> five;
    cout << "������� � ��� �������������� �����? -";
    cin >> ten;
    cout << "������� � ��� �������������������� �����? -";
    cin >> tw;
    cout << "������� � ��� ������������������ �����? -";
    cin >> fift;
    //for one
    {   if (one == 0)
        cout << "� ��� ��� ������������ �����." << endl;
    if (one == 1)
        cout << "� ��� " << one << " ������������ ������." << endl;
    if (one == 2)
        cout << "� ��� " << one << " ������������ ������." << endl;
    if (one > 2)
        cout << "� ��� " << one << " ������������ �����." << endl;

    //for five
    if (five == 0)
        cout << "� ��� ��� ������������ �����." << endl;
    if (five > 0)
        cout << "� ��� " << five << " ������������ �����." << endl;
    //for ten
    if (ten == 0)
        cout << "� ��� ��� �������������� �����." << endl;
    if (ten > 0)
        cout << "� ��� " << ten << " �������������� �����." << endl;
    //for tw
    if (tw == 0)
        cout << "� ��� ��� �������������������� �����." << endl;
    if (tw > 0)
        cout << "� ��� " << tw << " �������������������� �����." << endl;
    //for fift
    if (fift == 0)
        cout << "� ��� ��� ������������������ �����." << endl;
    if (fift == 1)
        cout << "� ��� " << fift << " ������������������ ������." << endl;
    if (fift > 0)
        cout << "� ��� " << fift << " ������������������ �����." << endl;
}
    cout << "����� ��������� ���� ����� �����: " << (sum = one + five * 5 + ten * 10 + tw * 25 + fift * 50) / 100 << " �������(��) � " << (sum = one + five * 5 + ten * 10 + tw * 25 + fift * 50) % 100 << " ������(�).\n\n\n\n";
    
    

 }