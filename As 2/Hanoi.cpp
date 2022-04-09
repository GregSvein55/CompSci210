/*
Gregory Sveinbjornson
200427591
Feb 19, 2021
*/

#include <iostream>
using namespace std;

void Hanoi(int n, char from, char to, char other)

{
	//checking if its the first move
	if (n == 1)
	{
		//moving the first disk to a different rod
		cout << "Move disk 1 from rod " << from << " to rod " << to << endl;

		return;  //returning if its the first move
	}

	//moving the next disk to the free rod
	Hanoi(n - 1, from, other, to);

	//moving the disk
	cout << "Move disk " << n << " from rod " << from << " to rod " << to << endl;

	//moving smaller disk onto larger disk
	Hanoi(n - 1, other, to, from);

}



int main()
{
	int n;

	//asking user for number of disks
	cout << "How many disks are in the tower? ";
	cin >> n; 

	//running the function, naming the rods A, B, and C
	Hanoi(n, 'A', 'B', 'C');

	return 0;

}