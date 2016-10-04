// Accelerated CPP - Chapter 1 Exercises.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	//1.0
	cout << "Please enter your name: " << flush;
	string userName;
	cin >> userName;

	string greeting = "Hello " + userName + " !";
	string spaces(greeting.size(), ' ');
	string lineTwo = "* " + spaces + " *";
	string lineOne(lineTwo.size(), '*');
	string lineThree = "* " + greeting + " *";

	cout << lineOne << endl;
	cout << lineTwo << endl;
	cout << lineThree << endl;
	cout << lineTwo << endl;
	cout << lineOne << endl;

	//1.1
	//const std::string hello = "Hello";
	//Valid as constant is defined upon initialization
	
	//const std::string message = hello + ", world" + "!";
	//Valid as a CONSTANT variable is used in the definition of a constant.

	//1.2
	//Same reasoning as above

	//1.3
	{ const string s = "a string";
	cout << s << endl; }
	{ const string s = "another string";
	cout << s << endl; }
	//Both of these are valid statements as although there are two constants with the same name,
	//they are both defined in separate scopes and the first variable is destroyed after the parenthesis are met.

	//1.4
	{ const string s = "a string";
	cout << s << endl;
	{ const string s = "another string";
	cout << s << endl; }}
	//Also valid one "s" is encapsulated and therefore within a different scope to the other "s".

	//1.5
	/*{ string s = "a string";
	{ string x = s + ", really";
	cout << s << endl; }
	cout << x << endl; }
	*/
	//Invalid because "x" is used outside it's scope. "s" is able to be used because it's being called within the
	//outer parenthesis where it is definied and there are no functions or anything to encapsulate it within one
	//set of parenthesis.

	//1.6
	//I predict it will cut off the whitespice because "cin" only reads the input stream until whtiespace or an
	//end-of-file is found.
	cout << "What is your name?";
	string myName;
	cin >> myName;
	cout << "Hello " << myName << endl << "And what is your name? " << flush;
	cin >> myName;
	cout << "Hello, " << myName << "; nice to meet you too!" << endl;
	//What actually happens is this:
	//"cin" reads all input into the variable "myName", it is actually "cout" that only reads up until whitespace
	//or an end-of-file, hence why the second name is automatically printed.
    return 0;
}

