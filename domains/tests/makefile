all: country_test.o date_test.o description_test.o password_test.o city_test.o

country_test.o: country_test.cpp
	g++ -std=c++17 -Wall -c ../../domains/country.o country_test.cpp

date_test.o: date_test.cpp
	g++ -std=c++17 -Wall -c ../../domains/date.o date_test.cpp

description_test.o: description_test.cpp
	g++ -std=c++17 -Wall -c ../../domains/description.o description_test.cpp

password_test.o: password_test.cpp
	g++ -std=c++17 -Wall -c ../../domains/password.o password_test.cpp

city_test.o: city_test.cpp
	g++ -std=c++17 -Wall -c ../../domains/city.o city_test.cpp


clean:
	rm -rf *.o *.exe
