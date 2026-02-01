#include "PrimerExercises_4_21.h"

using std::cin;
using std::cout;
using std::endl;
using std::vector;

void PrimerExercises_4_21::primerExercises_4_21()
{
  vector<int> vec;
  int tmp = 0;
  while (cin >> tmp)
  {
    vec.push_back(tmp);
  }
  for (auto& i : vec)
  {
    i % 2 != 0 ? i *= 2 : i;
    cout << i << " ";
  }
  cout << endl;
  return;
}
