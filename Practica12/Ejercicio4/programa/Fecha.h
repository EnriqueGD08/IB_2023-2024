#include <iostream>

class Fecha {
  public:
    Fecha();
    Fecha(int dia, int mes, int anio);
    void set_dia(int dia);
    void set_mes(int mes);
    void set_anio(int anio);
    int get_dia();
    int get_mes();
    int get_anio();
  
  private:
    int dia_;
    int mes_;
    int anio_;
};

bool is_valid_date(int dia, int mes, int anio);
bool bisiesto(int anio);