#pragma once
class Stack
{
	int* element;
	int length;
	int currentLength;

public:
	Stack() : length(0), currentLength(0), element(0){}
	void push(int x);
	void pop();
	int top();
	int size();
	void clear();
	bool empty();
};

