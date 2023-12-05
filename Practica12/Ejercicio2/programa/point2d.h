#include <iostream>
#include <cmath>

class point2d{
    public:
    point2d();
    point2d(float coordenadaX, float coordenadaY);
    void set_coordenadaX(float coordenadaX);
    void set_coordenadaY(float coordenadaY);
    float get_coordenadaX();
    float get_coordenadaY();
    void Show();
    void Move(float coordenadaX, float coordenadaY);
    float Distance(point2d& punto2);
    point2d Middle(point2d& punto2);

    private:
    float coordenadaX_;
    float coordenadaY_;
};