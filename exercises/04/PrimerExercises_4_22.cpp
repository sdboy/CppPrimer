#include "PrimerExercises_4_22.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

void PrimerExercises_4_22::primerExercises_4_22_if()
{
  int grade = 0;
  string score;
  while (cin >> grade)
  {
    if (grade > 90)
    {
      score = "high pass";
    }
    else if (grade <= 90 && grade > 75)
    {
      score = "pass";

    }
    else if (grade <= 75 && grade >= 60)
    {
      score = "low pass";
    }
    else
    {
      score = "fail";
    }
    cout << score << endl;
  }
  return;
}

void PrimerExercises_4_22::primerExercises_4_22_cond()
{
  int grade = 0;
  string score;
  while (cin >> grade)
  {
    score = grade > 90 ? "high pass" : grade < 60 ?
      "fail" : grade > 75 ? "pass" : "low pass";
    cout << score << endl;
  }
  return;
}
