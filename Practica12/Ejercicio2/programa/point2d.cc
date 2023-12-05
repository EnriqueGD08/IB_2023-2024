#include "point2d.h"

point2d::point2d(){}

point2d::point2d(float coordenadaX, float coordenadaY) {
  set_coordenadaX(coordenadaX);
  set_coordenadaY(coordenadaY);
}

void point2d::set_coordenadaX(float coordenadaX) {
  coordenadaX_ = coordenadaX;
}

void point2d::set_coordenadaY(float coordenadaY) {
  coordenadaY_ = coordenadaY;
}

float point2d::get_coordenadaX() {
  return coordenadaX_;
}

float point2d::get_coordenadaY() {
  return coordenadaY_;
}

void point2d::Show() {
  std::cout << "x: " << get_coordenadaX() << " y: " << get_coordenadaY() << std::endl;
}

void point2d::Move(float coordenadaX, float coordenadaY) {
	set_coordenadaX(coordenadaX);
  set_coordenadaY(coordenadaY);
}

float point2d::Distance(point2d& punto2) {
  return sqrt((get_coordenadaX() - punto2.get_coordenadaX()) * (get_coordenadaX() - punto2.get_coordenadaX())
  + 
  (get_coordenadaY() - punto2.get_coordenadaY()) * (get_coordenadaY() - punto2.get_coordenadaY()));
}

point2d point2d::Middle(point2d& punto2) {
	point2d puntomedio;
	puntomedio.set_coordenadaX(get_coordenadaX() + ((punto2.get_coordenadaX() - get_coordenadaX()) / 2));
	puntomedio.set_coordenadaY(get_coordenadaY() + ((punto2.get_coordenadaY() - get_coordenadaX()) / 2));
	
	return puntomedio;
}