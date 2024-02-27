#include "PrimerExercises_1_10.h"

void PrimerExercises_1_10::primerExercises_1_10()
{
  int val = 10;
  std::cout << "Integer between 10 and 0 is ";
  while (val >= 0)
  {
    std::cout << val << " ";
    --val;
  }
  std::cout << std::endl;
  return;
}