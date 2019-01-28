//Faruqui, Nishat
//Week6 Loops HW Program #4

#include <iostream>
#include <string>
using namespace std;

main()
{
bool isPrime = true;
int number;
cout << "Enter a number: ";
cin >> number;

for (int i = 2; i < number - 1; i++)
    {
      if (number % i == 0)
      {
        isPrime = false;
        break;
      }
    }

if (isPrime)
    cout << number << " is a prime number.";
else
    cout << number << " is not a prime number";
cout << endl;
  return 0;
}
