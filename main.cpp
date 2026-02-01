#include <iostream>
#include "exercises_test.h"

int main(int, char**){
    std::cout << "Hello, from CppPrimer!\n";
    ExercisesTest::run_all_exercises();
    return 0;
}
