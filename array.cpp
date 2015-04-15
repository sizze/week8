#include"stack.h"

template < class T >
int stack <T>::set2(int size){

	stack2 = (int*)malloc(size*sizeof(int));

	return -1;
}

template < class T >
int stack <T>::delete2(int top) {
	int t = top;
	if (isEmpty2(t)) {
		cout << "\nEmpty!!\n";
		return t;
	}
	return --t;
}


template < class T >
int stack <T>::isEmpty2(int top) {
	return (top == -1);
}

template < class T >
int stack <T>::add2(int top, T in1, int size) {
	int t = top;

	if (t >= size - 1) {
		cout << "\nFull!!";
		return t;
	}

	stack2[++t] = in1;

	return t;
}


template < class T >
void stack <T>::list2(int top) {
	int t = top;
	printf("\n");
	while (!isEmpty2(t)) {
		cout << " --> " << stack2[t];
		t--;
	}
	printf("NULL\n\n");
}


template < class T >
void stack <T>::poptop2(int top) {
	if (top >= 0){
		cout << "pop value = %d\n" << stack2[top];
	}
}