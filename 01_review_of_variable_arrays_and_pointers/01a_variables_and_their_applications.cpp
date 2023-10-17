#include <iostream>

int main(){
  // We define an int variable of 4 bytes. It can store integer values like 5, 0, -1
  int a_i = 5;
  std::cout << "a_i = " << a_i << R"( "size of a_i is:" )" << sizeof(a_i) << std::endl;

  // We define the variable int ia_li to store the very big value, which is not possible. So,
  // it will generate a warning of undefined behavior because of the memory overflow.
  int ia_li = 9898988998989889; // This line will generate warning and wrong value will be stored
  std::cout << "ia_li = " << ia_li << R"( - "overflow happend")" << '\n';

  // We define a long long int of 8 bytes, which can store the big integer value. This is as
  // large as eight-byte integer can store from -2^63 to +2^63 - 1.
  long long int a_li = 9898988998989889;
  std::cout << "a_li = " << a_li << R"( "size of a_li is:" )" << sizeof(a_li) << '\n';

  // We define a float varaible of four bytes, which can store real values like 2.3 and
  // 3,012.121.
  float a_f = 5.4f;
  std::cout << "a_f = " << a_f << R"( "size of a_f is:" )" << sizeof(a_f) << "\n";

  // We define a double varaible of eight bytes, which can store real values like 3,012.121 and
  // 10,143.90990.
  double a_d = 5.6;
  std::cout << "a_d = " << a_d << R"( "size of a_d is:" )" << sizeof(a_d) << "\n";

  // We define a char variable of one byte, which can store individual characters like 'a', 'b',
  // and '&'.
  char a_c = 'f';
  std::cout << "a_c = " << a_c << R"( "size of a_c is:" )" << sizeof(a_c) << "\n";

  return 0;
}
