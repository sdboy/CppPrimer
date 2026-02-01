#include "PrimerExercises_4_31.h"

using std::cin;
using std::cout;
using std::endl;
using std::vector;

void PrimerExercises_4_31::primerExercises_4_31()
{
  vector<int> ivec(5, 2);
  decltype(ivec.size()) cnt = ivec.size();
  for (decltype(ivec.size()) ix = 0; ix != ivec.size(); ix++, cnt--)
  {
    ivec[ix] = static_cast<int>(cnt);
    cout << ivec[ix] << " ";
  }
  cout << endl;
  return;
}
