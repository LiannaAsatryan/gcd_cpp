main: gcd.o
	g++ main.cpp gcd.o -o main
	./main

all: test clean

test:  target
	./target

target: gcd.o
	 g++ gcd_test.cpp gcd.o -o target

gcd.o: gcd.cpp
	g++ -c gcd.cpp -o gcd.o

clean: 
	rm -f output.txt result.txt gcd.o target main
	

