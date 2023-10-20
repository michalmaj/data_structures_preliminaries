/*
 * Problem: performing prime factorization
 * Assume we're given a number n of the type int. Let's find the prime factors of n.
 * Two possible solutions:
 *  1. The first solution is using the single-loop approach to solve the problem.
 *  2. The second solution is using the nested-loop approach to solve the problem.
 */
#include <iostream>

int main(){
  // First approach
  int n;
  std::cout << "Enter value: ";
  std::cin >> n;
  int store = n;

  if(n > 1){
    int div = 2;
    while (n != 1){
      if(n % div == 0){
        std::cout << div;
        n /= div;
        if(n != 1)
          std::cout << " X ";
      }
      else 

        // Second approach
        div++;
    }
    std::cout << std::endl;
  }
  else 
    std::cout << "Should be a positive integer!\n";

  // Second approach
  n = store;
  if(n>1)
  {
    int div = 2;
    while(n != 1)
    {
      while(n % div == 0)
      {
        std::cout<< div;
        n = n / div;
        if(n != 1)
          std::cout<< " X ";
      }
      div++;  
    }
  }
  else
    std::cout << "Should be a positive integer!\n";


  return 0;
}
