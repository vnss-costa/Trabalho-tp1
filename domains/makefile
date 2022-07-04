all: country.o description.o
	+$(MAKE) -C tests

country.o: country.cpp country.hpp
	g++ -std=c++17 -Wall -c country.cpp

description.o: description.cpp description.hpp
	g++ -std=c++17 -Wall -c description.cpp


clean:
	rm -rf *.o *.exe

