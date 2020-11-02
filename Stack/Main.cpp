#include<iostream>
#include "Stack.h"
#include <string>

using namespace std;
int main() 
{
	Stack a;
	string s;
	while (cin >> s) {
		if (s.find("exit") != -1) {
			cout << "bye";
			break;
		}
		if (s.find("push") != -1) {
			cout << "ok";
			int e;
			cin >> e;
			a.push(e);
			continue;
		}
		if (s.find("clear") != -1){
			cout << "ok";
			a.clear();
			continue;
		}
		if (s.find("size") != -1) {
			cout << a.size();
			continue;
		}
		if (s.find("back") != -1) {
			if (a.size() == 0)
				cout << "error";
			else {
				int x = a.top();
				cout << x;
			}
		}
		if (s.find("pop") != -1) {
			if (a.size() == 0)
				cout << "error";
			else {
				int x = a.top();
				a.pop();
				cout << x;
			}
		}

			
		}
		}
