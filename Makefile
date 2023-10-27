# target: dependencies
#		recipe
#		...

# g++ = complie c++ code
# gcc = complie c code
# -c = create .o object code from file that comes after flag
# -o = makes executable with name of whatever comes next and redirects
#	   object code that follows after executable name

# For help understanding makefiles look here:
# https://www.gnu.org/software/make/manual/make.html

CXX = g++

run: main
	@./main

main: main.o
	@$(CXX) main.o -o main

main.o: main.cpp
	@$(CXX) -c main.cpp

# removes all .o files and main executable
clean:
	rm *.o main