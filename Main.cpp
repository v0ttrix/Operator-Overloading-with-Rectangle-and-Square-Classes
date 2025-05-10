//This program demonstrates the use of operator overloading to perform arithmetic operations on rectangles and squares.

#include <iostream>
#include "Rectangle.h"
#include "Square.h"
using namespace std;

int main()
{
    //for rectangles
    Rectangle r1(6, 2); //creates rectangle r1 with length 6 and width 2
    Rectangle r2(4, 3); //creates rectangle r2 with length 4 and width 3

    cout << "The original Rectangles are:\n";
    cout << r1 << endl; //prints r1
    cout << r2 << endl; //prints r2
    cout << "\n";

    cout << "The Areas of Rectangles are: \n";
    cout << "Area of r1: " << r1.calculateArea() << endl; //prints area of r1
    cout << "Area of r2: " << r2.calculateArea() << endl; //prints area of r2
    cout << "\n";

    Rectangle r3 = r1 * 2; //scales r1 by 2 and stores in r3
    cout << "After scaling the Rectangle by 2: " << r3 << endl; //prints r3
    cout << "\n";

    Rectangle r4 = r3 + r2; //adds r3 and r2 and stores in r4
    cout << "After adding the rectangles r3 and r2: " << r4 << endl; //prints r4
    cout << "\n";

    //for squares
    Square s1(6); //creates square s1 with side length 6
    Square s2(4); //creates square s2 with side length 4

    cout << "The original Squares are:\n";
    cout << s1 << endl; //prints s1
    cout << s2 << endl; //prints s2
    cout << "\n";

    cout << "The Areas of Squares are: \n";
    cout << "Area of s1: " << s1.calculateArea() << endl; //prints area of s1
    cout << "Area of s2: " << s2.calculateArea() << endl; //prints area of s2
    cout << "\n";

    Square s3 = s1 * 2; //scales s1 by 2 and stores in s3
    cout << "After scaling the Square by 2: " << s3 << endl; //prints s3
    cout << "\n";

    Square s4 = s3 + s2; //adds s3 and s2 and stores in s4
    cout << "After adding the squares s3 and s2: " << s4 << endl; //prints s4
    cout << "\n";

    return 0;
}
