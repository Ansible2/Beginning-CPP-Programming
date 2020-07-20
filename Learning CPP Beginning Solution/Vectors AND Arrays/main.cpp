#include <iostream>
#include <vector>

using namespace std;

int main() {
	/*
		vector<int> myNumVector(4, 100);
		vector<int> myNumVector2{ 22 };
		myNumVector.push_back(21);
		myNumVector2.push_back(40);

		cout << myNumVector.operator[](4) << endl;
		cout << myNumVector2[1] << endl;
		cout << myNumVector2.at(0) << endl;
		//cout << myNumVector2.at(2) << endl;
		vector<int> vec{ 10,20,30,40,50 };

		vec.at(0) = 100;
		vec.at(vec.size() - 1) = 1000;

		cout << vec.at(vec.size() - 1);
	*/
	/*
		// constructors used in the same order as described above:
		std::vector<int> first;                                // empty vector of ints
		std::vector<int> second(4, 100);                       // four ints with value 100
		std::vector<int> third(second.begin(), second.end());  // iterating through second
		std::vector<int> fourth(third);                       // a copy of third

		// the iterator constructor can also be used to construct from arrays:
		int myints[] = { 16,2,77,29 };
		std::vector<int> fifth(myints, myints + sizeof(myints) / sizeof(int));

		std::cout << "The contents of fifth are:";
		for (std::vector<int>::iterator it = fifth.begin(); it != fifth.end(); ++it)
			std::cout << ' ' << *it;
		std::cout << '\n';
	*/

	/*
		int arr[10]{ 0 };
		arr[0] = 100;

		cout << arr[0];

		return 0;
	*/

	vector<int> vector1;
	vector1.push_back(10);
	vector1.push_back(20);
	int vector1Size = vector1.size();
	for (int i = 0; i < vector1Size; i++) {
		cout << vector1.at(i) << endl;
	}

	cout << endl;

	vector<int> vector2;
	vector2.push_back(100);
	vector2.push_back(200);
	int vector2Size = vector2.size();
	for (int i = 0; i < vector2Size; i++) {
		cout << vector2.at(i) << endl;
	}

	cout << endl;

	vector<int> vector_2d;
	for (int i = 0; i < (vector1Size); i++) {
		vector_2d.push_back(vector1.at(i));
	}
	for (int i = 0; i < (vector2Size); i++) {
		vector_2d.push_back(vector2.at(i));
	}
	//print
	int vector_2dSize = vector_2d.size();
	for (int i = 0; i < vector_2dSize; i++) {
		cout << vector_2d.at(i) << " ";
	}

	cout << endl;

	vector1.at(0) = 1000;
	for (int i = 0; i < vector1Size; i++) {
		cout << vector1.at(i) << endl;
	}

	return 0;
}