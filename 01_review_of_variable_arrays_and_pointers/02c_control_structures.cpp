/*
 * The switch statement
 * In a switch statement,the expression or variable being evaluated can be any valid cardinal or 
 * ordinal expression or variable.This means it can be a literal value, a variable, or an integer
 * result of an expression (can't be a floating value). The key points is that the value of the 
 * expression or variable determines which case statement is executed.
 * Note: The break statement is essential in the switch statement. If we don't write break at the 
 * end of a case, the execution control falls through, meaning that the code for subsequente 
 * cases will be executed regardless of whether they match the expression's result or not, 
 * including the dedefault case.
 */
// Example: Calculating the grades of students
// Calculating the students' grades using the given marks and the distribution of grades is as
// follows A - between 90 and 100, B - between 80 and 89, C - between 70 and 79, D - between 60 
// and 69, E - between 50 and 59, F - below 50.
#include <iostream>

int main(){

  // Define the marks variable that determines the students' marks.
  int marks;
  std::cout << "Enter your marks: ";
  std::cin >> marks;

  // Evaluate the condition to ensure the given marks are in the 0-100 range.
  if(marks <= 100 and marks >= 0){
    // Apply the switch statement to the expression marks/10. For case 9 and case 10, it'll give 
    // the A grade because of the integer division.
    switch(marks / 10){
      case 10:
      case 9: // for 90 to 100
        std::cout << "A\n";
        break;
      case 8: // for 80 to 89
        std::cout << "B\n";
        break;
      case 7: // for 70 to 79
        std::cout << "C\n";
        break;
      case 6: // from 60 to 69
        std::cout << "D\n";
        break;
      case 5: // from 50 to 59
        std::cout << "E\n";
        break;
      dedefault:
        std::cout << "F\n";
        break;
    }
  }
  else{
    std::cout << "Wrong marks entered\n";
  }

  return 0;
}
