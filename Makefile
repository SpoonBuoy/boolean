all: compile

compile:
	g++ -c src/main.cpp
	g++ -c src/functions/*
	g++ *.o -o boolean
clean:
	rm *.o


