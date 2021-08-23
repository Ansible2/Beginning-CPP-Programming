// pragma once is a preprocessor command to tell the compiler to only process this file once if it is included multiple times in a call stack
// another method (called a "block guard") of doing this is as follows:
/*
	#ifndef _ACCOUNT_H_
		#define _ACCOUNT_H_

		// class goes here

	#endif //_ACCOUNT_H_
*/
#pragma once

#include <string>

class Account
{
	// std practice in CPP is to have private attributes that can be accessed by public functions
	// private means they are only known within the scope of the class, so they can be used in a classes' functions for example
private:
	std::string name;
	double balance;

public:
	// methods declared inline
	void set_balance(double new_balance) { 
		balance = new_balance; 
	}
	double get_balance() { 
		return balance; 
	}

	// methods that will be declared outside of class declaration
	void set_name(std::string new_name);
	std::string get_name();

	bool deposit(double amount);
	bool withdraw(double amount);
};

