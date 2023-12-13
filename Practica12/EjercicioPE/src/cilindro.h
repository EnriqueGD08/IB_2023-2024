/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Enrique Gómez Díaz
* @date 13 dic 2023
* @brief programa que crea un objeto cilindro con el radio de su base y la altura
*/

#include <iostream>

class cilindro {
  public:
  cilindro();
  cilindro(const float altura, const float radio);
  float get_radio() const;
  float get_altura() const;
  void set_radio(const float radio);
  void set_altura(const float altura);
  float area() const;
  float volumen() const;

  private:
  float altura_;
  float radio_;
};