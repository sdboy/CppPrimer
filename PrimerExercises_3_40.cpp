#include "PrimerExercises_3_40.h"

using std::cout;
using std::endl;

void PrimerExercises_3_40::primerExercises_3_40()
{
  const char str1[] = "hello,";
  const char str2[] = "world!";
  size_t len = strlen(str1) + strlen(" ") + strlen(str2) + 1;
  char* str3 = new char[len];

  strcpy_s(str3, len, str1);
  strcat_s(str3, len, " ");
  strcat_s(str3, len, str2);
  cout << str3 << endl;
  delete[] str3;
  return;
}
