#include <iostream>
#include "exercises_test.h"
#include "primer_test.h"

int main(int, char**){
    std::cout << "Hello, from CppPrimer!\n";
    //ExercisesTest::run_all_exercises();
    PrimerTest::run_all_tests();
    return 0;
}
