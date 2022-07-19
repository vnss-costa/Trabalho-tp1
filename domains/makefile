all: country.o date.o description.o password.o city.o code.o email.o idiom.o name.o grade.o
	+$(MAKE) -C tests

country.o: country.cpp country.hpp
	g++ -std=c++17 -Wall -c country.cpp
	
date.o: date.cpp date.hpp
	g++ -std=c++17 -Wall -c date.cpp

description.o: description.cpp description.hpp
	g++ -std=c++17 -Wall -c description.cpp

password.o: password.cpp password.hpp
	g++ -std=c++17 -Wall -c password.cpp

city.o: city.cpp city.hpp
	g++ -std=c++17 -Wall -c city.cpp

code.o: code.cpp code.hpp
	g++ -std=c++17 -Wall -c code.cpp

email.o: email.cpp email.hpp
	g++ -std=c++17 -Wall -c email.cpp

idiom.o: idiom.cpp idiom.hpp
	g++ -std=c++17 -Wall -c idiom.cpp

name.o: name.cpp name.hpp
	g++ -std=c++17 -Wall -c name.cpp

grade.o: grade.cpp grade.hpp
	g++ -std=c++17 -Wall -c grade.cpp

clean:
	rm -rf *.o *.exe

