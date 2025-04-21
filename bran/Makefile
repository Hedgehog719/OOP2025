# Makefile

CXX = g++
CXXFLAGS = -std=c++98 -Iinc
SRC = src
INC = inc
OBJS = main.o $(SRC)/Cylinder.o
TARGET = Lab07

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

main.o: main.cpp $(INC)/Cylinder.h
	$(CXX) $(CXXFLAGS) -c main.cpp

$(SRC)/Cylinder.o: $(SRC)/Cylinder.cpp $(INC)/Cylinder.h
	$(CXX) $(CXXFLAGS) -c $(SRC)/Cylinder.cpp -o $(SRC)/Cylinder.o

clean:
	rm -f $(TARGET) $(OBJS)

