#include <iostream>

bool bisiesto(int anio){
  if (((anio % 4 == 0) && (anio % 100 != 0)) || ((anio % 100 == 0) && ((anio / 100) % 4 == 0))){
    return true;
  }
  return false;
}

bool is_valid_date(int dia, int mes, int anio){
  if ((dia > 31) || (dia <= 0) || (mes > 12) || (mes <= 0) || (anio < 1800) || (anio > 9999)){
    return false;
  }
  if (bisiesto(anio) == true){
    if((mes == 2) && (dia > 29)){
      return false;
    }
  }
  if (bisiesto(anio) == false){
    if((mes == 2) && (dia > 28)){
      return false;
    }
  }
  if ((mes != 1) && (mes != 3) && (mes != 5) && (mes != 7) && (mes != 8) && (mes != 10) && (mes != 12) && (dia > 30)){
    return false;
  }
  
  return true;
}

int main() {
  int dia, mes, anio;
  std::cout << "Introduzca una fecha en formato dd/mm/aaaa: ";
  std::cin >> dia >> mes >> anio;
  if (is_valid_date(dia, mes, anio) == true){
    std::cout << "true" << std::endl;
  }
  else{
    std::cout << "false" << std::endl;
  }

  return 0;
}