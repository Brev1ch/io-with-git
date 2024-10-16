#include <iostream>
int main(){
 int a = 0;
 std::cin >> a;
 if (std::cin.good()){
  std::cerr << "Good!\n";
 }
 if (std::cin.eof()){
  std::cerr << "EOF!\n";
 }
 if (std::cin.fail()){
  std::cerr << "FAIL!\n";
 }
 if (std::cin.bad()){
  std::cerr << "Bad!\n";
 }
 std:: cout << a << "\n";
}
