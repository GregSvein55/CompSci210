// Name: Gregory Sveinbjornson
// Student Number: 200427591
// Date: Feb 1, 2021

#include "MyString.cpp"


int main() {
    //creating two instances of the class
    MyString s1("Gregory");
    MyString s2("Sveinbjornson");

    MyString s3 = s1 + s2;   //adding the strings together
        
    s3.Put();                //printing the added strings
    s3.Reverse();            //reversing the added string
    s3.Put();                //printing the reversed string


    
    return 0;
}