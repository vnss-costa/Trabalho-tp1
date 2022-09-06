all:
	+$(MAKE) -C domains
	+$(MAKE) -C entities
	+$(MAKE) -C Controllers
	+$(MAKE) -C stubs
	g++ -std=c++17 -Wall ./*/*/*/*.o ./*/*/*.o ./*/*.o main.cpp -o main.exe

clean:
	rm -rf ./*/*.o ./*/*/*.exe ./*/*/*.o ./*/*/*/*.o
	rm -rf *.exe
	rm -rf html latex

doxygen:
	doxygen