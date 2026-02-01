#include "PrimerExercises_3_42.h"

using std::cout;
using std::endl;
using std::vector;

void PrimerExercises_3_42::primerExercises_3_42()
{
  vector<int> ivec(10, 2);
  int arr[10] = {};
  int* p = arr;
  for (auto it = ivec.cbegin(); it != ivec.cend(); ++it)
  {
    *p = *it;
    ++p;
  }
  for (auto i : arr)
  {
    cout << i << " ";
  }
  cout << endl;
  return;
}
