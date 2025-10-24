# C++ Operator Overloading with Rectangle and Square Classes

A modern C++ implementation demonstrating operator overloading with geometric shapes, featuring proper error handling and clean code practices.

## 🚀 Key Improvements Made

**Modern C++ Practices:**
- Removed `using namespace std` from headers to avoid namespace pollution
- Added proper input validation with exception handling
- Used member initializer lists for better performance
- Implemented inline functions for simple getters
- Added const correctness throughout

**Error Handling:**
- Input validation for negative dimensions
- Exception throwing with meaningful error messages
- Proper exception handling in main function
- Graceful error recovery and reporting

**Code Quality:**
- Removed excessive obvious comments
- Cleaner, more readable output formatting
- Consistent naming conventions
- Better separation of concerns

## 📁 Class Structure

### Rectangle Class
- **Private Members**: `length`, `width`
- **Constructors**: Default and parameterized with validation
- **Methods**: Getters, setters with validation, area calculation
- **Operators**: `<<` (output), `*` (scaling), `+` (addition)

### Square Class
- **Private Members**: `side`
- **Constructors**: Default and parameterized with validation
- **Methods**: Getter, setter with validation, area calculation
- **Operators**: `<<` (output), `*` (scaling), `+` (addition)

## 🎯 Operator Overloading Features

### Stream Insertion (`<<`)
```cpp
Rectangle r(5, 3);
std::cout << r;  // Output: Rectangle(length=5, width=3, area=15)
```

### Multiplication (`*`)
```cpp
Rectangle r1(4, 2);
Rectangle r2 = r1 * 2.5;  // Scales both dimensions
```

### Addition (`+`)
```cpp
Rectangle r1(3, 2);
Rectangle r2(1, 4);
Rectangle r3 = r1 + r2;  // Adds corresponding dimensions
```

## 🛠 Building and Running

### Prerequisites
- C++11 compatible compiler (GCC 4.8+, Clang 3.3+, MSVC 2013+)
- Standard library support

### Compilation
```bash
# GCC/Clang
g++ -std=c++11 -Wall -Wextra -O2 *.cpp -o shapes

# With debugging
g++ -std=c++11 -Wall -Wextra -g -DDEBUG *.cpp -o shapes_debug

# MSVC
cl /std:c++11 /EHsc *.cpp /Fe:shapes.exe
```

### Execution
```bash
./shapes
```

## 📊 Improvements Summary

**Before vs After:**
- **Error Handling**: None → Comprehensive validation and exceptions
- **Code Quality**: Verbose comments → Clean, self-documenting code
- **Namespace**: Pollution in headers → Proper std:: usage
- **Performance**: Basic → Optimized with initializer lists
- **Maintainability**: Poor → Modern C++ best practices

**Technical Enhancements:**
- Input validation prevents invalid geometric shapes
- Exception safety with RAII principles
- Const correctness for better optimization
- Inline functions reduce function call overhead
- Clean separation between interface and implementation

## 🎓 Learning Objectives

- **Operator Overloading**: Friend functions and proper implementation
- **Exception Handling**: Input validation and error recovery
- **Modern C++**: Best practices and clean code principles
- **Object-Oriented Design**: Encapsulation and data validation
- **Code Quality**: Readable, maintainable, and efficient code

## 📈 Sample Output

```
=== Rectangle Operations ===
Original rectangles:
Rectangle(length=6, width=2, area=12)
Rectangle(length=4, width=3, area=12)

r1 * 2.0 = Rectangle(length=12, width=4, area=48)
r1 + r2 = Rectangle(length=10, width=5, area=50)

=== Square Operations ===
Original squares:
Square(side=6, area=36)
Square(side=4, area=16)

s1 * 2.0 = Square(side=12, area=144)
s1 + s2 = Square(side=10, area=100)

=== Error Handling Demo ===
Caught exception: Dimensions must be non-negative
```

## 🔧 Advanced Features

- **Friend Functions**: Efficient access to private members
- **Exception Safety**: Strong exception safety guarantee
- **Input Validation**: Prevents invalid object states
- **Const Correctness**: Optimized for read-only operations
- **Modern C++**: C++11 features and best practices

## 📝 Best Practices Demonstrated

- Avoid `using namespace std` in headers
- Use member initializer lists
- Implement proper input validation
- Provide meaningful error messages
- Use const correctness throughout
- Inline simple functions for performance
- Separate interface from implementation

## 📄 License

MIT License - Educational use encouraged.
