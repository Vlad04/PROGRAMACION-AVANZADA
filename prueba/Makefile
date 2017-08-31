all:
	 gcc -c prueba.c
	 gcc -c main.c
	 gcc -o main prueba.o main.o

test_prueba: clean
	 gcc -c prueba.c
	 gcc -c test_prueba.c
	 gcc -o test_prueba.exe prueba.o test_prueba.o
	 ./test_prueba.exe

test:	 test_prueba

clean:
	 rm *.out *.o *.exe || exit 0

run:
	 gcc -c prueba.c
	 gcc -c main.c
	 gcc -o main.exe prueba.o main.o
	 ./main
