#include <iostream>
#include "stack.h"


int main()
{

	Stack S;

	S.Pop();

	for (int i = 0; i < 11; i++)
	{
		S.Push(i);
	}

	S.PrintArray();

	std::cout << "the top is " << S.Top() << std::endl;

	S.Push(100);

	S.PrintArray();

	S.Pop();

	S.PrintArray();


	




}