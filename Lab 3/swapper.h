#include <iostream>
using namespace std;

//creating the template
template <typename T>
class my_class					
{
	T x;   //changed int to template
	T y;	//changed int to template
public:
	my_class(T a, T b); //changed int to template
	void swapper();
	void printem();
};
