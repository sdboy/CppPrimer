#include "PrimerExercises_3_20.h"

using std::cin;
using std::cout;
using std::endl;
using std::cerr;
using std::vector;

void PrimerExercises_3_20::primerExercises_3_20_1()
{
  int val = 0;
  vector<int> valVec;
  while (cin >> val)
  {
    valVec.push_back(val);
  }
  if (valVec.size() < 2)
  {
    cerr << "num more than one " << endl;
    return;
  }
  for (decltype(valVec.size()) i = 0; i < valVec.size() - 1; ++i)
  {
    cout << valVec[i] + valVec[i + 1] << endl;
  }
  return;
}

void PrimerExercises_3_20::primerExercises_3_20_2()
{
  int val = 0;
  vector<int> valVec;
  while (cin >> val)
  {
    valVec.push_back(val);
  }
  if (valVec.size() < 2)
  {
    cerr << "num more than one " << endl;
    return;
  }
  decltype(valVec.size()) len = valVec.size() / 2;
  for (decltype(valVec.size()) i = 0; i < len; ++i)
  {
    cout << valVec[i] + valVec[valVec.size() - i - 1] << endl;
  }
  return;
}
