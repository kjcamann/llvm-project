#include "foo.h"

int call_foo2() { return foo2(); }
// BR_Between
int
main() // !BR_main
{
  return call_foo1() + call_foo2();
}
