#include "stack.h"


Stack::Stack()
{
	// for empty list, set top = -1;
	top = -1;
}

Stack::Stack(int key)
{
	top = -1;
	//top++ : �ᰵ �A���B�⦡, �P�_��
	// ++top : ���� �A���B�⦡, �P�_��
	A[++top] = key;
}

Stack::~Stack()
{

}