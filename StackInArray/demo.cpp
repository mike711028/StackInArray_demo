#include <iostream>
#include "stack.h"


int main()
{

	//  default without value  
	Stack A;
	// default with the first value
	Stack S(1);

	S.PrintArray();

	for (int i = 0; i < 11; i++)
	{
		S.Push(i);
	}


	




}