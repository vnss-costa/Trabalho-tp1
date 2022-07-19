all: accommodation.o # review.o user.o
	+$(MAKE) -C tests

accommodation.o: accommodation.cpp accommodation.hpp
	g++ -std=c++17 -Wall -c accommodation.cpp

review.o: review.cpp review.hpp
	g++ -std=c++17 -Wall -c review.cpp

user.o: user.cpp user.hpp
	g++ -std=c++17 -Wall -c user.cpp
