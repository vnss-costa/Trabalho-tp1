all: country_test.o description_test.o

country_test.o: country_test.cpp
	g++ -std=c++17 -Wall -c ../../domains/country.o country_test.cpp

description_test.o: description_test.cpp
	g++ -std=c++17 -Wall -c ../../domains/description.o description_test.cpp

clean:
	rm -rf *.o *.exe
