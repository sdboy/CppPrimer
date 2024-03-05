#include "PrimerExercises_3_24.h"

using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::vector;

void PrimerExercises_3_24::primerExercises_3_24_1()
{
  int val = 0;
  vector<int> nums;
  while (cin >> val)
  {
    nums.push_back(val);
  }
  if (nums.cend() - nums.cbegin() < 2)
  {
    cerr << "num more than one" << endl;
    return;
  }
  auto itn = nums.cbegin();
  while (nums.cend() - itn > 1)
  {
    cout << *itn + *(itn + 1) << " ";
    ++itn;
  }
  cout << endl;
  return;
}

void PrimerExercises_3_24::primerExercises_3_24_2()
{
  int val = 0;
  vector<int> nums;
  while (cin >> val)
  {
    nums.push_back(val);
  }
  if (nums.cend() - nums.cbegin() < 2 )
  {
    cerr << "num more than one" << endl;
    return;
  }
  auto beg = nums.cbegin();
  auto end = nums.cend() - 1;
  while (end - beg > 0)
  {
    cout << *beg + *end << " ";
    ++beg;
    --end;
  }
  cout << endl;
  return;
}
