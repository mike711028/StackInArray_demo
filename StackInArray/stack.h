#pragma once
#include <iostream>

const int MAX_SIZE = 100;

class Stack
{
private:
	int A[MAX_SIZE];

	int top;

public:

	Stack();

	//Stack(int key);

	~Stack();

	void Push(int key);

	int Top();

	void Pop();

	void PrintArray();

	bool IsEmpty();



};
