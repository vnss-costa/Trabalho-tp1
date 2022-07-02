all:
	+$(MAKE) -C domains
	g++ -std=c++17 -Wall ./*/*/*.o ./*/*.o main.cpp -o main.exe
	clear
	./main.exe

clean:
	rm -rf ./*/*.o ./*/*/*.exe ./*/*/*.o ./*/*/*/*.o
	rm -rf *.exe
	rm -rf html latex

doxygen:
	doxygen