CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra -O2
DEBUGFLAGS = -std=c++11 -Wall -Wextra -g -DDEBUG
TARGET = shapes
SOURCES = Rectangle.cpp Square.cpp Main.cpp

.PHONY: all clean debug run

all: $(TARGET)

$(TARGET): $(SOURCES)
	$(CXX) $(CXXFLAGS) $(SOURCES) -o $(TARGET)

debug: $(SOURCES)
	$(CXX) $(DEBUGFLAGS) $(SOURCES) -o $(TARGET)_debug

clean:
	rm -f $(TARGET) $(TARGET)_debug

run: $(TARGET)
	./$(TARGET)
