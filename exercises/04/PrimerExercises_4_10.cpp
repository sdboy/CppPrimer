#include "PrimerExercises_4_10.h"

using std::cin;
using std::cout;
using std::endl;

void PrimerExercises_4_10::primerExercises_4_10()
{
  int val = 0;
  while (cin >> val && val != 42)
  {
    cout << val << " " << endl;
  }
  return;
}
