#pragma once
#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle();
    Rectangle(double length, double width);

    void setLength(double length);
    double getLength() const { return length; }

    void setWidth(double width);
    double getWidth() const { return width; }

    double calculateArea() const { return length * width; }

    friend std::ostream& operator<<(std::ostream& os, const Rectangle& rect);
    friend Rectangle operator*(const Rectangle& rect, double scalar);
    friend Rectangle operator+(const Rectangle& rect1, const Rectangle& rect2);
};
