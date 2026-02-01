#include "Primer_3_8.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

void Primer_3_8::primer_3_8_while()
{
  string str;
  cin >> str;
  auto len = str.size();
  decltype(str.size()) i = 0;
  while (i < len)
  {
    if (str[i] != 'X')
    {
      str[i] = 'X';
    }
    ++i;
  }
  cout << str << endl;
  return;
}

void Primer_3_8::primer_3_8_for()
{
  string str;
  cin >> str;
  auto len = str.size();
  for (decltype(str.size()) i = 0; i < len; i++)
  {
    if (str[i] != 'X')
    {
      str[i] = 'X';
    }
  }
  cout << str << endl;
  return;
}
