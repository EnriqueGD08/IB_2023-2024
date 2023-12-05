/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Enrique Gómez Díaz
* @date 15 Nov 2023
* @brief Este programa toma una palabra y cambia las vocales por mayúsculas y las consonantes por minúsculas.
*/

#include <iostream>
#include <string>

int main(){
    std::string palabra1;
    std::cin >> palabra1;
    for(int i = 0; i < palabra1.size(); i++){
        if(palabra1[i] == 97 || palabra1[i] == 101 || palabra1[i] == 105 || palabra1[i] == 111 || palabra1[i] == 117){
            palabra1[i] -= 32;
        } else if(palabra1[i] < 91 && palabra1[i] > 64 && (palabra1[i] != 65 && palabra1[i] != 69 && palabra1[i] != 73 && palabra1[i] != 79 && palabra1[i] != 85)){
            palabra1[i] += 32;
        }
    }       
    std::cout << palabra1 << std::endl;

    return 0;
}