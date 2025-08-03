# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -O2

# Source files
SRC = main.cpp \
      CPU.cpp \
      Thread.cpp \
      Process.cpp \
      Event.cpp \
      EventQueue.cpp \
      FCFSScheduler.cpp \
      RoundRobinScheduler.cpp

# Object files
OBJ = $(SRC:.cpp=.o)

# Executable name
TARGET = simulator

# Default rule
all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean rule
clean:
	rm -f $(OBJ) $(TARGET)

# Run the simulator (optional s
run: $(TARGET)
	./$(TARGET)