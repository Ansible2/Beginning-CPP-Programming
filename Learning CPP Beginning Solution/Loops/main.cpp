#include <iostream>
#include <vector>
using namespace std;

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

	int sum{};
	for (int i{ 1 }; i <= 15; i++) {
		if ((i % 2) != 0) {
			sum += i;
			cout << i << " : " << sum << endl;
		};
	};
	//cout << sum << endl;
}