//�����������
#include<iostream>;
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    char q;
    double a, b;
    char znak;
    cout << "\t\t\t\t\t\t\t�����������\n\n\n";
    cout << "������� ����� ��������� � ���� �����, �������, ���������, ��������� ���� �����, �������� 5+2 \n\n";
start:
    cin >> a;
    cin >> znak;
    cin >> b;
        if (a + b && a - b && a / b && a * b) {

            switch (znak || q)
            {
            case '+':
                cout <<"����� " << a << " � " << b << " ����� " << a + b << endl;
                break;
            case '-':
                cout << "��������� �� " << a << " ����� " << b << " ����� " << a - b << endl;
                break;
            case '*':
                cout << "��������� " << a << " � " << b << " ����� " << a * b << endl;
                break;
            case '/':
                cout <<"������� " << a << " �� " << b << " ����� " << a / b << endl;
                break;
            case 'q':
                exit(0);
            }
        }
    goto start;
}