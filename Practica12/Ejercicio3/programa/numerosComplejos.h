#include <iostream>
#pragma once 

class numeroComplejo {
  public:
    numeroComplejo();
    numeroComplejo(float real, float imaginaria);
    void set_real(const float& real);
    void set_imaginaria(float imaginaria);
    float get_real() const;
    float get_imaginaria() const;
    void print(std::ostream& os) const;

  private:
    float real_;
    float imaginaria_;

};

std::ostream& operator<<(std::ostream& os, const numeroComplejo& numero);

numeroComplejo operator+(const numeroComplejo& numero1, const numeroComplejo& numero2) ;
numeroComplejo operator-(const numeroComplejo& numero1, const numeroComplejo& numero2) ;