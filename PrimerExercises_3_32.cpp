#include "PrimerExercises_3_32.h"

using std::cout;
using std::endl;
using std::vector;

void PrimerExercises_3_32::primerExercises_3_32_copy()
{
  int val1[10], val2[10];
  for (size_t i = 0; i < 10; ++i)
  {
    val1[i] = static_cast<int>(i);
  }
  size_t index = 0;
  for (int i : val1)
  {
    val2[index] = i;
    cout << val2[index] << " ";
    ++index;
  }
  cout << endl;
  return;
}

void PrimerExercises_3_32::primerExercises_3_32_vector()
{

  int val1[10];
  vector<int> val2;
  for (size_t i = 0; i < 10; ++i)
  {
    val1[i] = static_cast<int>(i);
  }
  for (int i : val1)
  {
    val2.push_back(i);
    cout << val2[val2.size() - 1] << " ";
  }
  cout << endl;
  return;
}
