#include "PrimerExercises_3_31.h"

using std::cout;
using std::endl;

void PrimerExercises_3_31::primerExercises_3_31()
{
  int val[10];
  for (size_t i = 0; i < 10; ++i)
  {
    val[i] = static_cast<int>(i);
    cout << val[i] << " ";
  }
  cout << endl;
  return;
}
