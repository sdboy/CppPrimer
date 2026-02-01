#include "Primer_3_10.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

void Primer_3_10::primer_3_10()
{
  string str, resultStr;
  cin >> str;
  for (auto c : str)
  {
    if (!ispunct(c))
    {
      resultStr += c;
    }
  }
  cout << resultStr << endl;
  return;
}
