#include "PrimerExercises_3_5.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

void PrimerExercises_3_5::primerExercises_3_5_conn()
{
  string str, longStr;
  while (cin >> str)
  {
    longStr += str;
  }
  cout << longStr << endl;
  return;
}

void PrimerExercises_3_5::primerExercises_3_5_space()
{
  string str, longStr;
  while (cin >> str)
  {
    if (longStr.empty())
    {
      longStr += str;
    }
    else
    {
      longStr += " " + str;
    }
  }
  cout << longStr << endl;
  return;
}
