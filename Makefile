main: main.o funcs.o
	g++ -o main main.o funcs.o

main.o: main.cpp funcs.h
	g++ -c main.cpp -std=c++11 

funcs.o: funcs.cpp funcs.cpp
	g++ -c funcs.cpp

tests: tests.o funcs.o
	g++ -o tests tests.o funcs.o

tests.o: tests.cpp funcs.h
	g++ -std=c++11 -c tests.cpp

clean:
	rm -f main tests *.o
