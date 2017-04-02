#include "hello_irony/my_class.h"

#include <iostream>

namespace hello_irony {

HelloIrony::HelloIrony(const std::vector<std::string>& messages)
    : messages_(messages) {}

void HelloIrony::DoSometing() const {
  for (const auto& message : messages_) {
    std::cout << message << std::endl;
  }
}

}  // namespace hello_irony
