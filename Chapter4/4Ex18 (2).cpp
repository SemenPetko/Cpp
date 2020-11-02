
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    //ax^2+bx+c=0
    double a, b, c;
    double x1, x2;
    double d;
    cout << "Введите коэффициенты для решения следующего уравнения ax^2+bx+c=0 " << endl;
    cin >> a >> b >> c;
    d = (b * b - 4 * a * c);
    if (d < 0)cout << "Уравнение не имеет действительных решений" << endl;
    else{
        if (d == 0)cout << "Уравнение имеет один корень: "<< endl <<"x = " << (-b / (2 * a)) <<endl;
        if (d>0){
    x1 = (-b + sqrt(d)) / (2 * a);
    x2 = (-b - sqrt(d)) / (2 * a);
    cout << "Уравнение имеет два корня: " << endl << "x1 = " << x1 << endl << "x2 = " << x2 << endl;
    }
    }
}

