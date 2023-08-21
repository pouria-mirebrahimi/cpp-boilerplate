#include <iostream>
#include <limits>
#include <memory>

int main(int argc, const char **argv) {
  auto min = std::numeric_limits<long long>::min();
  std::cout << "limits (min) " << min << std::endl;

  /// REVIEW[epic=test, seq=2] - add some more data
  double numbers[] {0.2, 0.9, 2.4, 3};
  for(auto num : numbers) {
    std::cout
      << std::boolalpha
      << (static_cast<int>(num) > 0)
      << std::endl;
  }

  auto ptr = std::make_shared<int>();
  auto xptr = std::unique_ptr<std::string>();

  /** FIXME[epic=test, seq=0] - test fixme
      in this scenario we can handle much cases
  */
  /// LINK - src/app/CMakeLists.txt:11

  /// NOTE - add more comments

  return 0;
}
