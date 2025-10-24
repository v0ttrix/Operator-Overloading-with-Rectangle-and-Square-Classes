#include <iostream>
#include <stdexcept>
#include "Rectangle.h"
#include "Square.h"

int main() {
    try {
        std::cout << "=== Rectangle Operations ===\n";
        Rectangle r1(6.0, 2.0);
        Rectangle r2(4.0, 3.0);

        std::cout << "Original rectangles:\n";
        std::cout << r1 << "\n" << r2 << "\n\n";

        Rectangle r3 = r1 * 2.0;
        std::cout << "r1 * 2.0 = " << r3 << "\n";

        Rectangle r4 = r1 + r2;
        std::cout << "r1 + r2 = " << r4 << "\n\n";

        std::cout << "=== Square Operations ===\n";
        Square s1(6.0);
        Square s2(4.0);

        std::cout << "Original squares:\n";
        std::cout << s1 << "\n" << s2 << "\n\n";

        Square s3 = s1 * 2.0;
        std::cout << "s1 * 2.0 = " << s3 << "\n";

        Square s4 = s1 + s2;
        std::cout << "s1 + s2 = " << s4 << "\n\n";

        std::cout << "=== Error Handling Demo ===\n";
        try {
            Rectangle invalid(-1, 5);
        } catch (const std::exception& e) {
            std::cout << "Caught exception: " << e.what() << "\n";
        }

    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << "\n";
        return 1;
    }

    return 0;
}
