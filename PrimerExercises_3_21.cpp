#include "PrimerExercises_3_21.h"

using std::cin;
using std::cout;
using std::endl;
using std::cerr;
using std::vector;
using std::string;

void PrimerExercises_3_21::primerExercises_3_21()
{
  vector<int> v1;
  if (v1.cbegin() == v1.cend())
  {
    cout << "null" << endl;
  }
  vector<int> v2(10);
  for (auto vt = v2.cbegin(); vt != v2.cend(); ++vt)
  {
    cout << *vt << " ";
  }
  cout << endl;
  vector<int> v3(10, 42);
  for (auto vt = v3.cbegin(); vt != v3.cend(); ++vt)
  {
    cout << *vt << " ";
  }
  cout << endl;
  vector<int> v4{ 10 };
  for (auto vt = v4.cbegin(); vt != v4.cend(); ++vt)
  {
    cout << *vt << " ";
  }
  cout << endl;
  vector<int> v5{ 10, 42 };
  for (auto vt = v5.cbegin(); vt != v5.cend(); ++vt)
  {
    cout << *vt << " ";
  }
  cout << endl;
  vector<string> v6{ 10 };
  for (auto vt = v6.cbegin(); vt != v6.cend() && (*vt).empty(); ++vt)
  {

    cout << "null ";
  }
  cout << endl;
  vector<string> v7{ 10, "hi" };
  for (auto vt = v7.cbegin(); vt != v7.cend(); ++vt)
  {
    cout << *vt << " ";
  }
  cout << endl;
  return;
}
