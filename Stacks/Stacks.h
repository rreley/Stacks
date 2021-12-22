#include <iostream>
using namespace std;
class Stack {
public:
	Stack(int s);
	~Stack();
	int top();
	void push(int item);
	void pop();
	bool empty();
	bool full();
private:
	int *ary;
	int size;
	int index;
};
