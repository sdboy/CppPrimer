#include "PrimerExercises_3_2.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

void PrimerExercises_3_2::primerExercises_3_2_line()
{
  string lineStr;
  getline(cin, lineStr);
  cout << lineStr << endl;
  return;
}

void PrimerExercises_3_2::primerExercises_3_2_word()
{
  string word;
  cin >> word;
  cout << word << endl;
  return;
}
