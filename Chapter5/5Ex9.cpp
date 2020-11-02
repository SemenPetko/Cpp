#include <iostream>
#include <vector>
class error {};
using namespace std;
int main()
{
	setlocale(LC_ALL, "Ru");
	double c = 0;
	cout << "Пожалуйста, введите несколько чисел, которые хотите просуммировать, после нажмите '12345': " << endl;
	vector<int>vec;
	vector<double>vec2;
	while (c != 12345) {

		cin >> c;
		vec.push_back(int(c));
	}
	cin.clear();

	try {
		int n, sum = 0;
		cout << "Пожалуйста, введите количество чисел, которые хотите просуммирвать: " << endl;

		cin >> n;
		if (n > vec.size()) throw error();
		for (int i = 0; i < n; ++i) {
			sum += vec[i];
		}
		cout << "Сумма " << n << " чисел равна " << sum;
		for (int i = 0; i < n - 1;i++) {
			vec2.push_back(vec[i + 1] - vec[i]);
		}
		cout << endl;
		cout << "Разность: ";
		for (auto q : vec2) {
			cout << q << " ";
		}
	}
	catch (error & err) {
		cout << "Вы ввели меньше чисел" << endl;
		return 1;
	}

}