#include "Primer_3_7.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

void Primer_3_7::primer_3_7()
{
  string str;
  cin >> str;
  for (char c : str)
  {
    if (c != 'X')
    {
      c = 'X';
    }
  }
  cout << str << endl;
  return;
}
