//Faruqui, Nishat
//Week6 Loops HW Program #5

#include <iostream>
#include <string>
using namespace std;

main()
{
const int NUMBER = 5;
int guess;

    do {
      cout << "Guess a number" << endl;
      cout << "--------------" << endl;
      cout << "Select an integer from 1 to 10: ";
      cin >> guess;
        {
          if (guess < 1 || guess > 10)
          cout << "Invalid input." << endl << endl;
          else if (guess != NUMBER)
          cout << "Incorrect guess. Try again." << endl << endl;
        }
    } while( guess != NUMBER);
    cout << "This is the correct number." << endl;

  return 0;
}
