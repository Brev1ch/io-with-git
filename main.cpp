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
 if (std::cin.bad()){
  std::cerr << "BAD!\n";
 }
 if (std::cin.fail()){
  std::cerr << "FAIL!\n";
  std::cin.clear();
  std::cin.ignore(1);
  std::cin >> a;
 }
 std:: cout << a << "\n";
}
