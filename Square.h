#pragma once
#include <iostream>

class Square {
private:
    double side;

public:
    Square();
    Square(double side);

    void setSide(double side);
    double getSide() const { return side; }

    double calculateArea() const { return side * side; }

    friend std::ostream& operator<<(std::ostream& os, const Square& square);
    friend Square operator*(const Square& square, double scalar);
    friend Square operator+(const Square& square1, const Square& square2);
};
