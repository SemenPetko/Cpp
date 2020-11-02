//Калькулятор
#include<iostream>;
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    char q;
    double a, b;
    char znak;
    cout << "\t\t\t\t\t\t\tКалькулятор\n\n\n";
    cout << "Введите любое выражение в виде суммы, делиния, вычитания, умножения двух чисел, например 5+2 \n\n";
start:
    cin >> a;
    cin >> znak;
    cin >> b;
        if (a + b && a - b && a / b && a * b) {

            switch (znak || q)
            {
            case '+':
                cout <<"Сумма " << a << " и " << b << " равна " << a + b << endl;
                break;
            case '-':
                cout << "Вычитание из " << a << " число " << b << " равно " << a - b << endl;
                break;
            case '*':
                cout << "Умножение " << a << " и " << b << " равно " << a * b << endl;
                break;
            case '/':
                cout <<"Деление " << a << " на " << b << " равно " << a / b << endl;
                break;
            case 'q':
                exit(0);
            }
        }
    goto start;
}