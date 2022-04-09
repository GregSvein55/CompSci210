#include "swapper.h"

int main()
{
	my_class<char> temp('a', 'b');    //worked as an int, double and char
	temp.printem();
	temp.swapper();
	cout << "AFTER SWAP" << endl;
	temp.printem();
}