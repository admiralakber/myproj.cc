#include <lib1/myclass.hh>
#include <cassert>
#include <type_traits>

int main() {
  One one;

  assert( (std::is_same<decltype(one.AsInteger()), int> ));
  assert(one.AsInteger() == 1);
  assert(std::strcmp(one.AsString(), "One"));

  return 0;
}
