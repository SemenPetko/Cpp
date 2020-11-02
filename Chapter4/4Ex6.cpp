#include <iostream>
#include <vector>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int num;
	string ch;
	cout << "Введи чсило цифрой от 0 до 9 включительно: ";
	cin >> num;
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
		cout << word[num] << "\n\n\n";
		cout << "Введи число от 0 до 9 включительно словами: ";
		cin >> ch;
			for (int i = 0; i < 10; ++i)
				if (ch == word[i])
				cout << i <<endl;



}
