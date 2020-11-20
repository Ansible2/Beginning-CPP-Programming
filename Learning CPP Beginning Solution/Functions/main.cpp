#include <ioStream>
#include <cstdlib>
#include <ctime>
#include <array>

using namespace std;

// prototyping
	/*
		if functions are defined out of order, the compiler sees calls for functions,
		but not the definitions. Becausue of this, you can prototype or declare the function
		(its return type, name, and params)	before actually defining its body/execution.

		Example:

			declare:
			int myFunction_1(int, int b); // the compiler just needs the TYPES of the params, not the var name

			int main(){
				_addedTogether = myFunction(1,1);
			};

			define:
			int myFunction(int a, int b){
				return (a + b);
			};
	*/

	// params
	/*
		CPP has a pass-by-value with its params (similar to SQF in some cases such as objects, groups, arrays) by default.
		meaning that it will get the value of the input param and copy it to a new variable or address in memory (so doubling storage)

		It also means that changes to the made to the variable inside the function are to the copy of the variable and not
		directly to the input variable. (i'd imagine this is why pointers exist)

		- Actual parameters: the input params when a function is called (whatever values you would use for int a and int b) above, also called arguments.
		- Formal parameters: the params as they are within the function (the stuff that actually gets changed).


		// Default arguments:

			int myFunction(int a = 1, int b = 0){
				//some code here
			};
			OR
			// prototype declare
			int myFunction(int a = 1, int b = 0);
			// and defined
			myFunction(int a, int b){
				//some code here, int b will still default to 0
			};


			The only caveat to default args is that is that once you define a default, every proceeding arg needs a default,
			they all must have a default.
			int myFunction(int a = 1, int b = 0); // legal
			int myFunction(int a, int b = 0); // legal
			int myFunction(int a = 0, int b); // illegal


			PASS BY REF
			To pass by ref (get the actual variable to make direct changes), simply add the address (&) sign to the param in function declaration:
			
			void changeNumTo2(int& a){
				a = 2;
			};
			int main(){
				int myNum{1};
				cout << myNum << endl;
				
				changeNumTo2(myNum);
				cout << myNum;
			};
	*/

	// Overloading
	/*
		Overloading is the idea of having one function that can produce several results.
		In CPP, this can be accomplished by declaring a function twice but with different input params.

		This, however, does not account for return types, so you must use params to distinguish between which
		version of the function you want to run.

		Example:
			int addNumbers(int a,int b){
				return (a + b);
			};
			double addNumbers(double a, double b){
				return (a + b);
			};


			int main(){
				addNumbers(2,2); // returns int
				addNumbers(2.0,2.0); // returns double
			};
	*/

	// variable scopes
/*
	Scopes are fairly straight forward and what you're use to. 
	Globals are defined outside of the main function.

	One thing of note is that "static" command for local vars.
	It will init a variable once and maintain its value between calls:

	// every time this function is called, num is saved at the end
	// first time, num becomes 1
	// second, num becomes 2
	// and so on
	void myStaticNum {
		static int num {};
		num += 1;
	}
*/

	// inline functions
/*
	The inline keyword can be used for defineing quick inline functions to use.

	// Example:
	inline void printPie(){
		cout << "pie" << endl;
	};

	However, most compilers will already automatically do this.
*/


void printArray(const int myArray[], size_t sizeOfMyArray);
void setArray(int myArray[], size_t sizeOfMyArray, int myValueToSet);

void printArray(const int myArray[], size_t sizeOfMyArray) {
	for (size_t i{ 0 }; i < sizeOfMyArray; ++i) {
		cout << myArray[i] << " ";
	}
	cout << endl;
};
void setArray(int myArray[], size_t sizeOfMyArray, int myValueToSet) {
	for (size_t i{ 0 }; i < sizeOfMyArray; ++i) {
		myArray[i] = myValueToSet;
	}
	cout << endl;
};


int main() {
	// random numbers
/*
	int randomNumber{};

	size_t count{ 10 };
	int min{ 1 };
	int max{ 6 };

	cout << "RAND_MAX on my system is: " << RAND_MAX << endl;
	long currentTime = static_cast<long>(time(nullptr));
	cout << "current time is: " << currentTime << endl;
	srand(currentTime);

	for (size_t i{ 1 }; i <= count; ++i) {
		randomNumber = rand() % (max + min);
		cout << randomNumber << endl;
	}
*/

	// Arrays
/*
	Arrays are by default NOT pass-by-reference. Since their objects are just a reference to the first
	value's point in memory, you can actually modify their contents inside a function. Secondly, you can't
	get the size of an array as it does not store that information in its name.

	You can use "const" on the param definition to avoid modifacations of the array:
		
		printArray(const int myArray[]); // myArray can't be changed
*/
/*
	int myScores[]{ 100,99,98,90,86,84 };

	printArray(myScores, 6);
	setArray(myScores, 6, 0);
	printArray(myScores, 6);
*/


	return 0;
};
