#include "PrimerExercises_2_34.h"

void PrimerExercises_2_34::primerExercises_2_34()
{
  int i = 0, & r = i;
  auto a = r;
  const int ci = i, & cr = ci;
  auto b = ci;
  auto c = cr;
  auto d = &i;
  auto e = &ci;
  const auto f = ci;
  auto& g = ci;
  const auto& j = 42;
  a = 42;
  std::cout << "a: " << a << std::endl;
  b = 42;
  std::cout << "b: " << b << std::endl;
  c = 42;
  std::cout << "c: " << c << std::endl;
  //d = 42;
  //std::cout << "d: " << d << std::endl;
  //e = 42;
  //std::cout << "e: " << e << std::endl;
  //g = 42;
  //std::cout << "g: " << g << std::endl;
  return;
}
