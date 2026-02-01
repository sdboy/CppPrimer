#include "PrimerExercises_2_18.h"

void PrimerExercises_2_18::primerExercises_2_18()
{
  int v1 = 2, v2 = 3;
  int* p = &v1;
  *p = 4;
  std::cout << "v1: " << v1 << std::endl;
  p = &v2;
  std::cout << "*p: " << *p << std::endl; 
}
