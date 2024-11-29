#include "Point.h"

// Конструктори
Point::Point() : x(0), y(0) {}
Point::Point(double x, double y) : x(x), y(y) {}

// Методи доступу
double Point::getX() const { return x; }
double Point::getY() const { return y; }
void Point::setX(double x) { this->x = x; }
void Point::setY(double y) { this->y = y; }

// Переміщення
void Point::translate(double dx, double dy) {
    x += dx;
    y += dy;
}

// Масштабування
void Point::scale(double factor) {
    x *= factor;
    y *= factor;
}

// Інверсія
void Point::invert() {
    x = -x;
    y = -y;
}
