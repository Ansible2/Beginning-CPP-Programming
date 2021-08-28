#include <iostream>
#include "Shallow.h"

using std::cout;
using std::endl;

Shallow::Shallow(int d) {
	data = new int;
	*data = d; // copies the raw pointer of whatever d is
}

Shallow::Shallow(const Shallow& source)
	: data(source.data) {
	cout << "(shallow) Copy constructor" << endl;
}

Shallow::~Shallow() {
	delete data;
	cout << "Deconstructor freed pointer data" << endl;
}