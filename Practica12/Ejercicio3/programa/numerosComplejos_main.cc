#include "numerosComplejos.h"

int main() {
  numeroComplejo n1(2.0, 3.0);
  numeroComplejo n2 (5.0, -4.0);
  std::cout << n1 << std::endl;
  std::cout << n2 << std::endl;
  std::cout << (n1 - n2) << std::endl;
  std::cout << (n1 + n2) << std::endl;

  return 0;
}