#include "PrimerExercises_3_17.h"

using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::string;
using std::vector;

void PrimerExercises_3_17::primerExercises_3_17()
{
  string word;
  vector<string> strVec;
  while (cin >> word)
  {
    for (auto& c : word)
    {
      if (islower(c))
      {
        c = toupper(c);
      }
    }
    strVec.push_back(word);
  }
  if (strVec.size() < 1)
  {
    cerr << "no input" << endl;
    return;
  }
  for (auto str : strVec)
  {
    cout << str << endl;
  }
  return;
}
