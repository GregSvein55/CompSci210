// Name: Gregory Sveinbjornson
// Student Number: 200427591
// Date: Feb 1, 2021
#include"MyString.h"

//Constructor
MyString::MyString() {

    //new dynamic char
    pData = new char[0];
    //creating empty string
    pData[0] = '\0';
    //initializing length
    length = 0;
}

//Copy constructor
MyString::MyString(char* cString) {
    //setting the length to the length of the string +1 
    length = strlen(cString) + 1;

    // setting the length as a buffer
    pData = new char[length];

    // Copying the string
    for (int i = 0; i < length; ++i)
        pData[i] = cString[i];

    // resetting the string
    pData[length - 1] = '\0';
}

//Destructor
MyString::~MyString() {
    length = 0;     //resetting length
    delete pData;   //deleting pointer
}

//overrided copy constructor
MyString::MyString(MyString const& s) {

    //setting the length
    length = s.length;
    // setting the length as a buffer
    pData = new char[length];

    // Copying the string
    for (int i = 0; i < s.length; i++) {
        pData[i] = s.pData[i];
    }

    // resetting the string
    pData[length - 1] = '\0';
}
//override default assignment operator
MyString MyString::operator = (MyString const& s) {
    //overriding =
    MyString* string = new MyString(s);
    //returning the new string
    return *string;
}

//print function
void MyString::Put() {
    int i = 0;      //initializing i

    //running while the stringis not empty
    while (pData[i] != '\0') {
        //printing string
        cout << pData[i];
        i++;
    }
    cout << endl;
}

//.reverse function
void MyString::Reverse() {
    int i = 0;
    int x = length - 2;  //setting x to one less than the length
                         //I -2 because the length is one larger than it actually is to act as a buffer
    //running while the length - 1 is greater than i
    while (i < x) {
        //swapping i and x to reverse the word
        char temp = pData[i];
        pData[i] = pData[x];
        pData[x] = temp;
        i++;
        x--;
    }
}

//concatenation operator
MyString MyString::operator + (MyString const& s) {
    MyString string;   //creating an instance of the mystring class

    //setting the length to the actual length
    string.length = this->length + s.length - 1;
    //setting the string
    string.pData = new char[string.length];

    int pos = 0;
    //adding the two strings together
    for (int i = 0; i < length - 1; i++) {
        string.pData[pos++] = this->pData[i];
    }
    for (int i = 0; i < s.length - 1; i++) {
        string.pData[pos++] = s.pData[i];
    }

    //resetting the string
    string.pData[pos] = '\0';
    //returning the class instance
    return string;
}