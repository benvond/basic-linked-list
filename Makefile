CC = clang++
CFLAG = -g -Wall -Wextra

all: main.o link.o
	$(CC) $(CFLAG) main.o link.o -o link

main.o: main.cpp
	$(CC) $(CFLAG) -c main.cpp -o main.o

link.o: link.cpp link.h
	$(CC) $(CFLAG) -c link.cpp -o link.o

clean: main.o link.o
	rm *.o
