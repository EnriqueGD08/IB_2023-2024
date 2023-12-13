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

#include "cilindro.h"

#define PI 3.141592 

/**
 * @brief constructor por defecto de la clase cilindro
*/
cilindro::cilindro() {}

/**
 * @brief constructor de la clase cilindro
 * @param altura altura del cilindro
 * @param radio radio de la base del cilindo
*/
cilindro::cilindro(const float altura, const float radio) {
  altura_ = altura;
  radio_ = radio;
}

/**
 * @brief getter del radio de la base de un cilindro
 * @return radio de la base del cilindro
*/
float cilindro::get_radio() const {
  return radio_;
}

/**
 * @brief getter de la altura del cilindro
 * @return altura del cilindro
*/
float cilindro::get_altura() const {
  return altura_;
}

/**
 * @brief setter del radio de la base de un cilindro
 * @param radio de la base del cilindro
*/
void cilindro::set_radio(const float radio) {
  radio_ = radio;
}

/**
 * @brief setter de la altura del cilindro
 * @param altura altura del cilindro
*/
void cilindro::set_altura(const float altura) {
  altura_ = altura;
}

/**
 * @brief funcion que calcula el area de la superficie de un cilindro
 * @return area de la superficie del cilindro
*/
float cilindro::area() const {
  return (2.0 * PI * (radio_ + altura_));
}

/**
 * @brief funcion que calcula el volumen de un cilindro
 * @return volumen del cilindro
*/
float cilindro::volumen() const {
  return (PI * radio_ * radio_ * altura_);
}