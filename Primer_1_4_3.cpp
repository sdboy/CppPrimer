#include "Primer_1_4_3.h"

void Primer_1_4_3::primer_1_4_3()
{
  int sum = 0, value = 0;
  while (std::cin >> value)
  {
    sum += value;
  }
  std::cout << "Sum is: " << sum << std::endl;
  return;
}
