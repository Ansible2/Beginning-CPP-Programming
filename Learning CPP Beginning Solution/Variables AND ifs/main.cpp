#include <iostream>
using namespace std;

int main() {
	cout << "Hello, and welcome to this arbitrary thing" << endl;

	cout << "How many small rooms you want clean dog?" << endl;
	int numSmallRooms = { 0 };
	cin >> numSmallRooms;
	cout << endl;

	if (numSmallRooms < 1) {
		cout << numSmallRooms << " Bruh, why you ask if it gonna be zero?" << endl;
	}
	else if (numSmallRooms > 3) {
		cout << numSmallRooms << " Too many bro." << endl;
	}
	else {
		cout << numSmallRooms << " In the sweet spot." << endl;
	};

	cout << "aight, aight, what about them big rooms?" << endl;
	int numLargeRooms = { 0 };
	cin >> numLargeRooms;
	cout << endl;

	switch (numLargeRooms) {
		case 0:
		{
			cout << numLargeRooms << " Bruh" << endl;
		}
		break;

		case 1:
		{
			cout << numLargeRooms << " One? aight." << endl;
		}
		break;

		case 2:
		{
			cout << numLargeRooms << " Dos, I got u" << endl;
		}
		break;

		default:
		{
			cout << numLargeRooms << " You got too many rooms dude." << endl;
		}
	}

	cout << endl << endl;

	const double smallRoomCost = { 25 };
	double smallRoomTotal = numSmallRooms * smallRoomCost;

	const double largeRoomCost = { 50 };
	double largeRoomTotal = numLargeRooms * largeRoomCost;


	double totalCostBeforeTax = largeRoomTotal + smallRoomTotal;

	const double taxRate = { 0.06 };
	double tax = totalCostBeforeTax * taxRate;
	double totalCostAfterTax = totalCostBeforeTax + tax;

	cout << "Estimate shiiiiiit:" << endl;
	cout << "Number of small rooms: " << numSmallRooms << endl;
	cout << "Number of large rooms: " << numLargeRooms << endl;
	cout << "Cost of small rooms: " << smallRoomCost << endl;
	cout << "Cost of large rooms: " << largeRoomCost << endl;
	cout << "Total before tax: $" << totalCostBeforeTax << endl;
	cout << "Tax: $" << tax << endl;
	cout << "Total after tax: $" << totalCostAfterTax << endl;

	return 0;
}