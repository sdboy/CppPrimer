#include "Primer_3_15.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

void Primer_3_15::primer_3_15()
{
  vector<string> strVec;
  string str;
  while (cin >> str)
  {
    strVec.push_back(str);
  }
  cout << strVec.size() << endl;
  cout << strVec[strVec.size() - 1] << endl;
  return;
}
