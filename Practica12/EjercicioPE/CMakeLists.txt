cmake_minimum_required(VERSION 3.0)

project(Ejercicio3 # Nombre del proyecto
    VERSION 1.0
    DESCRIPTION "Números complejos" # De lo que va el proyecto
    LANGUAGES CXX
)

# Establecer el compilador C++
set(CMAKE_CXX_COMPILER "g++")

# Establecer las banderas de compilación C++
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -")

# Obtener la lista de todos los archivos fuente en el directorio vowels_consonants_files
file(GLOB SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cc") # Poner el nombre de la carpeta donde están los .cc (En este caso es "programa")

# Agregar los archivos fuente al ejecutable
add_executable(Ejercicio4 ${SOURCES}) # Nombre del ejecutable (En este caso es "Ejercicio3")