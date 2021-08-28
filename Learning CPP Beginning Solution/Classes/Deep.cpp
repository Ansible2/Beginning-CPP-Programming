#include <iostream>
#include "Deep.h"

using std::cout;
using std::endl;

Deep::Deep(int d) {
	data = new int;
	*data = d; // copies the raw pointer of whatever d is
}

Deep::Deep(const Deep& source)
	: Deep{*source.data} // efficient means of intializing the value of copy
{
	/*
	int dataCopy = *source.data;
	data = &dataCopy;
	*/
	cout << "(deep) Copy constructor" << endl;
}

Deep::~Deep() {
	delete data;
	cout << "Deconstructor freed pointer data" << endl;
}