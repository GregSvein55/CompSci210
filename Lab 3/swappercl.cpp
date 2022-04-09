#include "swapper.h"

//creating the template
template <typename T>
my_class<T>::my_class(T a, T b)			//changed int to template
{
	x = a;
	y = b;
}

//creating the template
template <typename T>
void my_class<T>::swapper()
{
	T TempVal = x;			//changed int to template
	x = y;
	y = TempVal;
}

//creating the template
template <typename T>
void my_class<T>::printem() {
	cout << "First value is: " << x << " Second value is: " << y << endl;
}


//defining templates as shown in hint
template class my_class <int>;
template class my_class <char>;
template class my_class <double>;