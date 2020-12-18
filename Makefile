#Makefile C++ 

BIN = ./bin
SRC = ./src
INC = ./include

PROG = $(BIN)/main
CC = g++
CPPFLAGS = -Wall -std=c++11 -I./include

OBJS = $(BIN)/profissional.o $(BIN)/tratador.o $(BIN)/veterinario.o $(BIN)/domestico.o $(BIN)/nativo.o $(BIN)/exotico.o $(BIN)/animal.o $(BIN)/anfibio.o $(BIN)/anfibio_domestico.o $(BIN)/anfibio_nativo.o $(BIN)/anfibio_exotico.o $(BIN)/ave.o $(BIN)/ave_domestica.o  $(BIN)/ave_exotica.o $(BIN)/ave_nativa.o $(BIN)/mamifero.o $(BIN)/mamifero_domestico.o $(BIN)/mamifero_exotico.o $(BIN)/mamifero_nativo.o $(BIN)/reptil.o $(BIN)/reptil_domestico.o $(BIN)/reptil_exotico.o $(BIN)/reptil_nativo.o $(BIN)/estoque.o $(BIN)/main.o $(BIN)/loja.o $(BIN)/funcloja.o

all: $(OBJS)
	$(CC) $(OBJS) -o $(PROG)

debug: CPPFLAGS += -DDEBUG -g -o0
debug: clean all

$(BIN)/main.o : $(SRC)/main.cpp
	$(CC) $(CPPFLAGS) -c $(SRC)/main.cpp -o $@

$(BIN)/profissional.o : $(SRC)/profissional.cpp $(INC)/profissional.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/profissional.cpp -o $@
$(BIN)/tratador.o : $(SRC)/tratador.cpp $(INC)/tratador.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/tratador.cpp -o $@
$(BIN)/veterinario.o : $(SRC)/veterinario.cpp $(INC)/veterinario.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/veterinario.cpp -o $@

$(BIN)/domestico.o : $(SRC)/domestico.cpp $(INC)/domestico.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/domestico.cpp -o $@
$(BIN)/.o : $(SRC)/.cpp $(INC)/.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/.cpp -o $@
$(BIN)/nativo.o : $(SRC)/nativo.cpp $(INC)/nativo.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/nativo.cpp -o $@
$(BIN)/exotico.o : $(SRC)/exotico.cpp $(INC)/exotico.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/exotico.cpp -o $@

$(BIN)/animal.o : $(SRC)/animal.cpp $(INC)/animal.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/animal.cpp -o $@
$(BIN)/anfibio.o : $(SRC)/anfibio.cpp $(INC)/anfibio.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/anfibio.cpp -o $@
$(BIN)/ave.o : $(SRC)/ave.cpp $(INC)/ave.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/ave.cpp -o $@
$(BIN)/mamifero.o : $(SRC)/mamifero.cpp $(INC)/mamifero.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/mamifero.cpp -o $@
$(BIN)/reptil.o : $(SRC)/reptil.cpp $(INC)/reptil.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/reptil.cpp -o $@

$(BIN)/anfibio_domestico.o : $(SRC)/anfibio_domestico.cpp $(INC)/anfibio_domestico.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/anfibio_domestico.cpp -o $@
$(BIN)/anfibio_exotico.o : $(SRC)/anfibio_exotico.cpp $(INC)/anfibio_exotico.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/anfibio_exotico.cpp -o $@
$(BIN)/anfibio_nativo.o : $(SRC)/anfibio_nativo.cpp $(INC)/anfibio_nativo.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/anfibio_nativo.cpp -o $@


$(BIN)/ave_domestica.o : $(SRC)/ave_domestica.cpp $(INC)/ave_domestica.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/ave_domestica.cpp -o $@
$(BIN)/ave_exotica.o : $(SRC)/ave_exotica.cpp $(INC)/ave_exotica.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/ave_exotica.cpp -o $@
$(BIN)/ave_nativa.o : $(SRC)/ave_nativa.cpp $(INC)/ave_nativa.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/ave_nativa.cpp -o $@


$(BIN)/mamifero_domestico.o : $(SRC)/mamifero_domestico.cpp $(INC)/mamifero_domestico.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/mamifero_domestico.cpp -o $@
$(BIN)/mamifero_exotico.o : $(SRC)/mamifero_exotico.cpp $(INC)/mamifero_exotico.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/mamifero_exotico.cpp -o $@
$(BIN)/mamifero_nativo.o : $(SRC)/mamifero_nativo.cpp $(INC)/mamifero_nativo.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/mamifero_nativo.cpp -o $@

$(BIN)/reptil_domestico.o : $(SRC)/reptil_domestico.cpp $(INC)/reptil_domestico.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/reptil_domestico.cpp -o $@
$(BIN)/reptil_exotico.o : $(SRC)/reptil_exotico.cpp $(INC)/reptil_exotico.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/reptil_exotico.cpp -o $@
$(BIN)/reptil_nativo.o : $(SRC)/reptil_nativo.cpp $(INC)/reptil_nativo.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/reptil_nativo.cpp -o $@

$(BIN)/estoque.o : $(SRC)/estoque.cpp $(INC)/estoque.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/estoque.cpp -o $@

$(BIN)/loja.o : $(SRC)/loja.cpp $(INC)/loja.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/loja.cpp -o $@

$(BIN)/funcloja.o : $(SRC)/funcloja.cpp $(INC)/funcloja.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/funcloja.cpp -o $@

clean:
	rm -f core $(PROG) $(OBJS)
