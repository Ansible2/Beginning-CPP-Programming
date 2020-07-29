#include <iostream>
#include <vector>

using namespace std;

vector<int>getDollars(int totalCents) {
	const int centsInDollar{ 100 }; 

	if (totalCents < centsInDollar) {
		return { totalCents,0 };
	} else {
		int centsLeft{ 0 };
		centsLeft = totalCents % centsInDollar;
		int totalDollars = (totalCents - centsLeft) / centsInDollar;
		return { centsLeft,totalDollars };
	};
}
vector<int>getQuarters(int totalCents) {
	const int centsInQuarter{ 25 };

	if (totalCents < centsInQuarter) {
		return { totalCents,0 };
	} else {
		int centsLeft{ 0 };
		centsLeft = totalCents % centsInQuarter;
		int totalQuarters = (totalCents - centsLeft) / centsInQuarter;
		return { centsLeft,totalQuarters };
	};
}
vector<int>getDimes(int totalCents) {
	const int centsInDime{ 10 };

	if (totalCents < centsInDime) {
		return { totalCents,0 };
	} else {
		int centsLeft{ 0 };
		centsLeft = totalCents % centsInDime;
		int totalDimes = (totalCents - centsLeft) / centsInDime;
		return { centsLeft,totalDimes };
	};
}
vector<int>getNickles(int totalCents) {
	const int centsInNickle{ 5 };

	if (totalCents < centsInNickle) {
		return { totalCents,0 };
	} else {
		int centsLeft{ 0 };
		centsLeft = totalCents % centsInNickle;
		int totalNickles = (totalCents - centsLeft) / centsInNickle;
		return { centsLeft,totalNickles };
	};
}
void getChange() {
	cout << "Enter the total amount in cents" << endl;
	int myTotalCents{ 0 };
	cin >> myTotalCents;

	if (myTotalCents < 0) {
		cout << "Total cents can't be negative." << endl;
		getChange();
	} else {
		vector<int>changeTempVector{};

		changeTempVector = getDollars(myTotalCents);
		int myTotalCentsLeft = changeTempVector.at(0);
		int myTotalDollars = changeTempVector.at(1);
		
		changeTempVector = getQuarters(myTotalCentsLeft);
		myTotalCentsLeft = changeTempVector.at(0);
		int myTotalQuarters = changeTempVector.at(1);

		changeTempVector = getDimes(myTotalCentsLeft);
		myTotalCentsLeft = changeTempVector.at(0);
		int myTotalDimes = changeTempVector.at(1);

		changeTempVector = getNickles(myTotalCentsLeft);
		myTotalCentsLeft = changeTempVector.at(0);
		int myTotalNickles = changeTempVector.at(1);
		
		cout << "The change could be:" << endl;
		cout << "Dollars:	" << myTotalDollars << endl;
		cout << "Quarters:	" << myTotalQuarters << endl;
		cout << "Dimes:		" << myTotalDimes << endl;
		cout << "Nickles:	" << myTotalNickles << endl;
		cout << "Pennies:	" << myTotalCentsLeft << endl;
	};
}


int main() {
	
	//int num1{ 10 };
	//int num2{ 20 };
	//int num3{ 30 };
/*
	double num1d{ 10 };
	double num2d{ 20 };

	cout << num1 / num2 << endl;
	cout << num1d / num2d << endl;
*/

/*
	num1 = 100;

	// goes from RIGHT to LEFT
	num1 = num2 = 1000;
*/

/*
	int result1 = num1++; // assigns num1 to result1 THEN adds +1 to num1
	int result2 = ++num2; // adds +1 to num2 THEN assigns num2 to result2
	cout << "result1 is: " << result1 << endl;
	cout << "result2 is: " << result2 << endl;
*/

/*
	//const int count{ 3 };
	cout << "Enter three ints seperated by spaces: ";
	cin >> num1 >> num2 >> num3;

	vector<int> vectorCount;
	vectorCount.push_back(num1);
	vectorCount.push_back(num2);
	vectorCount.push_back(num2);
	int vectorSize = vectorCount.size();

	int total = num1 + num2 + num3;
	double average = total / vectorSize;

	cout << "Before cast average: " << average << endl;
	cout << "After cast average: " << static_cast<double>(total) / vectorSize << endl << endl;
	// old cast method average = (double)total/count;
*/

/*
	bool equalResult{ num1==num2 };
	bool notEqualResult{ num1!=num2 };

	cout << "Equal Result pre-alpha: " << equalResult << endl;
	cout << "Not Equal Result pre-alpha: " << notEqualResult << endl;

	cout << boolalpha;

	cout << "Equal Result post-alpha: " << equalResult << endl;
	cout << "Not Equal Result post-alpha: " << notEqualResult << endl;
*/
	
/* 
	// close enough doubles within the std library will be considered equal
	double doubleNum1{ 12.0 };
	double doubleNum2{ 11.99999999999999999999999 };
	
	bool equalResult{ doubleNum1 == doubleNum2 };
	bool notEqualResult{ doubleNum1 != doubleNum2 };
	
	cout << boolalpha;

	cout << "Equal Result post-alpha: " << equalResult << endl;
	cout << "Not Equal Result post-alpha: " << notEqualResult << endl;
*/

/*
	if (not(num1 == num2)) {
		cout << "not equal" << endl;
	};
	if (not(num1 == num2) and (num1 != num3)) {
		cout << "not equal: part deux - The Reckoning" << endl;
	};
*/

/*
	num1 += num2;
	num3 /= num1;
*/

	getChange();

	//cout << "num1 is: " << num1 << endl;
	//cout << "num2 is: " << num2 << endl;
	//cout << "num3 is: " << num3 << endl;
}