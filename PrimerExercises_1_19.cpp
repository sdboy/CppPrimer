#include "PrimerExercises_1_19.h"

void PrimerExercises_1_19::primerExercises_1_19()
{
  std::cout << "Please input two integer: ";
  int v1 = 0, v2 = 0;
  std::cin >> v1 >> v2;
  std::cout << std::endl;
  std::cout << "Integer between " << v1 << " to " << v2 << " is: ";
  if (v1 > v2)
  {
    while (v1 >= v2)
    {
      std::cout << v1 << " ";
      --v1;
    }
  }
  else
  {
    while (v1 <= v2)
    {
      std::cout << v1 << " ";
      ++v1;
    }
  }
  std::cout << std::endl;
  return;
}
