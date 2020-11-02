#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "ru");
    int a;
    start:
    cout << "Введите любо целое число";
    cout  <<  "\n(при вводе дробного числа,\nбудет считать только его целую часть): ";
    cin >> a;
    if (a % 2 == 0) {
        cout << "Число " << a << " является четным." << endl;
    }
    else {
        cout << "Число " << a << " является нечетным." << endl;
    }
    
 }