#include "Primer_3_6.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

void Primer_3_6::primer_3_6()
{
  string str;
  cin >> str;
  for (auto& c : str)
  {
    if (c != 'X')
    {
      c = 'X';
    }
  }
  cout << str << endl;
  return;
}
