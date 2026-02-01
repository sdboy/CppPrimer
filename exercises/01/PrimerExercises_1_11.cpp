#include "PrimerExercises_1_11.h"

void PrimerExercises_1_11::primerExercises_1_11()
{
  std::cout << "Please input two integer: " << std::endl;
  int v1 = 0, v2 = 0;
  std::cin >> v1 >> v2;
  int tmp1 = v1, tmp2 = v2;
  std::cout << "Integer between " << v1 << " and " << v2 << " is ";
  while (tmp1 >= tmp2)
  {
    std::cout << tmp1 << " ";
    --tmp1;
  }
  tmp1 = v1, tmp2 = v2;
  while (tmp1 <= tmp2)
  {
    std::cout << tmp1 << " ";
    ++tmp1;
  }
  std::cout << std::endl;
  return;
}
