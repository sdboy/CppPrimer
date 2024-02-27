#include "Primer_1_5_2.h"

void Primer_1_5_2::primer_1_5_2()
{
  Sales_item item1, item2;
  std::cin >> item1 >> item2;
  if (item1.isbn() == item2.isbn())
  {
    std::cout << item1 + item2 << std::endl;
  }
  else
  {
    std::cerr << "Data must refer to same ISBN" << std::endl;
  }
  return;
}
