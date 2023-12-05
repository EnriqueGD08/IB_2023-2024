#include <iostream>
#include <fstream>
#include <string>

/**
 * @brief Encripta el mensaje.
 * @param mensaje Mensaje a encriptar.
 * @param numeroCrypto Número secreto utilizado para la codificación.
 */
void Encriptar(std::string& mensaje, const int numeroCrypto);

/**
 * @brief Desencripta el mensaje.
 * @param mensaje Mensaje a desencriptar.
 * @param numeroCrypto Número secreto utilizado para la codificación.
 */
void Desencriptar(std::string& mensaje, const int numeroCrypto);

