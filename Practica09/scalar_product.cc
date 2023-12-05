/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Enrique Gómez Díaz
* @date 15 Nov 2023
* @brief Este programa toma dos vectores y calcula su producto escalar.
*/


#include <iostream>
#include <vector>

int main(){
    std::vector<float> vectorcito;
    std::vector<float> vectorzote;
    float resultado = 0.0;
    while(true){
        float aux;
        std::cin >> aux;
        vectorcito.push_back(aux);
        if(std::cin.peek() == '\n'){
            std::cin.ignore();
            break;
        }
    }
    while(true){
        float aux;
        std::cin >> aux;
        vectorzote.push_back(aux);
        if(std::cin.peek() == '\n'){
            std::cin.ignore();
            break;
        }   
    }
    if(vectorcito.size() == vectorzote.size()){
        for(int i = 0; i <= vectorcito.size(); i++){
            resultado += (vectorcito[i] * vectorzote[i]);
        }
        std::cout << resultado << std::endl;
    }

    return 0;
}