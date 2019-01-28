//Faruqui, Nishat
//Week6 Loops HW Program #2

#include <iostream>
using namespace std;

int main()
{
  int number;
  int exponent;
  int num2 = 1;

  cout << "Enter a number: ";
  cin  >> number;
  cout << "Enter an exponent: ";
  cin  >> exponent;

  for (int i = 1; i <= exponent; i++)
      num2 *= number;
      cout << number << " to the power of " << exponent << " is "<< num2 << "." << endl;

    return 0;
}
