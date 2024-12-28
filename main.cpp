#include <iostream>
#include "calculator.h"

int main() {
    Calculator calc;
    
    double a = 5.5, b = 2.5;
    
    std::cout << "Addition: " << calc.Add(a, b) << std::endl;
    std::cout << "Subtraction: " << calc.Sub(a, b) << std::endl;
    
    return 0;
}
