#include"stack.h"

template < class T >
int main()
{
	int top;
	stack<T> first;
	top = first.set2(10);
	first.poptop2(top);

	for (T i = 0; i < 10; i++){
		top = first.add2(top, i, 10);
		first.list2(top);
	}

	for (T i = 0; i < 15; i++){
		first.poptop2(top);
		top = first.delete2(top);
		first.list2(top);
	}
	///////////////////////////////////////////////////
	top = first.set2(5);
	for (T i = 0; i < 10; i++){
		top = first.add2(top, i, 5);
		first.list2(top);
	}

	for (T i = 0; i < 10; i++){
		first.poptop2(top);
		top = first.delete2(top);
		first.list2(top);
	}
}
