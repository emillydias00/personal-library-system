CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -Iinclude -g
SRC = $(wildcard src/*.cpp)
OBJ = $(SRC:.cpp=.o)
TARGET = bin/personal-library
TEST = bin/test_acervo

.PHONY: all build test clean run

all: build

build: $(TARGET)

$(TARGET): $(OBJ) main.o
	@mkdir -p bin
	$(CXX) $(CXXFLAGS) -o $@ $(OBJ) main.o

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp -o main.o

src/%.o: src/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

test: $(TEST)
	./$(TEST)

$(TEST): $(OBJ) tests/test_acervo.o
	@mkdir -p bin
	$(CXX) $(CXXFLAGS) -o $@ $(OBJ) tests/test_acervo.o

tests/test_acervo.o: tests/test_acervo.cpp
	$(CXX) $(CXXFLAGS) -c tests/test_acervo.cpp -o tests/test_acervo.o

run: build
	./$(TARGET)

clean:
	rm -rf *.o src/*.o tests/*.o main.o bin
