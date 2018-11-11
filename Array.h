#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>
using std::cout;
using std::endl;

template< typename T > class array {
private:
	int size;

public:
	T *myarray;

	array(int s) {
		size = s;
		myarray = new T[size];
	}

	void setArray(int elem, T val) {
		myarray[elem] = val;
	}

	T getArray() {

	}

	void QuickSort() {}

	void MergeSort() {}

};

#endif
