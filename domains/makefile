all: city.o
	+$(MAKE) -C tests

city.o: city.cpp city.hpp
	g++ -std=c++17 -Wall -c city.cpp

clean:
	rm -rf *.o *.exe