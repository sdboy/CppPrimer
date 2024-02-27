#include "PrimerExercises_1_13_3.h"

void PrimerExercises_1_13_3::primerExercises_1_13_3()
{
  std::cout << "Please input two integer: " << std::endl;
  int v1 = 0, v2 = 0;
  std::cin >> v1 >> v2;
  int tmp1 = v1, tmp2 = v2;
  for (tmp1; tmp1 <= tmp2; ++tmp1)
  {
    std::cout << tmp1 << " ";
  }
  tmp1 = v1, tmp2 = v2;
  for (tmp1; tmp1 >= tmp2; --tmp1)
  {
    std::cout << tmp1 << " ";
  }
  std::cout << std::endl;
  return;
}
