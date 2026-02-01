#include "PrimerExercises_3_25.h"

using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::vector;

void PrimerExercises_3_25::primerExercises_3_25()
{
  vector<int> seg(11, 0);
  int score = 0;
  while (cin >> score)
  {
    auto ss = score / 10;
    *(seg.begin() + ss) += 1;
  }
  if (seg.cbegin() == seg.cend())
  {
    cerr << "input score" << endl;
    return;
  }
  for (auto it = seg.cbegin(); it != seg.cend(); ++it)
  {
    cout << *(it) << " ";
  }
  cout << endl;
  return;
}
