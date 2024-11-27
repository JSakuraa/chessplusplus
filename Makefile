CXX = g++
CXXFLAGS = -std=c++17 -Iinclude

SRC = src/main.cpp src/Board.cpp src/Piece.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = chess

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)
