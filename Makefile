CXX = g++
SRC = main.cpp util.cpp dischargeCapacitor.cpp
OBJ = $(SRC:.cpp = .o)
FLAGS = -std=c++11 

main: $(OBJ)
	$(CXX) $(FLAGS) -o app $(OBJ)

clean: 
	rm -f core *.o app
