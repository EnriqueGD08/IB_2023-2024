 /**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Enrique Gómez Díaz
 * @date 29 noviembre 2023
 * @brief leer un archivo con operaciones matemáticas y dar su 
 * resultado en otro archivo de salida
 */

#include <iostream>
#include <fstream>
#include <string>

/**
* @brief funcion que comprueba parametros pasados por linea de comandos
* @param argc numero de parámetros que se pasan en linea de comandos
* @param argv[] vector con los parámetros puestos en la línea de comandos
* @return void
*/
void Usage(int argc, char *argv[]);

/**
* @brief funcion que realiza operacion entre dos numeros enteros 
* @param numero1 numero real
* @param numero2 numero real
* @param operador string con la operacion que se quiere hacer
* @return resultado de la operacion
*/
int operacion(const int numero1, const int numero2, const std::string& operador);

/**
* @brief funcion que detecta si el operador es aceptable o no
* @param operador operador que se quiere hacer
* @param numero2 entero para comprobar el denominador en la división
* @return si el operador es correcto o no 
*/
bool comprobar(const std::string& operador, const int numero2);