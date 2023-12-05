#include <iostream>
#include "point2d.h"

#define PI 3.141592

enum color {Rojo, Azul, Negro, Blanco, Gris, Verde, Marron, Rosa, Violeta, Naranja, Amarillo};

class circulo : point2d {
  public:
  circulo();
  circulo(point2d centro, float radio, color color);
  void set_centro(point2d centro);
  void set_radio(float radio);
  void set_color(color color);
  point2d get_centro();
  float get_radio();
  color get_color();
  float Area();
  float Perimetro();
  void Print();
  bool EsInterior(point2d punto);

  private:
  point2d centro_;
  float radio_;
  color color_;
};