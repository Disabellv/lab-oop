#pragma once
#ifndef POLYGON_H
#define POLYGON_H

#include "Point.h"
#include <vector>

class Polygon {
private:
    std::vector<Point> vertices; // Вершини багатокутника

public:
    // Конструктори
    Polygon();
    Polygon(const std::vector<Point>& points);

    // Методи
    void addVertex(const Point& point);         // Додати вершину
    void translate(double dx, double dy);       // Переміщення
    void scale(double factor);                 // Масштабування
    void invert();                             // Інверсія
    double perimeter() const;                  // Периметр
};

#endif // POLYGON_H
