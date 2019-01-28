//Faruqui, Nishat
//Week6 Loops HW Program #6

#include <iostream>
#include <string>
using namespace std;

main()
{

int min;
int max;

do {
    cout << "Enter a minimum value between 1 and 100: ";
    cin >> min;
    cout << "Enter maximum value between 1 and 100: ";
    cin >> max;
    {
      if (max < min)
      cout << "\nMaximum value must be greater than minimum value." << endl << endl;
      else if (min < 1 || max > 100)
      cout << "\nValues must be within specified range." << endl << endl;
    }

  } while(min < 1 || max > 100 || max < min);
    {
      cout << endl;
      for (int i = min; i <= max; i++)
      cout << i << " ";
    }

cout << endl;
  return 0;
}
