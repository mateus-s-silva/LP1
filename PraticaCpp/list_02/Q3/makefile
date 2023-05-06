CC = g++
CFLAGS = -std=c++11 -Wall

# Nome do executável
TARGET = programa

# Arquivos fonte
SOURCES = main.cpp turma.cpp aluno.cpp

# Objetos gerados a partir dos arquivos fonte
OBJECTS = $(SOURCES:.cpp=.o)

# Regra para compilar os objetos
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# Regra para compilar o programa
$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(TARGET)

# Regra para limpar os arquivos objeto e o executável
clean:
	rm -f $(OBJECTS) $(TARGET)
