/*
Gregory Sveinbjornson
200427591
Feb 17, 2021
*/

#include <iostream>
using namespace std;

int Recursive(int n);		//declaring fuctions
int Iterative(int n);


//finding the fibonacci secquence recursivly
int Recursive(int n) 
{
	if ((n == 0) || (n == 1)) //checking if the number is 0 or 1

		return(n); //returning 0 or 1

	else

		return(Recursive(n - 1) + Recursive(n - 2)); //return the fibonacci series
}

int num1 = 0, num2 = 1;
int Iterative(int n)
{
	
	int sum;
	if ((n == 0) || (n == 1))
	{
		return n; //returning 0 or 1
	}
	else
	{

			sum = num1 + num2;
			num1 = num2;
			num2 = sum;

			return num1;
	}

}



int main()
{
	
	int number; // variable declaration
	cout << "Input the number to calculate Fibonacci series : ";
	cin >> number; // Accept the number
	cout << "Fibonacci Series is (Recursive)";
	for (int i = 0; i < number; i++) // loop to find fibonacci series
		cout << " " << Recursive(i); // calling function
	cout << endl;
	cout << "Fibonacci Series is (Iterative)";
	for (int j = 0; j < number; j++) // loop to find fibonacci series
		cout << " " << Iterative(j); // calling function
	cout << endl;
	

	return 0;



}