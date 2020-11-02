#include <vector>
#include <iostream>

using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    string a, moda;
    int c=0,n,k;
    string p;
    vector<string>s;
    cout << "Введите количество строк..." << endl;;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;               //Заполняем вектор 
        s.push_back(a);
    }
    string max = s[0], min = s[0];
    int max1, min1;
    for (int i = 0; i < n; i++) {
        p = s[i];
        if (p[0] >= '0' && p[0] <= '9') {
            if (atoi(p.c_str()) < atoi(min.c_str()))min = s[i];
            if (atoi(p.c_str()) > atoi(max.c_str()))max = s[i];
        }
        /*if (s[i] < min)min = s[i];
        if (s[i] > max)max = s[i];*/ //Минимальное, максимальное...
    }
    for (int i = 0; i < s.size(); i++) {
        moda = s[i];
        for (int j = 0; j < s.size(); j++) {
            if (moda == s[j]) {
                s.erase(s.begin() + j);
                j--;
                c++;
            }
        }
        if (n != s.size()) {
            i--;
            n = s.size();
        }
        cout << endl;
        cout << "Символ " << moda << " встречается следующее количество раз: " << c << endl;
        c = 0;
    }
    cout << endl;
    cout << "Минимальное: " << min << " Максимальное: " << max << endl;
}