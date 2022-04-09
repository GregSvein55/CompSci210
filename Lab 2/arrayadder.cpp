//filename: arrayaddder.cpp
//Modify this program to overload subtraction operator and insertion operator
#include <iostream>
using namespace std;

#define MAXARRAY 5

class myarray 
{
private:
	int value[MAXARRAY];

public:
	void setvalue(int index, int newvalue){
		value[index]=newvalue;}
	int getvalue(int index){
		return value[index];}

	/* Overloaded operator- as a member
	myarray operator-(myarray array2)
	{
		myarray temparray;
		for (int i=0; i<MAXARRAY; i++)
			temparray.value[i]=value[i] - array2.value[i];
		return temparray;
	}*/

	//friend statements to share the private int
	friend myarray operator-(myarray array1, myarray array2);
	friend ostream& operator<<(ostream& os, myarray array);
};
//Overloaded operator- as a non member
myarray operator-(myarray array1, myarray array2)
{
	myarray temparray;
	for (int i = 0; i < MAXARRAY; i++)
		temparray.value[i] = array1.value[i] - array2.value[i];
	return temparray;
}

//overloaded operator << as a non member
ostream& operator<<(ostream& os, myarray array)
{
		//labelling arrays
		os << "newarray:  ";
		//printing the values
		for (int i = 0; i < MAXARRAY; i++)
		{
			os << array.value[i] << "  ";
		}
		//starting a new line
		os << endl;
	//returning the output stream
	return os;
}

int main ()
{

	myarray array1, array2, array3;
	int i;
	
	//INITIALIZE 
	for (i=0; i<MAXARRAY; i++)
	{
		array1.setvalue(i,i);
		array2.setvalue(i,i+3);
	}
	
	//ADD 
	array3=array1 - array2; 
	
	
	//PRINT
	cout << array1 << array2 << array3;

	return 0;
}
