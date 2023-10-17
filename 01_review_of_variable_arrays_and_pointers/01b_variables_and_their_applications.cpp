/*
 * Arithmetic operations
 * We can perform 5 different arithmetic operations on two operands of primitive types: addition,
 * subtraction, division, modulus (it can not work for float points), and multiplication.
 */
#include <iostream>

int main(){

  std::cout << "<<Integral types>>\n";
  int a = 5;
  int b = 4;
  int c = a + b;
  std::cout << "The value of a = " << a << "\n";
  std::cout << "The value of b = " << b << "\n";
  std::cout << "The sum of a and b is: = " << c << "\n";

  std::cout << "\n<<Float types>>\n";
  float aF = 5.1f;
  float bF = 4.0f;
  float cF = aF - bF;
  std::cout << "The value of aF = " << aF << "\n";
  std::cout << "The value of bF = " << bF << "\n";
  std::cout << "The difference of aF and bF is: " << cF << "\n";

  std::cout << "\n<<Double type>>\n";
  double aD = 5.0;
  double bD = 4.2;
  double cD = aD + bD;
  std::cout << "The value of aD = " << aD << "\n";
  std::cout << "The value of bD = " << bD << "\n";
  std::cout << "The sum of aD and bD is: " << cD << "\n";

  std::cout << "\n<<Long Long type>>\n";
  long long int aLL = 5;
  long long int bLL = 4;
  long long int cLL = aLL + bLL;
  std::cout << "The value of aLL = " << aLL << "\n";
  std::cout << "The value of bLL = " << bLL << "\n";
  std::cout << "The sum of aLL and bLL is: " << cLL << "\n";

  std::cout << "\n<<Char type>>\n";
  char aC = 'a';
  std::cout << "The value of char aC is: " << aC << "\n";




  return 0;
}
