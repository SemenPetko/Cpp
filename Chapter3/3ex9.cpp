#include <iostream>


using namespace std;
int main() {
    setlocale(LC_ALL, "ru");
    string num;
    cout << "Введите число от 0 до 4 английскими словами : ";
    cin >> num;


    if (num == "zero")
        cout << "Преоброзователь дал значние: 0" << endl;


    else
        if (num == "one")
            cout << "Преоброзователь дал значние: 1" << endl;

        else
            if (num == "two")
                cout << "Преоброзователь дал значние: 2" << endl;

            else
                if (num == "three")
                    cout << "Преоброзователь дал значние: 3" << endl;

                else
                    if (num == "four")
                        cout << "Преоброзователь дал значние: 4" << endl;
                    else
                        cout << "Я не знаю такого числа." << endl;

    

    
}