#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

// basics:

	/*
	int num{ 10 };
	cout << "Value of num is: " << num << endl;
	cout << "sizeOf num is: " << sizeof num << endl;
	cout << "The address of num is: " << &num << endl;

	int* p;
	//cout << "\nValue of p is: " << p << endl;
	cout << "The address of p is: " << &p << endl;
	cout << "The sizeOf p is: " << sizeof p << endl;


	p = nullptr;
	cout << "\nValue of p is: " << p << endl;
	*/

	/*
	// all have the same size in memory
	int* p1{ nullptr };
	double* p2{ nullptr };
	unsigned long long* p3{ nullptr };
	vector<string>* p4{ nullptr };
	string* p5{ nullptr };
	*/

	/*
	int score{ 10 };
	double highTemp{ 100.7 };

	int* score_ptr{ nullptr };

	score_ptr = &score;

	cout << "The value of score is: " << score << endl;
	cout << "The address of score is: " << &score << endl;
	cout << "Value of score_ptr isL " << score_ptr << endl;

	score_ptr = &highTemp; // error, can't convert a pointer of one type to a pointer of another type despite them just being pointers
	*/



// dereferencing (getting the value behind a pointer)
	/*
	int score{ 100 };
	int* score_ptr{ &score }; // pointer to the address of score

	cout << *score_ptr << endl; // get value behind score_ptr (dereference)

	*score_ptr = 200; // assign the adress of score_ptr the value of 200

	cout << *score_ptr << endl;
	cout << score << endl;
	*/

	/*
	double highTemp{ 100.7 };
	double lowTemp{ 37.4 };
	double* temp_ptr{ &highTemp };

	cout << *temp_ptr << endl;
	temp_ptr = &lowTemp;
	cout << *temp_ptr << endl;
	*/
	
	/*
	vector<string> stooges{ "Larry","Moe","Curly" };
	vector<string>* vector_ptr{ nullptr };

	vector_ptr = &stooges;

	cout << "First stooge: " << (*vector_ptr).at(0) << endl; // Larry
	
	cout << "Stooges: ";

	for (auto stooge : *vector_ptr) {
		cout << stooge << " ";
	}
	cout << endl << endl;
	*/


// Dynamic Memory
	/*
	int* int_ptr{ nullptr };
	int_ptr = new int; // allocates memory on the heap
	cout << int_ptr << endl;
	delete int_ptr; // de allocate memory to prevent memory leak

	size_t size(0);
	double* temp_ptr{ nullptr };

	cout << "How many temps? ";
	cin >> size;
	temp_ptr = new double[size];

	delete[] temp_ptr;

	cout << endl;
	*/

	// arrays and pointers
	/*
	int scores[] { 100,95,89 };

	cout << "Value of scores: " << scores << endl;

	// since the name of an array is already an address, you don't need a & to get it
	int* score_ptr{ scores }; // assigns the (memory location) value of the first element of scores.
	cout << "Value of score_ptr: " << score_ptr << endl;

	cout << "\nArray subscript notation -----------------------------------------------" << endl;
	cout << scores[0] << endl; // takes memory location and adds the memory value of one integer (because that's the type of storage it is) and adds it 0 times
	cout << scores[1] << endl; // adds it 1 time (so + 4 bytes)
	cout << scores[2] << endl; // adds it 2 times (so + 8 bytes)

	cout << "\nPointer subscript notation -----------------------------------------------" << endl;
	cout << score_ptr[0] << endl; // takes memory location and adds the memory value (4 bytes) of one integer (because that's the type of storage it is) and adds it 0 times
	cout << score_ptr[1] << endl; // adds it 1 time (so + 4 bytes)
	cout << score_ptr[2] << endl; // adds it 2 times (so + 8 bytes)

	// this is much the same way
	cout << "\nPointer offset notation -----------------------------------------------" << endl;
	cout << *score_ptr << endl;
	cout << *(score_ptr + 1) << endl; // get memory location and add the storage value of 1 int
	cout << *(score_ptr + 2) << endl; // add storage value of 2 ints and then get what that memory address is pointing to

	cout << "\nArray offset notation -----------------------------------------------" << endl;
	cout << *scores << endl; // get the first memory location of the array
	cout << *(scores + 1) << endl; // get memory location and add the storage value of 1 int
	cout << *(scores + 2) << endl; // add storage value of 2 ints and then get what that memory address is pointing to
	*/

	// pointer arithmetic
	/*
	int scores[]{ 100,95,89,68,-1 }; // -1 is a sentinel value that marks the end of our array
	int* score_ptr{ scores };

	while (*score_ptr != -1) {
		cout << *score_ptr << endl;
		score_ptr++; // increment by whatever it is pointing to (in terms of memory size)
	};

	cout << "\n-------------------------------" << endl;
	score_ptr = scores;

	while (*score_ptr != -1) {
		cout << *score_ptr++ << endl; // dereferences pointer (get actual value of what it is pointing to) and THEN increments it
	};


	cout << "\n-------------------------------" << endl;
	string s1{ "Frank" };
	string s2{ "Frank" };
	string s3{ "James" };

	string *p1{&s1};
	string *p2{&s2};
	string *p3{&s1};

	cout << boolalpha;
	cout << p1 << " == " << p2 << ": " << (p1 == p2) << endl; // compares point addresses, not there values
	cout << p1 << " == " << p3 << ": " << (p1 == p3) << endl; // compares point addresses, not there values

	cout << *p1 << " == " << *p2 << ": " << (*p1 == *p2) << endl; // actual values
	cout << *p1 << " == " << *p3 << ": " << (*p1 == *p3) << endl;


	cout << "\n-------------------------------" << endl;
	char name[]{ "Frank" };

	char* char_ptr1{ nullptr };
	char* char_ptr2{ nullptr };

	char_ptr1 = &name[0];
	char_ptr2 = &name[3];

	cout << "In the string " << name << ", " << *char_ptr2 << " is " << (char_ptr2 - char_ptr1) << " characters away from " << *char_ptr1 << endl;
	*/

	// const and pointer

	return 0;
}