#include <vector>
#include <iostream>

using namespace std;
int main(){
    setlocale(LC_ALL, "Russian");
    int a,n,c=0,moda;
    vector<int>s;
    cout << "Введите количество цифр" << endl;;
    cin >> n; 
    for(int i=0;i<n;i++) {
        cin >> a;               //Заполняем вектор 
        s.push_back(a);
    }
    int max = s[0], min = s[0];
    for (int i = 0; i < n; i++) {
        if (s[i] < min)min = s[i];
        if (s[i] > max)max = s[i]; //Минимальное, максимальное...
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
        cout << "Число " << moda << " встречается следующее количество раз: " << c << endl;
        c = 0;
    }
    cout << endl;
    cout << "Минимальное: " << min << " Максимальное: " << max<<endl;
}
