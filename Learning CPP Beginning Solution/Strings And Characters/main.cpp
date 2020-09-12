#include <iostream>
#include <cstring> 
#include <cctype>

#include <string> // cpp strings, also in std namespace

using namespace std;

int main() {
// c style stings
/*
	char firstName[20]{};
	char lastName[20]{};
	char fullName[20]{};
	char temp[20];

	//cout << firstName;
*/
/*
	cout << "Enter your first name: ";
	cin >> firstName;
	cout << "------------------------------------" << endl;
	
	cout << "Enter your last name: ";
	cin >> lastName;
	cout << "------------------------------------" << endl;

	cout << "Your first name has " << strlen(firstName) << " characters" << endl;
	cout << "Your last name has " << strlen(lastName) << " characters" << endl;

	strcpy(fullName, firstName); // copy firstName to fullName
	strcat(fullName, " "); // concatenate fullName and a space (add a space to the end of the string)
	strcat(fullName, lastName); // add lastName to the end of fullName

	cout << "Your full name is: " << fullName << endl;
*/

/*
	cout << "Enter your full name: ";
	cin >> fullName;
	cout << "Your full name is: " << fullName << endl;
	cout << "------------------------------------" << endl;
*/

/*
	cout << "Enter your full name: ";
	cin.getline(fullName,50);
	cout << "Your full name is: " << fullName << endl;
	
	cout << "------------------------------------" << endl;

	strcpy_s(temp, fullName);
	if (strcmp(temp, fullName) == 0) { // 0 means they are the same
		cout << temp << " and " << fullName << " are the same." << endl;
	}
	else {
		cout << temp << " and " << fullName << " are NOT the same." << endl;
	}

	cout << "------------------------------------" << endl;

	for (size_t i{ 0 }; i < strlen(fullName); ++i) { // size_t is an unsigned type that essentially adapts to fit things like strings and vectors using a sizeOf operator
		if (isalpha(fullName[i])) {
			fullName[i] = toupper(fullName[i]);
		}
	}
	cout << "Your full name is: " << fullName << endl;

	if (strcmp(temp, fullName) == 0) { // 0 means they are the same
		cout << temp << " and " << fullName << " are the same." << endl;
	}
	else {
		cout << temp << " and " << fullName << " are NOT the same." << endl;
	}
*/

// C++ strings
/*
	string s1; //auto init as an empty string ""; won't return garbage
	string s2{ "Frank" };
	string s3{ s2 }; // auto copies from s2, will be = "Frank"
	string s4{ "Frank", 3}; // only uses the selected number of chracters (Fra)
	string s5{ s3, 0, 2 }; // starts from char 0 (F) and copies 2 chars (Fr)
	string s6(3, 'a'); // makes 3 a's (aaa)

	cout << s2[0] << endl;
	cout s2.at(0) << endl;
	
	s2[0] = 'f';
	s2.at(0) = 'f';
*/
//comparison
/*
	string s1{ "Mango" };
	string s2{ s1 };
	string s3{"Apple"};
	string s4{ "apple" };

	cout << boolalpha; // makes 0/1 into false/true
	cout << (s1 == s2) << endl;
	cout << (s1 > s3) << endl;
	cout << (s4 < s1) << endl;
	cout << (s3 == s4) << endl;
*/

	string s1{ "watermelon" };
	s1 = "Not Watermelon";
	string s2{ "another string" };
	s2 = s1;

	s2[0] = 'n';
	s2.at(4) = 'w';
	cout << s1 << endl;
	cout << s2 << endl;

	return 0;
}