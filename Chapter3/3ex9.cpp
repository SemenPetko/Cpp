#include <iostream>


using namespace std;
int main() {
    setlocale(LC_ALL, "ru");
    string num;
    cout << "������� ����� �� 0 �� 4 ����������� ������� : ";
    cin >> num;


    if (num == "zero")
        cout << "��������������� ��� �������: 0" << endl;


    else
        if (num == "one")
            cout << "��������������� ��� �������: 1" << endl;

        else
            if (num == "two")
                cout << "��������������� ��� �������: 2" << endl;

            else
                if (num == "three")
                    cout << "��������������� ��� �������: 3" << endl;

                else
                    if (num == "four")
                        cout << "��������������� ��� �������: 4" << endl;
                    else
                        cout << "� �� ���� ������ �����." << endl;

    

    
}