#include <iostream>

using namespace std;

class err1 {};
class err2 {};
class err3 {};


int main()
{
	setlocale(LC_ALL, "Ru");
	double a, b, c, x1, x2, d;

	try {
		cout << "Введите коэффициенты для решения  уравнения ax^2+bx+c=0 \n";
		cin >> a >> b >> c;
		d = (b * b - 4 * a * c);
		if (d < 0) throw err1();
		if (d == 0) throw err2();
		if (d > 0) throw err3();

	}
	catch (err1 & err) {
		cout << "Уравнение не имеет корней" << endl;
	}
	catch (err2 & err) {
		cout << "Уравнение имеет один корень: " << endl << "x = " << (-b / (2 * a)) << endl;
	}
	catch (err3 & err) {
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		cout << "Уравнение имеет два корня: " << endl << "x1 = " << x1 << endl << "x2 = " << x2 << endl;
	}
}
