#include <iostream>
#include <cstring> 
#include <cctype>

#include <string> // cpp strings, also in std namespace


using namespace std;

string encryptStringHard(string inputString, string alphabet, string key) {
	string encryptedString{};
	char encryptedLetter{};
	size_t alphabetLength = alphabet.length();
	// loop through each character of the inputstring
	// find numerically where that string is in alphabet variable
	// get the corresponding letter in the key
	// add that character to the encryptedString

	for (char currentLetter : inputString){
		for (size_t i{ 0 }; i < alphabetLength; ++i) {
			// used for handling other chars like spaces and '
			if (alphabet.find(currentLetter) == string::npos) {
				encryptedString = encryptedString + currentLetter;
				break;
			}
			else if (currentLetter == alphabet.at(i))  {
				encryptedLetter = key.at(i);
				encryptedString = encryptedString + encryptedLetter;
				break;
			}
		}	
	}

	return encryptedString;
};
string encryptStringEasy(string inputString, string alphabet, string key) {
	string encryptedString{};
	char encryptedLetter{};
	size_t letterIndex{};
	for (char currentLetter : inputString) {
		letterIndex = alphabet.find(currentLetter);
		// used for handling other chars like spaces and '
		if (letterIndex == string::npos) {
			encryptedLetter = currentLetter;
		}
		else {
			encryptedLetter = key.at(letterIndex);
		}

		encryptedString += encryptedLetter;
	}

	return encryptedString;
};

string decryptStringHard(string inputString, string alphabet, string key) {
	string decryptedString{};
	char decryptedLetter{};
	size_t alphabetLength = alphabet.length();

	for (char currentLetter : inputString) {
		for (size_t i{ 0 }; i < alphabetLength; ++i) {
			// used for handling other chars like spaces and '
			if (alphabet.find(currentLetter) == string::npos) {
				decryptedString = decryptedString + currentLetter;
				break;
			}
			else if (currentLetter == key.at(i)) {
				decryptedLetter = alphabet.at(i);
				decryptedString = decryptedString + decryptedLetter;
				break;
			}
		}
	}

	return decryptedString;
};
string decryptStringEasy(string inputString, string alphabet, string key) {
	string decryptedString{};
	char decryptedLetter{};
	size_t letterIndex{};
	for (char currentLetter : inputString) {
		letterIndex = key.find(currentLetter);
		
		// used for handling other chars like spaces and '
		if (letterIndex == string::npos) {
			decryptedLetter = currentLetter;
		}
		else {
			decryptedLetter = alphabet.at(letterIndex);
		}

		decryptedString += decryptedLetter;
	}

	return decryptedString;
};


void createPyramid(string inputString) {
	size_t inputStringLength = inputString.length();
	size_t numberOfIndentSpaces{};
	
	for (size_t i{ 1 }; i <= inputStringLength; i++) {
		// get the string for that level of the pyramid
		string lineInOrder = inputString.substr(0,i);
		string outputLine = lineInOrder;
		
		// reverse the line and then add to output
		if (i > 1) {
			size_t lengthOfLine = lineInOrder.length();
			string lineReversed{};
			for (size_t j{ 0 }; j < lengthOfLine; j++) {
				string character = lineInOrder.substr(j,1);
				lineReversed.insert(0, character);
			}
			// get rid of the repeat center character
			lineReversed.erase(0, 1);
			outputLine += lineReversed;
		}
		
		// add indents
		numberOfIndentSpaces = inputStringLength - i;
		if (numberOfIndentSpaces > 0) {	
			for (size_t k{ 1 }; k <= numberOfIndentSpaces; k++)
				cout << ' ';
		}

		cout << outputLine << endl;
	}
};

void fizzBuzz(int n) {

	for (int i{ 1 }; i <= n; i++) {
		std::string output{ "" };

		if (i % 3 == 0) {
			output += "Fizz";
		}
		if (i % 5 == 0) {
			output += "Buzz";
		}

		if (output == "") {
			std::cout << i << endl;
		}
		else {
			std::cout << output << endl;
		}
	}

}

int main() {

	fizzBuzz(10);
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

	//assignment
	/*
		string s1{ "watermelon" };
		s1 = "Not Watermelon";
		string s2{ "another string" };
		s2 = s1;

		s2[0] = 'n';
		s2.at(4) = 'w';
		cout << s1 << endl;
		cout << s2 << endl;
	*/

	//concatenation
/*
	string s3 = "Hello";
	string s4 = s3 + " There";// converts " There" into an object to be added to s3
	cout << s4;
	//s4 = "Hello" + " There"; // does not compile as this is two c-style string literals being combined
*/

	// for loop
/*
	
	string s10 = "Apple";
	for (size_t i{ 0 }; i < s10.length(); ++i) {
		cout << s10.at(i); // can also use s10[i]
	}
	cout << endl;
	// range based for loop
	for (char c : s10)
		cout << c;
	cout << endl;
*/

	// sub strings
/*
	string s11{ "This is a test" };
	cout << s11.substr(0, 4) << endl; // this
	cout << s11.substr(5, 2) << endl; // is
	cout << s11.substr(8, 1) << endl; // a 
	cout << s11.substr(10, 4) << endl; // test
*/

	// erase
/*
	string s12{ "This is a test" };
	s12.erase(0, 5);
	cout << "s12 is now: " << s12 << endl;
*/

	// getLine
/*
	string fullName{};
	cout << "Enter Your Full Name:" << endl;
	getline(cin, fullName); // doesn't stop at a space " " whereas cin alone will
	cout << "Your full name is: " << fullName << endl;
*/

	// find
/*
	string s13{ "The secret word is Boo" };
	string word{};

	cout << "enter a word to find: ";
	cin >> word;

	size_t position = s13.find(word);
	if (position != string::npos) {
		cout << "Found " << word << " at position: " << position << endl;
	} else {
		cout << "Sorry, " << word << " not found" << endl;
	}
*/


	// section challenge
	// substitution cipher
/*
	string alphabet{ "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" };
	string key{ "wxeflGpAtumSkYNOyVcdrjLMsHIJKUaCDTizRWBPbXZnQghEFovq" };
	
	string secretMessage{};
	cout << "Enter your message:" << endl;
	getline(cin, secretMessage);

	string myString = encryptStringHard(secretMessage, alphabet, key);
	cout << "Encrypted: " << myString << endl;
	myString = decryptStringHard(myString, alphabet, key);
	cout << "Decrypted: " << myString << endl;

	cout << "\nEasy:------------------------------" << endl;
	myString = encryptStringEasy(secretMessage, alphabet, key);
	cout << "Encrypted: " << myString << endl;
	myString = decryptStringEasy(myString, alphabet, key);
	cout << "Decrypted: " << myString << endl;
*/

	// section assignment
	// pyramid
	
	//createPyramid("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	return 0;
}