#pragma once
#include <iostream>

const int MAX_SIZE = 100;

class Stack
{
private:
	int A[MAX_SIZE];

	int top;

public:

	/*    default class     */
	Stack();

	Stack(int key);

	/*   destructor      */
	~Stack();

	void Push(int key);

	int Top();

	void Pop();

	void PrintArray();

	bool IsEmpty();



};
