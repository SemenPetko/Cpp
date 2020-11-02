#include <iostream>
#include <vector>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int j, i = 0;
    int n;
    cout << "Введите число " << endl;
    cin >> n;
    vector <int> primes = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199 };
    vector <bool> A(n + 1, true);

    for (i = 2; i * i <= n; i++) {
        if (A[i] == true)
            for (j = i * i; j <= n; j += i) //использован псведокод 
                A[j] = false;               //с википедии (Решето Эратосфена)
    }

    for (i = 2; i < A.size(); i++) {
        if (A[i] == true)cout << i << " ";
    }
    //for (i = 0; i < vec.size(); i++) cout << vec[i] << " ";
    cout << endl;
    for (i = 0; i < primes.size(); i++) cout << primes[i] << " ";
}
