#include <iostream>
#include <vector>
class error {};
using namespace std;
int main()
{
	setlocale(LC_ALL, "Ru");
	int c = 0;
	cout << "����������, ������� ��������� �����, ������� ������ ��������������, ����� ������� '12345': " << endl;
	vector<int>vec;
	while (c != 12345) {

		cin >> c;
		vec.push_back(int(c));
	}
	cin.clear();

	try {
		int n, sum = 0;
		cout << "����������, ������� ���������� �����, ������� ������ �������������: " << endl;

		cin >> n;
		if (n > vec.size()) throw error();
		for (int i = 0; i < n; ++i) {
			sum += vec[i];
		}
		cout << "����� " << n << " ����� ����� " << sum;
	}
	catch (error & err) {
		cout << "�� ����� ������ �����" << endl;
		return 1;
	}

}