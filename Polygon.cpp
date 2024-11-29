#include "Polygon.h"
#include <cmath>

// Конструктори
Polygon::Polygon() {}
Polygon::Polygon(const std::vector<Point>& points) : vertices(points) {}

// Додати вершину
void Polygon::addVertex(const Point& point) {
    vertices.push_back(point);
}

// Переміщення
void Polygon::translate(double dx, double dy) {
    for (auto& vertex : vertices) {
        vertex.translate(dx, dy);
    }
}

// Масштабування
void Polygon::scale(double factor) {
    for (auto& vertex : vertices) {
        vertex.scale(factor);
    }
}

// Інверсія
void Polygon::invert() {
    for (auto& vertex : vertices) {
        vertex.invert();
    }
}

// Периметр
double Polygon::perimeter() const {
    double result = 0.0;
    for (size_t i = 0; i < vertices.size(); ++i) {
        const Point& current = vertices[i];
        const Point& next = vertices[(i + 1) % vertices.size()]; // Замикання контуру
        double dx = next.getX() - current.getX();
        double dy = next.getY() - current.getY();
        result += std::sqrt(dx * dx + dy * dy);
    }
    return result;
}
