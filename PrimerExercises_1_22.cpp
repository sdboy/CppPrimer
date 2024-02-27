#include "PrimerExercises_1_22.h"

void PrimerExercises_1_22::primerExercises_1_22()
{
  Sales_item sum, item;
  int cnt = 1;
  while (std::cin >> item)
  {
    if (cnt == 1)
    {
      sum = item;
      cnt = 0;
    }
    else
    {
      sum += item;
    }
  }
  std::cout << sum << std::endl;
  return;
}
