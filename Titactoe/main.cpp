////Gregory Sveinbjornson
//200427591
//Feb 4, 2021

/*
A few notes:
1. I ran out of time to do an extra feature, I barely got this done on time so sorry about that

2. I realized after I was done that I should have probably split up the cpp file, but again no time so I put 
spaces between the different classes to make it a little more readable

3. just ran out of time to comment the end of the cpp file
*/

#include "Tictactoe.h"

int main()
{
		//asking user for the type of game
	    cout << "Welcome to Tic-Tac-Toe" << endl

		         << " X go first" << endl

		         << "press 1 for human vs human," << endl

		         << "press 2 for computer vs computer" << endl

		         << "press 3 for human vs computer" << endl;

		//initializing user value
	    int user = 0;
		//getting the user input
	    cin >> user;

		//checking fif the value was accepted
	    while (user != 1 && user != 2 && user != 3) {

		         cin >> user;

		         cout << "Not valid, please try again" << endl;

		   
	}

		//running the requested game type
	    if (user == 1)
		         hvh();
	    else if (user == 2)
		         cvc();
	    else if (user == 3)
		         hvc();

	    return 0;
}



