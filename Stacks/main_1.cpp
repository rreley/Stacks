#include <iostream>
using namespace std;
#include "Stacks.h"

Stack::Stack(int s)
{
	ary = new int[s];
	size = s;
	index = -1;
}
Stack::~Stack()
{
}
int Stack::top()
{
	return ary[index];
}
void Stack::push(int item)
{
	index = index + 1;
	ary[index] = item;
}
void Stack::pop()
{
	index = index - 1;
}
bool Stack::empty()
{
	return (index == -1);
}
bool Stack::full()
{
	return (index == size - 1);
}