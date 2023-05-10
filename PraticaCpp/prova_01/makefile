all: main

main: main.o funcionario.o
	g++ main.o funcionario.o -o main

main.o: main.cpp funcionario.h
	g++ -c main.cpp

alunos.o: funcionario.cpp funcionario.h
	g++ -c alunos.cpp

clean:
	rm -f main *.o
