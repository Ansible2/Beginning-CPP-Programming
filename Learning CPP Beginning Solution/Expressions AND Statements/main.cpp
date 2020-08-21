#include <ioStream>

using namespace std;

int main() {
/*
	cout << "enter the letter grade you expect on the exam: ";

	char letterGrade{};
	cin >> letterGrade;

	switch (letterGrade) {
		case 'a':
		case 'A':
			cout << "You need a 90 or above." << endl;
			break;
		case 'b':
		case 'B':
			cout << "You need a 80-89." << endl;
			break;
		case 'c':
		case 'C':
			cout << "You need a 70-79." << endl;
			break;
		case 'd':
		case 'D':
			cout << "You need a 60-69." << endl;
			break;
		case 'f':
		case 'F':
			cout << "You need a 50-59." << endl;
			break;
		default:
			cout << "Invalid entry." << endl;
	};
*/

/*
	// enums
	enum Direction {
		left,right,up,down
	};

	Direction heading{ left };

	switch (heading)
	{
	case left:
		cout << "left" << endl;
		break;
	case right:
		cout << "right" << endl;
		break;
	case up:
		cout << "up" << endl;
		break;
	case down:
		cout << "down" << endl;
		break;
	default:
		break;
	}
*/

/*
	// conditional operator
	cout << "Enter an integer: ";

	int num{};
	cin >> num;

	if (num % 2 == 0) {
		cout << "num is even" << endl;
	} else {
		cout << "num is odd" << endl;
	};

	// is equivalent to
	cout << "num is" << ((num % 2 == 0) ? " even" : " odd" );
*/

	int num1{}, num2{};

	cout << "Enter number 1:" << endl;
	cin >> num1;
	cout << "Enter number 2:" << endl;
	cin >> num2;

	if (num1 != num2) {
		cout << "Larger Number: " << ((num1 > num2) ? num1 : num2) << endl;
	} else {
		cout << "The numbers are the same" << endl;
	};


	return 0;
}