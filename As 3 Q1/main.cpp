//Gregory Sveinbjornson
//200427591
//Mar. 15, 2021

#include "unsortedType.h"

using namespace std;

int main()

{
	//declaring array
	int boxes[10] = { 0 };

	ifstream in("boxes.txt");//opening boxes.txt file

	//checking if file is open
	if (!in.is_open())
	{
		//telling the user the file is closed
		cout << "boxes.txt is not open" << endl;

		exit(1);
	}

	UnsortedType* un = new UnsortedType; //calling unsortedtype class

	ItemType box; //calling ItemType class

	int i = 0;  //declaring variable

	while (!in.eof())//running whil the file has not ended

	{
		//getting id and num of boxes
		in >> box.id >> box.numbox;
		//printing the id and numof boxes
		cout<<box.id<<" "<<box.numbox<<endl;
		//putting num of boxes into array
		boxes[box.id - 1] += box.numbox;

		i++;//adding to i

	}
	//running while i less that 10
	for (i = 0; i < 10; i++)

	{

		if (boxes[i] != 0)//while not 0

		{

			box.id = i + 1;// add 1 to box id

			box.numbox = boxes[i]; //setting num of boxes

			un->InsertItem(box);//inserting the info

		}

	}
	//printing output to results.txt
	ofstream out("results.txt");
	//header
	out << "Class Boxes" << endl;
	//reseting list
	un->ResetList();
	//declaring variable
	int high = 0;
	//runnibg while i lessthan legnth
	for (i = 0; i < un->LengthIs(); i++)

	{
		//getting item
		un->GetNextItem(box);
		//printing id and num
		out << box.id << "\t\t" << box.numbox << endl;

		if (high < box.numbox)//if num greater than 0

		{
			//setting high to num
			high = box.numbox;

		}

	}

	un->ResetList();//reseting list

	out << "Winning class(s) id is: ";//telling user who won

	for (i = 0; i < un->LengthIs(); i++)// while i less than length

	{
		//getting item
		un->GetNextItem(box);

		if (high == box.numbox)//if num equals prev

		{

			out << box.id << " "; //printingthe id

		}

	}

	out << endl;
	//telling user where to find results
	cout << "Successfully written into results.txt" << endl;

	return 0;

}

