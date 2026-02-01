#include "PrimerExercises_3_35.h"

using std::cout;
using std::endl;
using std::end;

void PrimerExercises_3_35::primerExercises_3_35()
{
  int val[5] = {3, 2, 5};
  int* loe = end(val);
  for (int* p = val; p < loe; ++p)
  {
    *p = 0;
  }
  for (auto i : val)
  {
    cout << i << " ";
  }
  cout << endl;
  return;
}
