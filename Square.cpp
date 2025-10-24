#include "Square.h"
#include <stdexcept>

Square::Square() : side(0.0) {}

Square::Square(double side) {
    if (side < 0) {
        throw std::invalid_argument("Side length must be non-negative");
    }
    this->side = side;
}

void Square::setSide(double side) {
    if (side < 0) {
        throw std::invalid_argument("Side length must be non-negative");
    }
    this->side = side;
}

std::ostream& operator<<(std::ostream& os, const Square& square) {
    os << "Square(side=" << square.side 
       << ", area=" << square.calculateArea() << ")";
    return os;
}

Square operator*(const Square& square, double scalar) {
    if (scalar < 0) {
        throw std::invalid_argument("Scalar must be non-negative");
    }
    return Square(square.side * scalar);
}

Square operator+(const Square& square1, const Square& square2) {
    return Square(square1.side + square2.side);
}
