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

	vector<string> stooges{ "Larry","Moe","Curly" };
	vector<string>* vector_ptr{ nullptr };

	vector_ptr = &stooges;

	cout << "First stooge: " << (*vector_ptr).at(0) << endl; // Larry
	
	cout << "Stooges: ";

	for (auto stooge : *vector_ptr) {
		cout << stooge << " ";
	}
	cout << endl << endl;



	return 0;
}