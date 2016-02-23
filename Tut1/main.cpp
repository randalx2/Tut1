
//PRANEEL MISTHRY
//202515355 COMPUTER METHODS 3 TUT1
//24 FEB 2016
//PLEASE FORGIVE THE LATE SUBMISSION DUE TO LATE REGISTRATION PROBLEMS AS DISCUSSED IN YOUR OFFICE
/******************************************************************************************************************************/
#include <iostream>
#include <cstdio>
#include <ctime> // Needed for srand function to seed the randomizer
#include <string>
#include <cmath>
#include <cstdlib> //needed for random number generation in C++

using namespace std;
char input = 'x'; //initialize input character variable

int main()
{
	cout << "Welcome to my random number game " << endl;
	cout << "Please hit any key on your keyboard followed by Enter to keep playing" << endl;
	cout << "Otherwise press the 'r' key to exit" << endl;

	//Since this is a random number game I'm going to attempt to make the program
	//restart itself depending on key press instead of the user having to close the 
	//program on each randomizer attempt

	do{
		srand(time(NULL)); //MUST START BY SEEDING THE RANDOMIZER IN THESE GAMES
		int irand1, irand2; // variable to hole the random number value
		cin >> input;

		irand1 = rand() % 20 + 1; //Generate the random number between 1 and 20
		cout << "First Random Number is " << irand1 << endl;

		if (irand1 % 3 == 0) //if directly divisible by 3 the modulus is 0 ie 0 remainder
		{
			cout << "fizz" << endl;
		}

		else if (irand1 % 5 == 0)
		{
			cout << "buzz" << endl;
		}
		else if ((irand1 % 3 == 0) && (irand1 % 5 == 0))
		{
			cout << "fizz buzz" << endl;
		}
		else {
			cout << irand1 << " is not directly divisible by 3 or 5 try again" << endl;
		}

		// THIS IS THE START OF A NEW BRANCH CALLED "WOOF"
		irand2 = rand() % 50 + 1; //Generate the random number between 1 and 50
		cout << "Second Random Number is " << irand2 << endl;

		if (irand2 % 3 == 0)
		{
			cout << "fizz" << endl;
		}

		else if (irand2 % 5 == 0)
		{
			cout << "buzz" << endl;
		}
		else if ((irand2 % 3 == 0) && (irand2 % 5 == 0))
		{
			cout << "fizz buzz" << endl;
		}
		else if (irand2 % 7 == 0)
		{
			cout << "woof";
		}
		else {
			cout << irand2 << " is not directly divisible by 3, 5 or 7 try again" << endl;
		}



		
	} while (input != 'r');

	system("PAUSE");
	return 0;
}