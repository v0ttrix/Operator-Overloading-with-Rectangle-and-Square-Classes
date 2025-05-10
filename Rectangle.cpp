#include <iostream>
#include "Rectangle.h"

using namespace std;

//default constructor
Rectangle::Rectangle()
{
    length = 0.00; //sets length to 0
    width = 0.00;  //sets width to 0
}

//parameterized constructor
Rectangle::Rectangle(double length, double width)
{
    this->length = length; //sets length to given value
    this->width = width;   //sets width to given value
}

//setter for length
void Rectangle::setLength(double length)
{
    this->length = length; //updates length
}

//getter for length
double Rectangle::getLength() const
{
    return length; //returns the length
}

//setter for width
void Rectangle::setWidth(double width)
{
    this->width = width; //updates width
}

//getter for width
double Rectangle::getWidth() const
{
    return width; //returns the width
}

//calculates area
double Rectangle::calculateArea() const
{
    return length * width; //returns the area (length * width)
}

//overload << operator to print the rectangle
ostream& operator<<(ostream& cout, const Rectangle& rect)
{
    cout << "Rectangle : The length = " << rect.getLength()
        << ", the width = " << rect.getWidth()
        << " and the area = " << rect.calculateArea();
    return cout; //returns the stream so it can be chained
}

//overload * operator to scale the rectangle
Rectangle operator*(const Rectangle& rect, int num)
{
    return Rectangle(rect.length * num, rect.width * num); //returns new rectangle with scaled dimensions
}

//overload + operator to add two rectangles
Rectangle operator+(const Rectangle& rect1, const Rectangle& rect2)
{
    return Rectangle(rect1.length + rect2.length, rect1.width + rect2.width); //returns new rectangle with added dimensions
}
