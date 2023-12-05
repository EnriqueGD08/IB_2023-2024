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
 *
 */

#include "Ejercicio.h"

int main(int argc, char *argv[]){
    Usage(argc, argv);
    std::ifstream operaciones(argv[1]);
    std::ofstream salida("Resultados.txt");
    int numero1;
    int numero2;
    std::string operador;
    while(operaciones >> numero1){
        operaciones >> operador;
        operaciones >> numero2;
        if(comprobar(operador, numero2) == true){
            salida << operacion(numero1, numero2, operador) << " ";
        }else{
            salida << "NaN "; 
        }
    }

    return 0;
}