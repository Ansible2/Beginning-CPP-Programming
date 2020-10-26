#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

bool IsNotNegative99(int i) {
	return (i != -99);
}


void printNumbers(vector<int> myTempVector) {
	if (myTempVector.size() > 0) {
		cout << "[";
		for (int currVal : myTempVector) {
			cout << " " << currVal;
		}
		cout << " ]" << endl << endl;
	} else {
		cout << "[] - The List Is Empty" << endl << endl;
	}
};

vector<int> addNumber(vector<int> myTempVector) {
	cout << "Enter a new number: ";
	int newNumber{};
	cin >> newNumber;
	
	myTempVector.push_back(newNumber);
	cout << "\n" << newNumber << " was added" << endl << endl;

	return myTempVector;
}

void calculateAverage(vector<int> myTempVector) {
	
	int sum{};
	for (int currVal : myTempVector) {
		sum += currVal;
	}

	double myAverage = static_cast<double>(sum) / myTempVector.size();
	
	cout << "The average is: " << myAverage << endl << endl;
}


void mainPrompt(vector<int> myVector) {
	cout << "P - Print Numbers" << endl;
	cout << "A - Add A Number" << endl;
	cout << "M - Display Mean of The Numbers" << endl;
	cout << "S - Display The Smallest Number" << endl;
	cout << "L - Display The Largest Number" << endl;
	cout << "Q - Quit" << endl;

	cout << "User Input: ";
	
	char input{};
	cin >> input;

	bool doQuit = false;
	
	if (input == 'P' or input == 'p') {
		printNumbers(myVector);
	}
	else if (input == 'A' or input == 'a') {
		myVector = addNumber(myVector);
	}
	else if (input == 'M' or input == 'm') {
		if (myVector.size() < 1) {
			cout << "No data to process for average." << endl << endl;
		}
		else {
			calculateAverage(myVector);
		}
	}
	else if (input == 'S' or input == 's') {
		if (myVector.size() < 1) {
			cout << "No data to process." << endl;
		}
		else {
			int smallestElement = *min_element(myVector.begin(), myVector.end());
			cout << "The smallest element is: " << smallestElement << endl << endl;
		}
	}
	else if (input == 'L' or input == 'l') {
		if (myVector.size() < 1) {
			cout << "No data to process." << endl;
		}
		else {
			int largestElement = *max_element(myVector.begin(), myVector.end());
			cout << "The Largest element is: " << largestElement << endl << endl;
		}
	}
	else if (input == 'Q' or input == 'q') {
		cout << "Quitting..." << endl;
		doQuit = true;
	}
	else {
		cout << "Invalid input - Try again" << endl << endl;
	}

	if (!doQuit) {
		mainPrompt(myVector);
	}
}

