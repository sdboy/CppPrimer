#include "PrimerExercises_1_16.h"

void PrimerExercises_1_16::primerExercises_1_16()
{
  std::cout << "Please input a numbers: ";
  int sum = 0, value = 0;
  while (std::cin >> value)
  {
    sum += value;
  }
  std::cout << "Sum is: " << sum << std::endl;
  return;
}
