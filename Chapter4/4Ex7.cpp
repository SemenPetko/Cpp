
//�����������
#include<iostream>;
#include<vector>;
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    double a, b;
    string first, second;
       char znak;
    cout << "\t\t\t\t\t\t\t�����������\n\n\n";
    cout << "������� ����� ��������� � ���� �����, �������, ���������, ��������� ���� �����, �������� 5'enter' + 'enter' 2\n*����� ����� ������� �� 0 �� 9* \n\n";
    cin >> first >> znak >> second;
   
    
	vector<string> word(10);
	word[0] = "zero";
	word[1] = "one";
	word[2] = "two";
	word[3] = "three";
	word[4] = "four";
	word[5] = "fife";
	word[6] = "six";
	word[7] = "seve";
	word[8] = "eight";
	word[9] = "nine";

    for (int i = 0; i < 10; i++) {
        if (first == word[i]) {
            a = i; break;
        }
        else a = atoi(first.c_str());
    }

    for (int i = 0; i < 10; i++) {
        if (second == word[i]) {
            b = i; break;
        }
        else b = atoi(second.c_str());
    }
	
    if (znak == '+')
        cout << "����� " << a << " � " << b << " ����� " << a + b;
    else  if (znak == '-')
        cout << " �������� " << a << " � " << b << " ����� " << a - b;
    else if (znak == '*')
        cout << "��������� " << a << " � " << b << " ����� " << a * b;
    else if (znak == '/')
        cout << "��������� " << a << " � " << b << " ����� " << a / b;
}