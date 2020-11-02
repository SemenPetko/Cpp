#include <iostream>
#include <vector>

using namespace std;

int main()

{

    int i;

    int n = 100;

    vector <int> primes{ 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97 };


    vector <int> v;

    for (i = 2; i <= n; i++) {

        if (i == 2 or i == 3 or i == 5 or i == 7) v.push_back(i);

        if (i % 2 != 0 and i % 3 != 0 and i % 5 != 0 and i % 7 != 0)v.push_back(i);

    }

    for (i = 0; i < v.size(); i++)

        cout << v[i] << " "; cout << endl;

    for (i = 0; i < primes.size(); i++)

        cout << primes[i] << " ";
}