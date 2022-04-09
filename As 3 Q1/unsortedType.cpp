#include "unsortedType.h"

UnsortedType::UnsortedType()//constructor

// Pre: None.

// Post: List is empty.

{

	length = 0;//initializing length

}

void UnsortedType::InsertItem(ItemType item)

// Pre: List has been initialized. List is not full.

// item is not in list.

// Post: item is in the list.

{

	if (IsFull())

	{
		//telling the user the array is full
		cout << "Array is full." << endl;

		return;

	}
	//declaring bool variable
	bool found;

	RetrieveItem(item, found);//checking if the item exists

	if (found)

	{
		//telling the user the item exists
		cout << "Item already exit." << endl;

		return;

	}
	//finding the length of the item
	info[length] = item;
	//addin one to the length
	length++;

}

int UnsortedType::LengthIs() const

// Pre: List has been inititalized.

// Post: Function value == ( number of elements in

// list ).

{
	//returning the length
	return length;

}

bool UnsortedType::IsFull() const

// Pre: List has been initialized.

// Post: Function value == ( list is full ).

{
	//setting the max lenghth to 25
	return (length == MAX_ITEM);

}

void UnsortedType::RetrieveItem(ItemType& item, bool& found)

// Pre: Key member of item is initialized.

// Post: If found, item’s key matches an element’s key in the list and a copy

// of that element has been stored in item; otherwise, item is unchanged.

{
	//initializing found as false
	found = false;

	ResetList();//reseting the list

	ItemType myItem;//calling the class ItemType

	for (int i = 0; i < length; i++)//running until the lentgh is reached

	{
		//getting the item
		GetNextItem(myItem);

		if (myItem.id == item.id)//if the id matches

		{
			//setting found to true
			found = true;

			item = myItem; //setting the items value

			return;

		}

	}

}

void UnsortedType::DeleteItem(ItemType item)

// Pre: item’s key has been inititalized.

// An element in the list has a key that matches item’s.

// Post: No element in the list has a key that matches item’s.

{

	ResetList();//reseting the list

	ItemType myItem;//calling the class ItemType

	for (int i = 0; i < length; i++)//running until the lentgh is reached

	{

		GetNextItem(myItem);

		if (myItem.id == item.id)//if the id matches

		{

			length--;//subtracting from the length

			info[i] = info[length];//setting the length

			return;

		}

	}

}

void UnsortedType::ResetList()

// Pre: List has been inititalized.

// Post: currentent position is prior to first element in list.

{
	//position is before the list
	currententPos = -1;

}

void UnsortedType::GetNextItem(ItemType& item)

// Pre: List has been initialized. currentent position is defined.

// Element at currentent position is not last in list.

// Post: currentent position is updated to next position.

// item is a copy of element at currentent position.

{
	//adding to the position
	currententPos++;
	//getting the item
	item = info[currententPos];

}

