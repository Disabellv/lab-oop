#pragma once
#ifndef POINT_H
#define POINT_H

class Point {
private:
    double x, y;

public:
    // Конструктори
    Point();
    Point(double x, double y);

    // Методи доступу
    double getX() const;
    double getY() const;
    void setX(double x);
    void setY(double y);

    // Операції
    void translate(double dx, double dy); // Переміщення
    void scale(double factor);           // Масштабування
    void invert();                       // Інверсія (дзеркальне відображення)
};

#endif // POINT_H
