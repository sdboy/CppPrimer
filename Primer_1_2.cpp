#include "Primer_1_2.h"

Primer_1_2::Primer_1_2()
{

}

Primer_1_2::~Primer_1_2()
{

}

void Primer_1_2::primer_1_2()
{
  std::cout << "Enter tow number:" << std::endl;
  int v1 = 0, v2 = 0;
  std::cin >> v1 >> v2;
  std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
  return;
}
