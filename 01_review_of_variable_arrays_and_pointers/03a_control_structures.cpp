/*
 * Loops
 * Loops are used when we need to execute one or more statements repeatedly within the same scope.
 * There are three types of loops: while,for, and do-while loops.
 *
 * The while loop
 * A while loop is often preffered when the number of loop iterations is unknown is advice, and 
 * the loop continues until a certain condition is met. The advantage of a while loop is that it 
 * allows for greater flexibility in controlling the termination of the loop based on the 
 * condition that is evaluated in runtime.
 */
// Example: Digi summation
// Let's write a program that calculates the sum of the digits of the given number 
#include <iostream>
#include <cmath>

int main(){
  int n;
  std::cout << "Enter number: ";
  std::cin >> n;
  
  // If number is negative convert to positive
  n = std::abs(n);

  int store = n; // To keep original value
  int sum = 0;

  while(n>0){
    sum += n % 10;
    n/=10;
  }
  n = store; // this instruction is added because m has zero at the end of the loop 
  std::cout << "Sum of digits of " << n << " is: " << sum << std::endl;

  return 0;
}

