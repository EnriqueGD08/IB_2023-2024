#include "circulo.h"

int main() {
  point2d centro(3.0, 2.0);
  circulo circulo(centro, 2.0, Azul);
  circulo.Print();
  circulo.EsInterior(centro);

  return 0;
}