#include <iostream>
#include <cstdlib>
#include <fstream>

class ItemType  //Declaring class
{
public: 	
	int id;//declaring varaibles
	int numbox;

};

//setting max as 25
#define MAX_ITEM 25

using namespace std;

class UnsortedType //Declaring class

{

public: //public functions

	UnsortedType(); //constructor

	bool IsFull() const;

	int LengthIs() const;

	void RetrieveItem(ItemType& item, bool& found);

	void InsertItem(ItemType item);

	void DeleteItem(ItemType item);

	void ResetList();

	void GetNextItem(ItemType& item);

private: // private members

	int length;

	ItemType info[MAX_ITEM];

	int currententPos;

};

