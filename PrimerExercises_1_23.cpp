#include "PrimerExercises_1_23.h"

void PrimerExercises_1_23::primerExercises_1_23()
{
  Sales_item currItem, item;
  int cnt = 1;
  if (std::cin >> currItem)
  {
    while (std::cin >> item)
    {
      if (currItem.isbn() == item.isbn())
      {
        ++cnt;
      }
      else
      {
        std::cout << currItem.isbn() << " " << cnt << std::endl;
        cnt = 1;
        currItem = item;
      }
    }
    std::cout << currItem.isbn() << " " << cnt << std::endl;
  }
  return;
}
