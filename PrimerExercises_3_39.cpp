#include "PrimerExercises_3_39.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

void PrimerExercises_3_39::primerExercises_3_39_str()
{
  string str1 = "23";
  string str2 = "2";
  if (str1 == str2)
  {
    cout << str1 << " == " << str2 << endl;
  }
  else if (str1 < str2)
  {
    cout << str1 << " < " << str2 << endl;
  }
  else
  {
    cout << str1 << " > " << str2 << endl;
  }
  return;
}

void PrimerExercises_3_39::primerExercises_3_39_cstr()
{
  const char str1[] = { 'c','d','\0' };
  const char str2[] = { 'c','\0' };
  if (strcmp(str1, str2) == 0)
  {
    cout << "str1 == str2" << endl;
  }
  else if (strcmp(str1, str2) > 0)
  {
    cout << "str1 > str2" << endl;
  }
  else
  {
    cout << "str1 < str2" << endl;
  }
  return;
}
