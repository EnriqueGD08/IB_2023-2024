#include "circulo.h"

circulo::circulo(){}

circulo::circulo(point2d centro, float radio, color color) {
  set_centro(centro);
  set_radio(radio);
  set_color(color);
}

void circulo::set_centro(point2d centro) {
  centro_ = centro;
}

void circulo::set_radio(float radio) {
  radio_ = radio;
}

void circulo::set_color(color color) {
  color_ = color;
}

point2d circulo::get_centro() {
  return centro_;
}

float circulo::get_radio() {
  return radio_;
}

color circulo::get_color() {
  return color_;
}

float circulo::Area() {
  return radio_ * radio_ * PI;
}

float circulo::Perimetro() {
  return 2.0 * radio_ * PI;
}

void circulo::Print() {
  std::cout << "Centro = ";
  centro_.Show();
  std::cout << "Radio = " << radio_ << std::endl;
  std::cout << "Color = " << color_ << std::endl;
  std::cout << "Area = " << Area() << std::endl;
  std::cout << "Perimetro = " << Perimetro() << std::endl; 
}

bool circulo::EsInterior(point2d punto) {
  if(centro_.Distance(punto) <= radio_){
    std::cout << "El punto está dentro del círculo" << std::endl;
    return true;
  }
  std::cout << "El punto no está dentro del círculo" << std::endl;
  return false;
}