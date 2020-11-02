#include "Stack.h"


void Stack::push(int x) {
	if (currentLength < length) {
		element[currentLength] = x;
		currentLength++;
		return;
	}
	if (currentLength == length) {
		int* tmp = new int[length + 1];
		for (int i = 0;i < currentLength;i++) {
			tmp[i] = element[i];
		}
		tmp[currentLength] = x;
		delete[]element;
		length++;
		currentLength++;
		element = tmp;
		return;
	}
}
	void Stack::pop() {
		currentLength--;
	}
	int Stack::top() {
		return element[currentLength - 1];
	}

	int Stack::size() {
		return currentLength;
	}
	void Stack::clear() {
		delete[]element;
		length = 0;
		currentLength = 0;
		
	}
	/*bool Stack::empty() {

					
	}*/
