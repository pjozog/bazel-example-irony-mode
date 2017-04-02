#pragma once

#include <string>
#include <vector>

namespace hello_irony {

class HelloIrony {
 public:
  HelloIrony(const std::vector<std::string>& messages);

  void DoSometing() const;

 private:
  std::vector<std::string> messages_;
};

}  // namespace hello_irony
