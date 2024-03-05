#include "PrimerExercises_3_23.h"

using std::cout;
using std::endl;
using std::vector;

void PrimerExercises_3_23::primerExercises_3_23()
{
  vector<int> nums(10, 2);
  for (auto itn = nums.begin(); itn != nums.end(); ++itn)
  {
    *itn = *itn * 2;
    cout << *itn << " ";
  }
  cout << endl;
  return;
}
