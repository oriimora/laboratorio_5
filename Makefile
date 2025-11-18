CC = gcc
CFLAGS = -Wall -g

SRC = src
INC = include

all: main

main: $(SRC)/main.o $(SRC)/lista.o
	$(CC) $(CFLAGS) -o main $(SRC)/main.o $(SRC)/lista.o

$(SRC)/main.o: $(SRC)/main.c $(INC)/lista.h
	$(CC) $(CFLAGS) -I$(INC) -c $(SRC)/main.c -o $(SRC)/main.o

$(SRC)/lista.o: $(SRC)/lista.c $(INC)/lista.h
	$(CC) $(CFLAGS) -I$(INC) -c $(SRC)/lista.c -o $(SRC)/lista.o

clean:
	rm -f $(SRC)/*.o main
