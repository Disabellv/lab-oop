#include <iostream>
#include "Point.h"
#include "Polygon.h"

int main() {
    // Створення точок
    Point p1(0, 0);
    Point p2(4, 0);
    Point p3(4, 3);

    // Створення багатокутника
    Polygon triangle;
    triangle.addVertex(p1);
    triangle.addVertex(p2);
    triangle.addVertex(p3);

    // Виведення початкового периметра
    std::cout << "Initial perimeter: " << triangle.perimeter() << "\n";

    // Переміщення
    triangle.translate(1, 1);
    std::cout << "Perimeter after translation: " << triangle.perimeter() << "\n";

    // Масштабування
    triangle.scale(2);
    std::cout << "Perimeter after scaling: " << triangle.perimeter() << "\n";

    // Інверсія
    triangle.invert();
    std::cout << "Perimeter after inversion: " << triangle.perimeter() << "\n";

    return 0;
}
