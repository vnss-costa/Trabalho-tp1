all: country.o date.o description.o
	+$(MAKE) -C tests

country.o: country.cpp country.hpp
	g++ -std=c++17 -Wall -c country.cpp
	
date.o: date.cpp date.hpp
	g++ -std=c++17 -Wall -c date.cpp

description.o: description.cpp description.hpp
	g++ -std=c++17 -Wall -c description.cpp


clean:
	rm -rf *.o *.exe

