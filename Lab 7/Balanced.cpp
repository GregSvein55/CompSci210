//filename: Balanced.cpp
#include "StackType.h"
#include <iostream>
 using namespace std;

bool IsOpen(char symbol);
bool IsClosed(char symbol);
bool Matches(char symbol, char openSymbol);

int main()
{
  char symbol;
  StackType stack;
  bool balanced = true;
  char openSymbol;
  try  //try statement includes the whole main function
  {
      cout << "Enter an expression and press return." << endl;
      cin.get(symbol);

      while (symbol != '\n' && balanced)
      {
          if (IsOpen(symbol))
              stack.Push(symbol);

          else if (IsClosed(symbol))
          {
              if (stack.IsEmpty())
                  balanced = false;
              else
              {
                  openSymbol = stack.Top();
                  stack.Pop();
                  balanced = Matches(symbol, openSymbol);
              }
          }
          cin.get(symbol);
      }

      //checking if balanced is true AND if stack is empty
      if ((balanced == true) && (stack.IsEmpty()))
          cout << "Expression is well formed." << endl;     //telling the user its well formed
      else if ((!stack.IsEmpty()) && (balanced == true))
          cout << "Expression is not well formed." << endl; //telling the user it is not well formed
      else
          cout << "Expression is not well formed." << endl; //telling the user it is not well formed

  }
  catch (FullStack)  //catching the stack
  {
      cout << "Expression is not well formed." << endl; //telling the user it is not well formed
  }
    

  return 0;
}
    
bool IsOpen(char symbol)
{
  if (symbol == '(' || symbol == '{' || symbol == '[')
    return true;
  else
    return false;
}      

bool IsClosed(char symbol)
{
  if (symbol == ')' || symbol == '}' || symbol == ']')
    return true;
  else
    return false;
}      

bool Matches(char symbol, char openSymbol)
{
  return  ((openSymbol == '(' && symbol == ')')
        || (openSymbol == '{' && symbol == '}')
        || (openSymbol == '[' && symbol == ']'));
}        

