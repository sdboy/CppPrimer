#include "PrimerExercises_4_29.h"

using std::cout;
using std::endl;

void PrimerExercises_4_29::primerExercises_4_29()
{
  int x[10]; int* p = x;
  cout << sizeof(x) / sizeof(*p) << endl;
  cout << sizeof(p) / sizeof(*p) << endl;
  return;
}
