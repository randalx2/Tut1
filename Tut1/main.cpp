
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

int main()
{
	srand(time(NULL)); //MUST START BY SEEDING THE RANDOMIZER IN THESE GAMES
	int irand; // variable to hole the random number value
	
	irand = rand() % 20 + 1; //Generate the random number between 1 and 20
	cout << "Random Number is " << irand << endl;

	if (irand % 3 == 0)
	{
		cout << "fizz" << endl;
	}

	else if (irand % 5 == 0)
	{
		cout << "buzz" << endl;
	}
	else if ((irand % 3 == 0) && (irand % 5 == 0))
	{
		cout << "fizz buzz" << endl;
	}
	else {
		cout << irand << " is not directly divisible by 3 or 5 try again" << endl;
	}


	system("PAUSE");
	return 0;
}