#include "point2d.h"

int main(){
  point2d p1(2.6, 3.1);
  point2d p2(4.1, -5.7);
  p1.Show();
  p2.Show();
  p1.Move(2.1, 7.2);
  p1.Show();
  std::cout << p1.Distance(p2) << std::endl;
  (p1.Middle(p2)).Show();

  return 0;
}