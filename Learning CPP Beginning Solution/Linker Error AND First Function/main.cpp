#include <iostream>
using std::endl;

void function1() {
	std::cout << "Enter your favorite number between 1 and 100: ";

	int favoriteNumber = 0;

	std::cin >> favoriteNumber;

	if (favoriteNumber < 1) {
		std::cout << "Your number is less then one, try again." << endl;
		function1();
	}
	else if (favoriteNumber > 100) {
		std::cout << "Your number is more then one-hundred, try again." << endl;
		function1();
	}
	else {
		std::cout << "Amazing blah blah number" << endl;
		std::cout << "No really " << favoriteNumber << " is my fav" << endl;
	}
}

int main() {
	function1();

	return 0;
}