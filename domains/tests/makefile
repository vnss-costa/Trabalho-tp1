all: country_test.o date_test.o

country_test.o: country_test.cpp
	g++ -std=c++17 -Wall -c ../../domains/country.o country_test.cpp

date_test.o: date_test.cpp
	g++ -std=c++17 -Wall -c ../../domains/date.o date_test.cpp

clean:
	rm -rf *.o *.exe
