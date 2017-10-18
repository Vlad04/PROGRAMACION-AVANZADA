LIB := $(shell find ./lib -name '*.o')
all:
	 gcc -c pascal_triangle.c
	 gcc -c main.c
	 gcc -o pascal_triangle.exe pascal_triangle.o main.o $(LIB)

test_pascal_triangle: clean
	 gcc -c pascal_triangle.c
	 gcc -c test_pascal_triangle.c
	 gcc -o test_pascal_triangle.exe pascal_triangle.o test_pascal_triangle.o
	 ./test_pascal_triangle.exe

test:	 test_pascal_triangle

clean:
	 rm *.out *.o *.exe || exit 0

pascal_triangle: clean
	 gcc -c pascal_triangle.c
	 gcc -c main.c
	 gcc -o pascal_triangle.exe pascal_triangle.o main.o $(LIB)

run: pascal_triangle
	 ./pascal_triangle.exe

runtest: pascal_triangle
	 ./integrationtest.tcl ./pascal_triangle.exe

