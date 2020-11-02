#include <iostream>
#include <vector>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int j, i = 0;
    int p;
    cout << "Введите число " << endl;
    cin >> p;
    int n=p*p+1; 
    vector <int> vec ;
    vector <bool> A(n+1 , true);

    for (i = 2; i * i <= n; i++) {
        if (A[i] == true)
            for (j = i * i; j <= n; j += i) //использован псведокод 
                A[j] = false;               //с википедии (Решето Эратосфена)
    }

    for (i = 2; i <= n; i++) {
        if (A[i] == true)vec.push_back(i);
    }
    for (i = 0; i < p; i++) {
        cout << vec[i]<<" ";
    }
  
    
}
