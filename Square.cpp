#include <iostream>
#include "Square.h"
using namespace std;

//default constructor
Square::Square()
{
    side = 0; //sets side length to 0
}

//parameterized constructor
Square::Square(double side)
{
    this->side = side; //sets side length to given value
}

//setter for side
void Square::setSide(double side)
{
    this->side = side; //updates side length
}

//getter for side
double Square::getSide() const
{
    return side; //returns the side length
}

//calculates area
double Square::calculateArea() const
{
    return side * side; //returns area (side * side)
}

//overload << operator to print the square
ostream& operator<<(ostream& cout, const Square& s1)
{
    cout << "Square: The side = " << s1.getSide()
        << " and the area = " << s1.calculateArea();
    return cout; //returns the stream so it can be chained
}

//overload * operator to scale the square
Square operator*(const Square& s1, int scalar)
{
    return Square(s1.side * scalar); //returns new square with scaled side length
}

//overload + operator to add two squares
Square operator+(const Square& s1, const Square& s2)
{
    return Square(s1.side + s2.side); //returns new square with added side lengths
}
