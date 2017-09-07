all:
	 gcc -c project.c
	 gcc -c main.c
	 gcc -o main project.o main.o

test_project: clean
	 gcc -c project.c
	 gcc -c test_project.c
	 gcc -o test_project.exe project.o test_project.o
	 ./test_project.exe

test:	 test_project

clean:
	 rm *.out *.o *.exe || exit 0

run:
	 gcc -c project.c
	 gcc -c main.c
	 gcc -o main.exe project.o main.o
	 ./main
