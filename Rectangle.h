#pragma once
#include <iostream>
using namespace std;

//rectangle class definition
class Rectangle
{
private:
    double length; //length of the rectangle
    double width;  //width of the rectangle

public:
    Rectangle(); //default constructor
    Rectangle(double length, double width); //parameterized constructor

    void setLength(double length); //sets the length of the rectangle
    double getLength() const; //gets the length of the rectangle

    void setWidth(double width); //sets the width of the rectangle
    double getWidth() const; //gets the width of the rectangle

    double calculateArea() const; //calculates the area of the rectangle

    friend ostream& operator<<(ostream& cout, const Rectangle& rect); //lets you print the rectangle using <<
    friend Rectangle operator*(const Rectangle& rect, int num); //lets you multiply the rectangle by a number
    friend Rectangle operator+(const Rectangle& rect1, const Rectangle& rect2); //lets you add two rectangles together
};

//function prototypes
ostream& operator<<(ostream& cout, const Rectangle& rect); //prints the rectangle
Rectangle operator*(const Rectangle& rect, int num); //multiplies the rectangle by a number
Rectangle operator+(const Rectangle& rect1, const Rectangle& rect2); //adds two rectangles
