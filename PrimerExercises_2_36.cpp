#include "PrimerExercises_2_36.h"

void PrimerExercises_2_36::primerExercises_2_36()
{
  int a = 3, b = 4;
  decltype(a) c = a;
  decltype((b)) d = a;
  ++c;
  ++d;
  std::cout << "a: " << a << std::endl;
  std::cout << "b: " << b << std::endl;
  std::cout << "c: " << c << std::endl;
  std::cout << "d: " << d << std::endl;
  return;
}
