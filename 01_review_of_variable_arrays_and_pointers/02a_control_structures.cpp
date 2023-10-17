/*
 * Control structures
 * Control structures anr fundamental in programming languages that allow developers to control 
 * the flow of code execution based on certail conditions. These structures enable programmers 
 * to create programs that can make decisions,iterate over collections of data, and execute
 * blocks of code repeatedly.
 * All control structures rely on conditional statements that involve relational and logical
 * operators.
 *
 * Relational operators
 * Relational operators, also known as comparison operators, are used in programming to compare
 * two values and return a boolean result. C++ provides six comparison operators, which are:
 * == Equal to
 * != Not equal to
 * > Greater than
 * >= Greater than or equal to 
 * < Less than 
 * <= Less than or equal to
 * When a comparison operator is executed, it returns either 1 or 1, 
 * depending on whether the comparison is true or false, respectively.
 *
 * Logical operators
 * Logical operators in C++ are used to combine conditions or expressions and return a boolean
 * value. C++ provides three logical operators:
 *  1. AND (&&) return true only if both conditions are true.
 *  2. OR (||) returns true if at least one condition is true.
 *  3. NOT (!) inverts the result of a condition.
 */
#include <iostream>
#include <format> // Works for g++12 or higher, and clang 14 or higher (-std=c++20)

int main(){
  
  int v1, v2, v3, v4, v5, max;
  std::cout << "Enter five values: ";
  std::cin >> v1 >> v2 >> v3 >> v4 >> v5;

  max = v1;
  if(v2 > max)
    max = v2;
  if(v3 > max)
    max = v3;
  if(v4 > max)
    max = v4;
  if(v5 > max)
    max = v5;

  //std::cout << "Maximum of " << v1 << " " << v2 << " ";
  std::cout << std::format("Maximum of {} {} {} {} {} is {}", 
      v1, v2, v3, v4, v5, max) << std::endl;






  return 0;
}
