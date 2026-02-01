#include "PrimerExercises_2_35.h"

void PrimerExercises_2_35::primerExercises_2_35()
{
  const int i = 42;
  auto j = i; 
  const auto& k = i;
  auto* p = &i;
  const auto j2 = i, & k2 = i;
  j = 32;
  std::cout << "j: " << j << std::endl;
  //k = 33;
  std::cout << "k: " << k << std::endl;
  //*p = 24;
  p = &j;
  std::cout << "p: " << *p << std::endl;
  //j2 = 34;
  //k2 = 22;
}
