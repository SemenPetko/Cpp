#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    double a, b, c, x1, x2;
    cout << "������� �������� a: ";
    cin >> a;
    cout << "������� �������� b: ";
    cin >> b;
    cout << "������� �������� c: ";
    cin >> c;
    if ((b * b - 4 * a * c) >= 0) 
    {
        x1 = (-1 * b + sqrt(b * b - 4 * a * c)) / (2 * a);
        cout << "������ ������ ����� " << x1 << endl;
        x2 = (-1 * b - sqrt(b * b - 4 * a * c)) / (2 * a);
        cout << "������ ������ ����� " << x2 << endl;
    }
    else
    {
        cout << "������������ ������ 0, ������ ���." << endl;
    }
}