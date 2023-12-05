#include "Ejercicio2.h"

/**
 * @brief Muestra el uso correcto del programa.
 * @param arc Número de argumentos.
 * @param argv Vector de argumentos.
 */
void Usage(int argc, char *argv[]){
if (argc < 3) {
        std::cerr << "Uso: " << argv[0] << " <nombre_del_archivo>" << std::endl;
        exit(EXIT_SUCCESS);
    }
}

/**
 * @brief Cambia las vocales de una palabra por la siguiente vocal.
 * @param palabra Palabra a la que se le va a cambiar las vocales.
 * @return Palabra con las vocales cambiadas.
 */
std::string CambiarVocales(const std::string& palabra){
    std::string resultado = palabra;
    for (int i = 0; i < palabra.size(); i++){
        if(palabra[i] == 'a'){
            resultado[i] = 'e';
        }else{
            if(palabra[i] == 'e'){
                resultado[i] = 'i';
            }else{
                if(palabra[i] == 'i'){
                    resultado[i] = 'o';
                }else{
                    if(palabra[i] == 'o'){
                        resultado[i] = 'u';
                    }else{
                        if(palabra[i] == 'u'){
                        resultado[i] = 'a';
                        }
                    }
                }
            }
        }
        
    }

    return resultado;
}