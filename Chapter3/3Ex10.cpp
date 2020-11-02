#include <iostream>
using namespace std;


void main()
{
	setlocale(LC_ALL, "rus");
	double a, b;
	string c;

	cout << "Введите число: ";
	cin >> a, '\n';
	cout << "Введите второе число: ";
	cin >> b, '\n';
	cout << "Какое действие вы хотите совершить над переменными, которые ввели?" << '\n' << "выбирите из списка \n";
	cout << "<+>\t" << "<->\t" << "</>\t" << "<*>\t";
	cin >> c;
	if (c == "+") {
		cout << "Результат:" << a + b<< "\n\n\n";
	}
	else {
		if (c == "-") {
			cout << "Результат:" << a - b<< "\n\n\n";
		}
		else {
			if (c == "*")
				cout << "Результат:" << a * b<< "\n\n\n";
			else {
				if (c == "/")
					cout << "Результат:" << a / b << "\n\n\n";
			}
		}

	}
}