# target: dependencies
#		recipe
#		...

# g++ = complie c++ code
# gcc = complie c code
# -c = create .o object code from file that comes after flag
# -o = makes executable with name of whatever comes next and redirects
#	   object code that follows after executable name

run: main
	@./main

main: main.o
	g++ main.o -o main

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm *.o main