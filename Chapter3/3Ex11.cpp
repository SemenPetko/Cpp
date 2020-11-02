#include<iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "ru");
    int one, five, tw, ten, fift;
    int sum;
    cout << "Сколько у вас одноцентовых монет? -";
    cin >> one;
    cout << "Сколько у вас пятицентовых монет? -";
    cin >> five;
    cout << "Сколько у вас десятицентовых монет? -";
    cin >> ten;
    cout << "Сколько у вас двадцатипятицентовых монет? -";
    cin >> tw;
    cout << "Сколько у вас пятидесятицентовых монет? -";
    cin >> fift;
    //for one
    {   if (one == 0)
        cout << "У вас нет одноцентовых монет." << endl;
    if (one == 1)
        cout << "У вас " << one << " одноцентовая монета." << endl;
    if (one == 2)
        cout << "У вас " << one << " одноцентовые монеты." << endl;
    if (one > 2)
        cout << "У вас " << one << " одноцентовых монет." << endl;

    //for five
    if (five == 0)
        cout << "У вас нет пятицентовых монет." << endl;
    if (five > 0)
        cout << "У вас " << five << " пятицентовых монет." << endl;
    //for ten
    if (ten == 0)
        cout << "У вас нет десятицентовых монет." << endl;
    if (ten > 0)
        cout << "У вас " << ten << " десятицентовых монет." << endl;
    //for tw
    if (tw == 0)
        cout << "У вас нет двадцатипятицентовых монет." << endl;
    if (tw > 0)
        cout << "У вас " << tw << " двадцатипятицентовых монет." << endl;
    //for fift
    if (fift == 0)
        cout << "У вас нет пятидесятицентовых монет." << endl;
    if (fift == 1)
        cout << "У вас " << fift << " пятидесятицентовая монета." << endl;
    if (fift > 0)
        cout << "У вас " << fift << " пятидесятицентовых монет." << endl;
}
    cout << "Общая стоимость всех ваших монет: " << (sum = one + five * 5 + ten * 10 + tw * 25 + fift * 50) / 100 << " доллара(ов) и " << (sum = one + five * 5 + ten * 10 + tw * 25 + fift * 50) % 100 << " центов(а).\n\n\n\n";
    
    

 }