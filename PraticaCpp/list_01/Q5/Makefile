
CC=g++
CFLAGS=-c -Wall

EXECUTAVEL=Q5

OBJETOS=main.o fatorial.o primalidade.o

all: $(EXECUTAVEL)

$(EXECUTAVEL): $(OBJETOS)
	$(CC) $(OBJETOS) -o $@

main.o: main.cpp fatorial.h primalidade.h
	$(CC) $(CFLAGS) main.cpp -o $@

fatorial.o: fatorial.cpp fatorial.h
	$(CC) $(CFLAGS) fatorial.cpp -o $@

primalidade.o: primalidade.cpp primalidade.h
	$(CC) $(CFLAGS) primalidade.cpp -o $@

.PHONY: clean
clean:
	rm -f *.o