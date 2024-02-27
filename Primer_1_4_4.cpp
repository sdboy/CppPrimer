#include "Primer_1_4_4.h"

void Primer_1_4_4::primer_1_4_4()
{
  int currVal = 0, val = 0;
  if (std::cin >> currVal)
  {
    int cnt = 1;
    while (std::cin >> val)
    {
      if (val == currVal)
      {
        ++cnt;
      }
      else
      {
        std::cout << currVal << " occurs "
          << cnt << " times" << std::endl;
        currVal = val;
        cnt = 1;
      }
    }
    std::cout << currVal << " occurs "
      << cnt << " times" << std::endl;
  }
  return;
}
