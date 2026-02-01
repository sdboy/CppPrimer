#include "PrimerExercises_3_4.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

void PrimerExercises_3_4::primerExercises_3_4_bigger()
{
  string str1, str2;
  cin >> str1 >> str2;
  if (str1 != str2)
  {
    if (str1 > str2)
    {
      cout << str1 << endl;
    }
    else
    {
      cout << str2 << endl;
    }
  }
  else
  {
    cout << str1 << endl;
  }
  return;
}

void PrimerExercises_3_4::primerExercises_3_4_longger()
{
  string str1, str2;
  cin >> str1 >> str2;
  if (str1.size() != str2.size())
  {
    if (str1.size() > str2.size())
    {
      cout << str1 << endl;
    }
    else
    {
      cout << str2 << endl;
    }
  }
  else
  {
    cout << str1 << endl;
  }
  return;
}
