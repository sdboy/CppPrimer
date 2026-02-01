#include "PrimerExercises_3_16.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

void PrimerExercises_3_16::primerExercises_3_16()
{
  vector<int> v1;
  cout << v1.size() << endl;
  vector<int> v2(10);
  cout << v2.size() << " " << v2[v2.size() - 1] << endl;
  vector<int> v3(10, 42);
  cout << v3.size() << " " << v3[v3.size() - 1] << endl;
  vector<int> v4{ 10 };
  cout << v4.size() << " " << v4[0] << endl;
  vector<int> v5{ 10, 42 };
  cout << v5.size() << " " << v5[1] << endl;
  vector<string> v6{ 10 };
  cout << v6.size() << endl;
  if (v6[3].empty())
  {
    cout << "null" << endl;
  }
  vector<string> v7{ 10, "hi" };
  cout << v7.size() << " " << v7[v7.size() - 1] << endl;
  return;
}
