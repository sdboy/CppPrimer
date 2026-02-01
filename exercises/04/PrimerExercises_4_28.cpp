#include "PrimerExercises_4_28.h"

using std::cin;
using std::cout;
using std::endl;

void PrimerExercises_4_28::primerExercises_4_28()
{
  size_t sz[7] = {};
  sz[0] = sizeof(char);
  sz[1] = sizeof(short);
  sz[2] = sizeof(int);
  sz[3] = sizeof(long);
  sz[4] = sizeof(bool);
  sz[5] = sizeof(float);
  sz[6] = sizeof(double);
  for (auto i : sz)
  {
    cout << i << " ";
  }
  cout << endl;
  return;
}
