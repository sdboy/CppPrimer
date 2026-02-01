#include "PrimerExercises_1_9.h"

void PrimerExercises_1_9::primerExercises_1_9()
{
  int sum = 0, val = 50;
  while (val <= 100)
  {
    sum += val;
    ++val;
  }
  std::cout << "Sum of 50 to 100 inclusive is "
    << sum << std::endl;
  return;
}
