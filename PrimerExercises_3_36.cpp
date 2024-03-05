#include "PrimerExercises_3_36.h"

using std::cout;
using std::endl;
using std::vector;
using std::begin;
using std::end;

void PrimerExercises_3_36::primerExercises_3_36_array()
{
  int arr1[5] = { 3,3,3,4,5 };
  int arr2[5] = { 3,3,3,5,5 };
  auto len1 = end(arr1) - begin(arr1);
  auto len2 = end(arr2) - begin(arr2);
  if (len1 == len2)
  {
    int* loe = end(arr1);
    int* p2 = begin(arr2);
    for (auto* p1 = begin(arr1); p1 < loe; ++p1)
    {
      if (*p1 == *p2)
      {
        ++p2;
      }
      else
      {
        cout << "not equal" << endl;
        return;
      }
    }
    cout << "equal" << endl;
    return;
  }
  cout << "not equal" << endl;
  return;
}

void PrimerExercises_3_36::primerExercises_3_36_vector()
{
  vector<int> vec1(5, 3);
  vector<int> vec2(4, 3);
  auto len1 = vec1.size();
  auto len2 = vec2.size();
  if (len1 == len2)
  {
    auto it2 = vec2.cbegin();
    for (auto it1 = vec1.cbegin(); it1 < vec1.cend(); ++it1)
    {
      if (*it1 == *it2)
      {
        ++it2;
      }
      else
      {
        cout << "not equal" << endl;
        return;
      }
    }
    cout << "equal" << endl;
    return;
  }
  cout << "not equal" << endl;
  return;
}
