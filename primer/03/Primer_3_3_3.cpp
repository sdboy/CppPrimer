#include "Primer_3_3_3.h"

using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::vector;

void Primer_3_3_3::primer_3_3_3()
{
  int score = 0;
  vector<int> seg(11, 0);
  while (cin >> score)
  {
    if (score < 0 || score > 100)
    {
      cerr << "illegal num" << endl;
      continue;
    }
    int s = score / 10;
    seg[s] += 1;
  }
  for (auto count : seg)
  {
    cout << count << " ";
  }
  cout << endl;
  return;
}
