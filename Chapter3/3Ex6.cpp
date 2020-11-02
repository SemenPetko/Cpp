#include <iostream>
using namespace std;
 
int main() {
    setlocale(LC_ALL, "ru");
    int a, b, c;
    start:
    cout << "¬ведите любое целое число: ";
    cin >> a;
    cout << "¬ведите втрое любое целое число: ";
    cin >> b;
    cout << "¬ведите третье любое целое число: ";
    cin >> c;
    if (a > b&& b > c) {
        cout << c << ", " << b << ", " << a << endl;
    }
    if (a > b&& b < c && c < a) {
        cout << b << ", " << c << ", " << a << endl;
    }
    if (b > a && a > c) {
        cout << c << ", " << a << ", " << b << endl;
    }
    if (b > a && a < c && c < b) {
        cout << a << ", " << c << ", " << b << endl;
    }
    if (c > a && a < b) {
        cout << a << ", " << b << ", " << c << endl;
    }
    if (c > a && a > b) {
        cout << b << ", " << a << ", " << c << endl;
    }
    if (a == b && b > c) {
        cout << c << ", " << a << ", " << b << endl;
    }
    if (a == b && b < c) {
        cout << a << ", " << b << ", " << c << endl;
    }
    if (a == c && a > b) {
        cout << b << ", " << a << ", " << c << endl;
    }
    if (a == c && a < b) {
        cout << a << ", " << c << ", " << b << endl;
    }
    if (b == c&& a > c) {
        cout << b << ", " << c << ", " << a << endl;
    }
    if (b == c && a < c) {
        cout << a << ", " << b << ", " << c << endl;
    }
    if (b == c && a == c) {
        cout << "„исла равны." << endl;
    }
    goto start;
}