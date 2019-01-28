//Faruqui, Nishat
//Week6 Loops HW Program #3

#include <iostream>
#include <string>
using namespace std;

main()
{
int number;

cout << "Enter a number: ";
cin >> number;
cout << "Factors: ";

for(int i=1; i<= number; i++)
  {
    if (number % i == 0)
    cout << i << " ";
  }
  return 0;
}
