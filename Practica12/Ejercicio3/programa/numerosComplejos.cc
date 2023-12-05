#include "numerosComplejos.h"

numeroComplejo::numeroComplejo() {

}

numeroComplejo::numeroComplejo(float real, float imaginaria) {
  real_ = real;
  imaginaria_ = imaginaria;
}

void numeroComplejo::set_real(const float& real){
  real_ = real;
}

void numeroComplejo::set_imaginaria(float imaginaria){
  imaginaria_ = imaginaria;
}

float numeroComplejo::get_real() const {
  return real_;
}

float numeroComplejo::get_imaginaria() const {
  return imaginaria_;
}

numeroComplejo operator+(const numeroComplejo& numero1, const numeroComplejo& numero2) {
  numeroComplejo resultado;
  resultado.set_real(numero1.get_real() + numero2.get_real());
  resultado.set_imaginaria(numero1.get_imaginaria() + numero2.get_imaginaria());
  return resultado;
}

numeroComplejo operator-(const numeroComplejo& numero1, const numeroComplejo& numero2) {
  numeroComplejo resultado;
  resultado.set_real(numero1.get_real() - numero2.get_real());
  resultado.set_imaginaria(numero1.get_imaginaria() - numero2.get_imaginaria());
  return resultado;
}

void numeroComplejo::print(std::ostream& os) const {
  if(get_imaginaria() < 0){
      os << get_real() << " - " << -1.0 * get_imaginaria() << "i";
  } else {
      os << get_real() << " + " << get_imaginaria() << "i";
  }
}

std::ostream& operator<<(std::ostream& os, const numeroComplejo& numero) {
  numero.print(os);
  return os;
}

