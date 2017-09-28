/* 
Alan Lee 9/26/17

Program Problem 

We create problems for the user to answer and recieve data
*/

// libraries
#include <iostream> // gives access to things like cout cin endl << >> boolalpha and noboolalpha
#include <conio.h> 

//namespace
using namespace std;

//functions 
void pause() {
	cout <<"press any key to continue . . .";
	while (!_kbhit ());
	_getch;
	cout<< 'n/';
}

// main
void main() {
	//variable
	int calculator;
	float batteries;
	double battery_life;
	bool glasses = false; // assumes no one has glasses
	char cover;
	int calc_1, calc_2, calc_3;

	//user queries
	cout << "How many batteries do you have? ";
	cin >> calculator; 
	cout << "How many batteries are usable? ";
	cin >> batteries;
	cout << "How much battery life is there? ";
	cin >> battery_life;
	cout << "Do you wear glasses : Y/N ";
	cin >> cover;
		if (cover == 'Y' || cover == 'y') {
			glasses = true; //freely changes the value from false to true
	}
	//After questions print out stored data
	cout <<"You have " <<  calculator  << " calculators." << endl; // endl makes a new line
	cout <<"There are " <<  batteries << " in the world." << endl;
	cout << "You have " <<  battery_life << " left in your calculator" << endl;
	cout << boolalpha << " The answer evaluation of you have glasses is " << glasses << endl;

	// change values
	cout << "Enter a number :";
	cin >> calc_1;
	cout << "Enter another number : "; 
	cin >> calc_2;
	cout << calc_1 << "+" << calc_2 << "=" << calc_1 + calc_2 << endl;
	calc_3 = calc_1 * calc_2;
	cout << calc_1 << "*" << calc_2 << "=" << calc_3 << endl;
	// pause
	pause();

}