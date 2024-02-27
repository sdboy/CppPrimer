#include "Primer_1_4_1.h"

void Primer_1_4_1::primer_1_4_1()
{
  int sum = 0, val = 1;
  while (val <= 10)
  {
    sum += val;
    ++val;
  }
  std::cout << "Sum of 1 to 10 inclusive is "
    << sum << std::endl;
  return;
}