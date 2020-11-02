#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    double a, b, c, x1, x2;
    cout << "¬ведите значение a: ";
    cin >> a;
    cout << "¬ведите значение b: ";
    cin >> b;
    cout << "¬ведите значение c: ";
    cin >> c;
    if ((b * b - 4 * a * c) >= 0) 
    {
        x1 = (-1 * b + sqrt(b * b - 4 * a * c)) / (2 * a);
        cout << "ѕервый корень равен " << x1 << endl;
        x2 = (-1 * b - sqrt(b * b - 4 * a * c)) / (2 * a);
        cout << "¬торой корень равен " << x2 << endl;
    }
    else
    {
        cout << "ƒискриминант меньше 0, корней нет." << endl;
    }
}