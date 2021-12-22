#include <iostream>
using namespace std;
#include "Stacks.h"
int main()
{
	Stack s(2);
	if (!s.full())
		s.push(1);
	if (!s.full())
		s.push(2);
	if (!s.full())
		s.push(3);
	if (!s.empty())
		cout << s.top() << endl;
	else
		cout << "Stack is empty!\n";
	if (!s.empty())
		s.pop();
	if (!s.empty())
		cout << s.top() << endl;
	else
		cout << "Stack is empty!\n";
	if (!s.empty())
		s.pop();
	if (!s.empty())
		cout << s.top() << endl;
	else
		cout << "Stack is empty!\n";
	system("PAUSE");
	return 0;
}