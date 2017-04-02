#include "hello_irony/my_class.h"

namespace hi = hello_irony;

int main() {
  hi::HelloIrony hello({"Hello world", "How are you?", "This is a test"});
  hello.DoSometing();
  return 0;
}
