all: country_test.o password_test.o

country_test.o: country_test.cpp
	g++ -std=c++17 -Wall -c ../../domains/country.o country_test.cpp

password_test.o: password_test.cpp
	g++ -std=c++17 -Wall -c ../../domains/password.o password_test.cpp

clean:
	rm -rf *.o *.exe
