#include "PrimerExercises_3_41.h"

using std::cout;
using std::endl;
using std::vector;
using std::begin;
using std::end;

void PrimerExercises_3_41::primerExercises_3_41()
{
  int arr[10] = {};
  vector<int> ivec(begin(arr), end(arr));
  for (auto it = ivec.cbegin(); it != ivec.cend(); ++it)
  {
    cout << *it << " ";
  }
  cout << endl;
  return;
}
