/*************************
program: swap two integers
**************************/

#include <iostream>
using namespace std;

template <typename T>
void swapper (T & x, T & y);
template <typename T>
void printem(T& x, T& y);

int main()
{
	char myx='w', myy='d';

	printem(myx, myy);

	swapper(myx, myy);
	
	cout << "AFTER SWAP" << endl;

	printem(myx, myy);

	return 0;
}

template <typename T>
void swapper (T & x, T & y)
{
		int TempVal = x;
		x = y;
		y = TempVal;
}

template <typename T>
void printem(T& x, T& y)
{
	cout << "First value is: " << x << " Second value is: " << y << endl;

}