int main() {
	/*
		for (int i{}; i < 5; i++) {
			cout << i << endl;
		};
	*/
	/*
		for (int i{}, j{}; i < 5; ++i , j++) {
			cout << i << " : " << j << endl;
		};
	*/
	/*
		vector<int> nums{ 1,2,3,4,5 };

		for (unsigned int i{}; i < (nums.size()); i++) {
			cout << nums.at(i) << endl;
		};
	*/
	/*
		int sum{};
		for (int i{ 1 }; i <= 15; i++) {
			if ((i % 2) != 0) {
				sum += i;
				cout << i << " : " << sum << endl;
			};
		};
		//cout << sum << endl;
	*/

	// ranged based for loop
/*
	int scores[]{ 10,20,30 };

	for (int score : scores) {
		cout << score << endl;
	}

	for (auto score : scores) {
		cout << score << endl;
	}
*/
/*
	vector < double > temperatures{ 18.3,87.9,82.9,83.5,72.6 };
	double total{};

	for (auto temp : temperatures) {
		total += temp;
	}

	// setPrecision(1) means 1 decimal point, setPrecision(10) means 10 decimal points
	cout << fixed << setprecision(1);
	double averageTemp = total / temperatures.size();
	cout << averageTemp;
*/
/*
	// initializer list
	for (auto val : { 1,2,3,4,5 }) {
		cout << val << endl;
	}
*/
/*
	// loops through each character of the string;
	for (auto c : "This is a test") {
		cout << c << endl;
	}
*/
/*
	vector<int> vec{ 1,3,5,15,16,17,18,19,20,21,25,26,27,30,50,55,56,58,100,200,300,400,500,600,700 };
	int count{};
	for (auto i : vec) {
		if (i % 3 == 0 || i % 5 == 0) {
			count++;
		};
	}
	cout << count;
*/

// While Loop
/*
	cout << "Enter a poitive integer to start the countdown: ";
	int userEnteredNumber{};
	cin >> userEnteredNumber;

	while (userEnteredNumber >= 0) {
		cout << userEnteredNumber << endl;
		--userEnteredNumber;
	}

	cout << "lift off" << endl;
*/

//	vector<int> vec{ 1,3,5,15,16,17,18,19,20,21,25,26,27,-99,30,50,55,56,58,100,200,300,400,500,600,700 };

//	int count = count_if(vec.begin(), vec.end(), IsNotNegative99);
//	cout << count << endl;
//	cout << vec.size();
/*
	int count{};
	for (int currVal : vec) {
		if (currVal != -99) {
			count++;
		}
	}
	cout << count;
*/
/*
	int count{};
	bool foundNegative99 = false;

	while (!foundNegative99) {
		if (vec.at(count) != -99) {
			++count;
		}
		else {
			foundNegative99 = true;
		}
	}
	cout << count;
*/

// Do While
/*
	char userInput{};

	do {
		cout << "1. Do something" << endl;
		cout << "2. Do something 2" << endl;
		cout << "3. Do something 3" << endl;
		cout << "Q. Quit" << endl;

		cout << "Input: ";
		cin >> userInput;

		switch (userInput) {
			case '1': {
				cout << "Did 1" << endl;
			}
				break;
			case '2': {
				cout << "Did 2" << endl;
			}
				break;
			case '3': {
				cout << "Did 3" << endl;
			}
				break;
			case 'q': {}
				break;
			case 'Q': {}
				break;
			default: {
				cout << "Unkown input" << endl;
			}

		}
	} while (userInput != 'q' and userInput != 'Q');

	cout << "Exited Program" << endl;
*/

// continue & break
/*
	char userInput{};
	while (true) {
		cout << "Continue Loop? (Y/N): ";
		cin >> userInput;
		cout << endl;

		if (userInput == 'N' or userInput == 'n') {
			cout << "exit" << endl;
			break;
		}
		else if (userInput == 'Y' or userInput == 'y') {
			cout << "continue" << endl;
			continue;
		}
		else {
			cout << "Unrecognized input" << endl;
			cout << endl;
		}
	}
*/





// challenge
// add together every possible multiplication pair of a vector's ints
// if only 1 int is present, should return 0


	//vector<int> vec{ 1,2,3 };
	//int sum{};

	
	
/*
	for (int currVal : vec) {

		for (unsigned int j{}; j < vec.size(); j++) {
			// don't want to multiply something by itself
			if (j != 0) {
				int myPlus = vec.at(0) * vec.at(j);
				cout << currVal << endl; //just using currVal so my IDE doesn't have a warning
				sum += myPlus;
				cout << "j is: " << j << endl << endl;
				cout << vec.at(0) << '*' << vec.at(j) << '=' << myPlus << endl << endl;
				cout << "Total: " << sum << endl << endl;
			}
		}
		// reassigns 0 point in the vector to the what is in the 1 slot
		vec.erase(vec.cbegin());
	}
	cout << sum;
*/

/*
	// the easy way
	for (size_t i = 0; i < vec.size(); ++i) // size_t is a type of int that adapts its size to fit
		for (size_t j = i + 1; j < vec.size(); ++j)
			sum = sum + vec.at(i) * vec.at(j);
	
	cout << sum;
*/

	

// section Challenge

	vector<int> startVector{};

	mainPrompt(startVector);

	return 0;


	
}