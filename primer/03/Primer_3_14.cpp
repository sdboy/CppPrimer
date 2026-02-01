#include "Primer_3_14.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

void Primer_3_14::primer_3_14()
{
  int val = 0;
  vector<int> cont;
  while (cin >> val)
  {
    cont.push_back(val);
  }
  cout << cont.size() << endl;
  cout << cont[cont.size() - 1] << endl;
  return;
}
