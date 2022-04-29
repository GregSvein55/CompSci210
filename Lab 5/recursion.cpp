//Gregory Sveinbjornson
//200427591
//Feb 24, 2021
//Part 1:
//1. Base case for writeSub is when pointer points to null
//
//2. Base case for insertEndSub is when pointer points to null.
//
//3. to print list backwards 
//
//	if (p != 0)
//	{
//		writeSub(p->next); //next node
//		cout << p->dataItem; //output data
//	}
//

//--------------------------------------------------------------------
//
//  Laboratory                                        
//
//  Test program for a set of recursive linked list functions
//
//--------------------------------------------------------------------

// Reads a list of characters and calls the specified recursive
// routine.

#include <iostream>
#include "listrec.h"
using namespace std;

int main()
{
	List<char> testList;   // Test list
	char testData;         // List data element

	cout << endl << "Enter a list of characters : ";
	cin.get(testData);
	while ( testData != '\n' )
	{
		testList.insert(testData);
		cin.get(testData);
	}
	testList.showStructure();

	// Call a recursive routine by uncommenting the call you wish to
	// execute.

	testList.write();
	testList.insertEnd('!');

	testList.write();

	testList.aBeforeb();
	testList.showStructure();

	return 0;
}
