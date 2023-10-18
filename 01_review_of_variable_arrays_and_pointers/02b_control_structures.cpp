/*
 * The if-else statement
 * An if-else statement is a programming construct that allows us to execute a block of code if a 
 * certain condition is true,and another block of code if the condition if false. The blocks of
 * code can consist of a single instruction or multiple instructions. If we only have one 
 * instruction in a block, we can chose to omit the block delimiters (the {} that surround the 
 * block of code).
 */

// Example: Letter case conversion
// We can use the ASCII values to solve this problem. Characters are stored as ASCII values in 
// the char data type. For example, 'A' has ASCII value of 65, 'B' has an ASCII value of 66, and 
// so on. Similarly, 'a' has an ASCII value of 87, 'b' has an ASCII value of 98, and so on. The 
// difference between the ASCII values of uppercase and lowercase letters occurs 32.

#include <iostream>

int main(){

  char c;
  std::cout << "Enter a character: ";
  std::cin >> c;
  std::cout << "Convert the character: '" << c << "' into alternative case\n";

  if(c >= 'a' and c <= 'z')
    c -= ('a' - 'A');
  else if(c >= 'A' and c <= 'Z')
    c += ('a' - 'A');

  std::cout << "The converted version of character c is: " << c << std::endl;

  return 0;
}
