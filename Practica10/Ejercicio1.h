#include <iostream>
#include <vector>

/**
 * @brief Genera un vector de números aleatorios entre dos valores dados por el usuario.
 * @param size Tamaño del vector.
 * @param lower Valor mínimo del vector.
 * @param upper Valor máximo del vector.
 * @return Devuelve un vector de números aleatorios entre dos valores dados por el usuario.
 */
std::vector<double> GenerateVector(const int size, const double lower, const double upper){
    std::vector<double> my_vector;
    int minimo = (lower * 100);
    int maximo = (upper * 100);
    for(int i = 0; i < size; i++){
        double variable = minimo + std::rand() % maximo;
        variable /= 100.0;
        my_vector.push_back(variable);

    }

    return my_vector;
}

/**
 * @brief Muestra por pantalla los valores de un vector.
 * @param my_vector Vector a mostrar.
 */
void MostrarVector(std::vector<double> my_vector){
    for(int i = 0; i < my_vector.size(); i++){
        std::cout << my_vector[i] << " ";
    }
    std::cout << std::endl;

}

/**
 * @brief Calcula la suma de los valores de un vector.
 * @param my_vector Vector a sumar.
 * @return Devuelve la suma de los valores de un vector.
 */
double ReducedSum(std::vector<double> my_vector){
    double resultado = 0.0;
    for(int i = 0; i < my_vector.size(); i++){
        resultado += my_vector[i];
    }

    return resultado;
}

/**
 * @brief Calcula el máximo, el mínimo y el promedio de los valores de un vector.
 * @param my_vector Vector a multiplicar.
 * @param minimo Valor mínimo del vector.
 * @param maximo Valor máximo del vector.
 * @param promedio Promedio de los valores del vector.
 */
void valores_vector(std::vector<double> my_vector, double &minimo, double &maximo, double &promedio){
    minimo = my_vector[0];
    maximo = my_vector[0];
    promedio = 0.0;
    for(int i = 0; i < my_vector.size(); i++){
        if(minimo > my_vector[i]) {
            minimo = my_vector[i];
        }
        if(maximo < my_vector[i]){
            maximo = my_vector[i];
        }
        promedio += my_vector[i];
    }
    promedio /= my_vector.size();
}

/**
 * @brief Crea un vector con la suma de los valores de dos vectores.
 * @param vector1 Primer vector a sumar.
 * @param vector2 Segundo vector a sumar.
 * @return Devuelve un vector con la suma de los valores de dos vectores.
*/
std::vector<double> SumaDeVectores(std::vector<double> vector1, std::vector<double> vector2){
    std::vector<double> my_vector;
    for(int i = 0; i < vector1.size(); i++){
        my_vector.push_back(vector1[i]);
    }
    for(int j = 0; j < vector2.size(); j++){
        my_vector.push_back(vector2[j]);
    }

    return my_vector;
}