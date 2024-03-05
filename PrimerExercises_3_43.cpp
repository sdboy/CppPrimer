#include "PrimerExercises_3_43.h"

using std::cout;
using std::endl;
using std::begin;
using std::end;

void PrimerExercises_3_43::primerExercises_3_43_for()
{
  int ia[3][4] = { 3,4,2,1,54,23,54,22,54,1,54,11 };
  for (int (&i)[4] : ia)
  {
    for (int j : i)
    {
      cout << j << " ";
    }
    cout << endl;
  }
  return;
}

void PrimerExercises_3_43::primerExercises_3_43_index()
{
  int ia[3][4] = { 3,4,2,1,54,23,54,22,54,1,54,11 };
  for (size_t ri = 0; ri < 3; ++ri)
  {
    for (size_t ci = 0; ci < 4; ++ci)
    {
      cout << ia[ri][ci] << " ";
    }
    cout << endl;
  }
  return;
}

void PrimerExercises_3_43::primerExercises_3_43_pointer()
{
  int ia[3][4] = { 3,4,2,1,54,23,54,22,54,1,54,11 };
  for (int(*pr)[4] = begin(ia); pr != end(ia); ++pr)
  {
    for (int* pc = begin(*pr); pc != end(*pr); ++pc)
    {
      cout << *pc << " ";
    }
    cout << endl;
  }
  return;
}
