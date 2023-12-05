#include "crypto.h"

/**
 * @brief Encripta el mensaje.
 * @param mensaje Mensaje a encriptar.
 * @param numeroCrypto Número secreto utilizado para la codificación.
 */
void Encriptar(std::string& mensaje, const int numeroCrypto){
    for(int i = 0; i < mensaje.size(); i++){
        mensaje[i] = char((mensaje[i] + numeroCrypto) % 255);
    }
}

/**
 * @brief Desencripta el mensaje.
 * @param mensaje Mensaje a desencriptar.
 * @param numeroCrypto Número secreto utilizado para la codificación.
 */
void Desencriptar(std::string& mensaje, const int numeroCrypto){
    for(int i = 0; i < mensaje.size(); i++){
    if((mensaje[i] - numeroCrypto) < 0){
        mensaje[i] = char(((-1)*(mensaje[i] - numeroCrypto)) % 255);
    }
    mensaje[i] = char(mensaje[i] - numeroCrypto);
    }
}