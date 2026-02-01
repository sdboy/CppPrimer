#include "UtilMod.h"

int UtilMod::getMod(int dividend, int divisor)
{
  double dividendf = dividend;
  double divisorf = divisor;
  if (divisor == 0)
  {
    std::cerr << "Divisor can't be 0" << std::endl;
    return 0;
  }
  else
  {
    double discuss = 0.0;
    discuss = dividendf / divisorf;
    int mod = 0;
    int multiple = 0;
    if (discuss == 0.0)
    {
      return mod;

    }
    else 
    {
      multiple = static_cast<int> (floor(discuss));
      mod = dividend - multiple * divisor;
      return mod;
    }
  }
}
