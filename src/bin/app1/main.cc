#include <iostream>
#include <lib1/myclass.hh>

int main() {
  One one;
  std::cout << "Because I do unit tests, I know that..."  << std::endl;
  std::cout << one.AsString() << " == One" << std::endl;
  std::cout << one.AsInteger() << " == 1" << std::endl;
  return 0;
}
