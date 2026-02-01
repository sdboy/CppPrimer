#include "PrimerExercises_4_11.h"

using std::cin;
using std::cout;
using std::endl;
using std::begin;
using std::end;

void PrimerExercises_4_11::primerExercises_4_11()
{
  int arr[4] = {};
  int tmp = 0;
  int* p = arr;
  while (p != end(arr) && cin >> tmp)
  {
    *p = tmp;
    ++p;
  }
  for (auto it = begin(arr); it != end(arr); ++it)
  {
    tmp = 0;
    auto con = it - begin(arr) + 1;
    for (auto ia = begin(arr); ia != end(arr) - con; ++ia)
    {
      if (*ia < *(ia + 1))
      {
        tmp = *(ia + 1);
        *(ia + 1) = *ia;
        *ia = tmp;
      }
    }
  }
  for (auto i : arr)
  {
    cout << i << " ";
  }
  cout << endl;
  return;
}
