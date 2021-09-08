all: DynMas.cpp Matrix.cpp
		g++ -Wall -o Dynamic $^
clean:
		rm Dynamic