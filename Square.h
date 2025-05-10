#pragma once
#include <iostream>
using namespace std;

//square class definition
class Square
{
private:
    double side; //side length of the square

public:
    Square(); //default constructor
    Square(double side); //constructor that lets you set the side length when creating an object

    void setSide(double side); //sets the side length
    double getSide() const; //gets the side length

    double calculateArea() const; //calculates and returns the area of the square

    //friend functions so these operators can access private variables directly
    friend ostream& operator<<(ostream& cout, const Square& s1); //overloads << to print the square
    friend Square operator*(const Square& s1, int scalar); //overloads * to scale the square by a number
    friend Square operator+(const Square& s1, const Square& s2); //overloads + to add two squares together
};

//function prototypes
ostream& operator<<(ostream& cout, const Square& s1); //prints the square
Square operator*(const Square& s1, int scalar); //scales the square by a number
Square operator+(const Square& s1, const Square& s2); //adds two squares
