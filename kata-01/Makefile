CC = gcc
CFLAGS = -I.
DEPS = last_word_length.h
OBJ = last_word_length.o last_word_length_main.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

last_word_length.exe: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm *.o *.exe *.gch
