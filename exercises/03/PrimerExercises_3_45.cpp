#include "PrimerExercises_3_45.h"

using std::cout;
using std::endl;
using std::begin;
using std::end;

void PrimerExercises_3_45::primerExercises_3_45_for()
{
  int ia[3][4] = { 3,4,2,1,54,23,54,22,54,1,54,11 };
  for (auto& i : ia)
  {
    for (auto j : i)
    {
      cout << j << " ";
    }
    cout << endl;
  }
  return;
}

void PrimerExercises_3_45::primerExercises_3_45_index()
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

void PrimerExercises_3_45::primerExercises_3_45_pointer()
{
  int ia[3][4] = { 3,4,2,1,54,23,54,22,54,1,54,11 };
  for (auto* pr = begin(ia); pr != end(ia); ++pr)
  {
    for (auto* pc = begin(*pr); pc != end(*pr); ++pc)
    {
      cout << *pc << " ";
    }
    cout << endl;
  }
  return;
}
