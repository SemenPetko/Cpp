#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    for (int i = 1; i < 20; ++i) {
        if (i % 2 != 0) {
            continue;
        }
        cout << i;
}



}