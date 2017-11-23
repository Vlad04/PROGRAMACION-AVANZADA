LIB := $(shell find ./lib -name '*.o')
all:
	 gcc -c fibonacci.c
	 gcc -c main.c
	 gcc -o fibonacci.exe fibonacci.o main.o $(LIB)

test_fibonacci: clean
	 gcc -c fibonacci.c
	 gcc -c test_fibonacci.c
	 gcc -o test_fibonacci.exe fibonacci.o test_fibonacci.o
	 ./test_fibonacci.exe

test:	 test_fibonacci

clean:
	 rm *.out *.o *.exe || exit 0

fibonacci: clean
	 gcc -c fibonacci.c
	 gcc -c main.c
	 gcc -o fibonacci.exe fibonacci.o main.o $(LIB)

run: fibonacci
	 ./fibonacci.exe

runtest: fibonacci
	 ./integrationtest.tcl ./fibonacci.exe

