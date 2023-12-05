#include <iostream>
#include "Ejercicio1.h"
#pragma once

/**
 * @brief Cuenta el número de vocales de una palabra.
 * @param palabra Palabra a la que se le va a contar las vocales.
 * @return Número de vocales de la palabra.
 */
int ContadorVocales(const std::string& palabra){
    int vocales = 0;
    for(int i = 0; i < palabra.size(); i++){
        if(palabra[i] == 97 || palabra[i] == 101 || palabra[i] == 105 || palabra[i] == 111
        || palabra[i] == 117 || palabra[i] == 65 || palabra[i] == 69 || palabra[i] == 73
        || palabra[i] == 79 || palabra[i] == 85){
        vocales++;
        }
    } 

    return vocales;
}

/**
 * @brief Cuenta el número de consonantes de una palabra.
 * @param palabra Palabra a la que se le va a contar las consonantes.
 * @return Número de consonantes de la palabra.
 */
int ContadorConsonantes(const std::string& palabra){
    int consonantes = 0;
    for(int i = 0; i < palabra.size(); i++){
        if(((palabra[i] != 97) && (palabra[i] != 101) && (palabra[i] != 105) && (palabra[i] != 111)
        && (palabra[i] != 117) && (palabra[i] != 65) && (palabra[i] != 69) && (palabra[i] != 73)
        && (palabra[i] != 79) && (palabra[i] != 85)) && (((palabra[i] > 65) && (palabra[i] < 91)) 
        || ((palabra[i] > 97) && (palabra[i] < 123)))){
        consonantes++;
        }
    }
    return consonantes;
}



