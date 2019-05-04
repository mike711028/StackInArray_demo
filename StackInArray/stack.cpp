#include "stack.h"


Stack::Stack()
{
	// for empty list, set top = -1;
	top = -1;
}

Stack::Stack(int key)
{
	top = -1;
	//top++ : 後做 再做運算式, 判斷式
	// ++top : 先做 再做運算式, 判斷式
	A[++top] = key;
}

Stack::~Stack()
{

}