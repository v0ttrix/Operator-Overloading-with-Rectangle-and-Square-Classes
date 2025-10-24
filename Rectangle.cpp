#include "Rectangle.h"
#include <stdexcept>

Rectangle::Rectangle() : length(0.0), width(0.0) {}

Rectangle::Rectangle(double length, double width) {
    if (length < 0 || width < 0) {
        throw std::invalid_argument("Dimensions must be non-negative");
    }
    this->length = length;
    this->width = width;
}

void Rectangle::setLength(double length) {
    if (length < 0) {
        throw std::invalid_argument("Length must be non-negative");
    }
    this->length = length;
}

void Rectangle::setWidth(double width) {
    if (width < 0) {
        throw std::invalid_argument("Width must be non-negative");
    }
    this->width = width;
}

std::ostream& operator<<(std::ostream& os, const Rectangle& rect) {
    os << "Rectangle(length=" << rect.length 
       << ", width=" << rect.width 
       << ", area=" << rect.calculateArea() << ")";
    return os;
}

Rectangle operator*(const Rectangle& rect, double scalar) {
    if (scalar < 0) {
        throw std::invalid_argument("Scalar must be non-negative");
    }
    return Rectangle(rect.length * scalar, rect.width * scalar);
}

Rectangle operator+(const Rectangle& rect1, const Rectangle& rect2) {
    return Rectangle(rect1.length + rect2.length, rect1.width + rect2.width);
}
