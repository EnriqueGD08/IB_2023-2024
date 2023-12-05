#include <iostream>
#include <istream>
#include <ostream>
#include <vector>
#pragma once

/**
 * @brief Cuenta el número de vocales de una palabra.
 * @param palabra Palabra a la que se le va a contar las vocales.
 * @return Número de vocales de la palabra.
 */
int ContadorVocales(const std::string& palabra);

/**
 * @brief Cuenta el número de consonantes de una palabra.
 * @param palabra Palabra a la que se le va a contar las consonantes.
 * @return Número de consonantes de la palabra.
 */
int ContadorConsonantes(const std::string& palabra);