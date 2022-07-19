all: country.o
	+$(MAKE) -C tests

country.o: country.cpp country.hpp
	g++ -std=c++17 -Wall -c country.cpp

clean:
	rm -rf *.o *.exe

