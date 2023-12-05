 /**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Enrique Gómez Díaz
 * @date 18 Oct 2023
 * @brief Este programa hace una tabla de la verdad de los operadores booleanos
 *
 */

#include <iostream>

int main() {
bool verdadero {true};
bool falso {false};
bool resultado;
// Tabla AND
  std::cout << "Tabla de la verdad de And " <<std:: endl;
  resultado = verdadero && verdadero;
  std::cout << "Verdadero y verdadero es " << resultado <<std:: endl;
  resultado = verdadero && falso;
  std::cout << "Verdadero y falso es " << resultado << std:: endl;
  resultado = falso && verdadero;
  std::cout << "Falso y verdadero es " << resultado << std:: endl;
  resultado = falso && falso;
  std::cout << "falso y falso es " << resultado << std:: endl;
  // Tabla OR
  std::cout << "Tabla de la verdad de Or " <<std:: endl;
  resultado = verdadero || verdadero;
  std::cout << "Verdadero y verdadero es " << resultado <<std:: endl;
  resultado = verdadero || falso;
  std::cout << "Verdadero y falso es " << resultado << std:: endl;
  resultado = falso || verdadero;
  std::cout << "Falso y verdadero es " << resultado << std:: endl;
  resultado = falso || falso;
  std::cout << "falso y falso es " << resultado << std:: endl;
  // Tabla Not
  std::cout << "Tabla de la verdad de Or " <<std:: endl;
  std::cout << verdadero << !verdadero <<std:: endl;
  std::cout << falso << !falso << std:: endl;
  return 0;

}
