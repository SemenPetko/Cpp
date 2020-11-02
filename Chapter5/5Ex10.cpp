#include <iostream>
#include <vector>
using namespace std;

class error {};
vector<int>vec = { 1,1 };
int main()
{
    setlocale(LC_ALL, "Ru");
    try {
        int n;
        cin >> n;
        if (n < 0)throw error();
        for (int i = 0; i < n; ++i) {
            vec.push_back(vec[i] + vec[i + 1]);
        }

        for (int i = 0; i < n; ++i) {
            cout << vec[i] << " ";
        }
    }
    catch (error & err) {
        cout << "Число меньше нуля!!" << endl;
        return 1;
    }

}