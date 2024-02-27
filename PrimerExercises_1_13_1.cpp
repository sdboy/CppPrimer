#include "PrimerExercises_1_13_1.h"

void PrimerExercises_1_13_1::primerExercises_1_13_1()
{
  std::cout << "Sum of 50 to 100 inclusive is ";
  int sum = 0;
  for (int i = 50; i <= 100; ++i)
  {
    sum += i;
  }
  std::cout << sum << std::endl;
  return;
}
