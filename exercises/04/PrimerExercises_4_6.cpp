#include "PrimerExercises_4_6.h"

using std::cin;
using std::cout;
using std::endl;

void PrimerExercises_4_6::primerExercises_4_6()
{
  int val = 0;
  while (cin >> val)
  {
    if (val % 2 == 0)
    {
      cout << val << " is even number" << endl;
    }
    else
    {
      cout << val << " is odd number" << endl;
    }
  }
  return;
}
