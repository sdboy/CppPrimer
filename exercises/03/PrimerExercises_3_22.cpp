#include "PrimerExercises_3_22.h"

using std::cin;
using std::cout;
using std::endl;
using std::cerr;
using std::string;
using std::vector;

void PrimerExercises_3_22::primerExercises_3_22()
{
  vector<string> text;
  string str;
  while (getline(cin, str))
  {
    text.push_back(str);
  }
  text.push_back("");
  text.push_back("the end.");
  for (auto itw = text.begin(); itw != text.end() && !itw->empty(); ++itw)
  {
    for (auto itc = (*itw).begin(); itc != (*itw).end(); ++itc)
    {
      if (islower(*itc))
      {
        *itc = toupper(*itc);
      }
    }
    cout << *itw << endl;
  }
  return;
}
