 /**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Enrique Gómez Díaz
 * @date 8 Nov 2023
 * @brief Este programa cambia las mayúsculas por minúsculas y viceversa de una cadena de texto.
 *
 */

#include <iostream>
#include <string>

int main(){
    std::string cadena;
    char aux;
    std::cin >> cadena;
    
    for (char letra : cadena)
    {
        if (isupper(letra))
        {
	    aux = tolower(letra);
            std::cout << aux;
        } else
        {
	    aux = toupper(letra);
            std::cout << aux;
        } 
    }
    std::cout << std::endl;
    return 0;
}