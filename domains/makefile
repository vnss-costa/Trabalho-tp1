all: country.o password.o
	+$(MAKE) -C tests

country.o: country.cpp country.hpp
	g++ -std=c++17 -Wall -c country.cpp

password.o: password.cpp password.hpp
	g++ -std=c++17 -Wall -c password.cpp

clean:
	rm -rf *.o *.exe

