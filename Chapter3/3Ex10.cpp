#include <iostream>
using namespace std;


void main()
{
	setlocale(LC_ALL, "rus");
	double a, b;
	string c;

	cout << "������� �����: ";
	cin >> a, '\n';
	cout << "������� ������ �����: ";
	cin >> b, '\n';
	cout << "����� �������� �� ������ ��������� ��� �����������, ������� �����?" << '\n' << "�������� �� ������ \n";
	cout << "<+>\t" << "<->\t" << "</>\t" << "<*>\t";
	cin >> c;
	if (c == "+") {
		cout << "���������:" << a + b<< "\n\n\n";
	}
	else {
		if (c == "-") {
			cout << "���������:" << a - b<< "\n\n\n";
		}
		else {
			if (c == "*")
				cout << "���������:" << a * b<< "\n\n\n";
			else {
				if (c == "/")
					cout << "���������:" << a / b << "\n\n\n";
			}
		}

	}
}