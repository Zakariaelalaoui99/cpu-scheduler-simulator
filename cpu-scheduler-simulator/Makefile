# Compiler
CXX = g++
CXXFLAGS = -std=c++17 -Wall

# Output
TARGET = scheduler_sim

# Source and object files
SRC = main.cpp Process.cpp FCFS.cpp
OBJ = $(SRC:.cpp=.o)

# Build target
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

# Object file rules
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean build
clean:
	rm -f *.o $(TARGET)
