all: country_test.o date_test.o description_test.o password_test.o city_test.o code_test.o email_test.o idiom_test.o name_test.o grade_test.o

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

code_test.o: code_test.cpp
	g++ -std=c++17 -Wall -c ../../domains/code.o code_test.cpp

email_test.o: email_test.cpp
	g++ -std=c++17 -Wall -c ../../domains/email.o email_test.cpp

idiom_test.o: idiom_test.cpp
	g++ -std=c++17 -Wall -c ../../domains/idiom.o idiom_test.cpp

name_test.o: name_test.cpp
	g++ -std=c++17 -Wall -c ../../domains/name.o name_test.cpp

grade_test.o: grade_test.cpp
	g++ -std=c++17 -Wall -c ../../domains/grade.o grade_test.cpp

clean:
	rm -rf *.o *.exe
