CC      := g++

SRCDIR      := src
BUILDDIR    := build
BIN			:= bin
TARGET   	:= bin/main

SRCEXT		:= cpp
SOURCES		:= $(shell find $(SRCDIR) -type f -name *.$(SRCEXT))
OBJECTS		:= $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SOURCES:.$(SRCEXT)=.o))
CFLAGS		:= -Wall -pedantic -std=c++2a
INC 		:= -I include

$(TARGET): $(OBJECTS)
	@echo "Juntando os arquivos $^ para criar o executável $(TARGET) $(LIB)"; $(CC) $^ -o $(TARGET) $(LIB)
	@echo ""
	@echo "Para executar o programa, digite ./$(TARGET) $(LIB)"

$(BUILDDIR)/%.o: $(SRCDIR)/%.$(SRCEXT)
	@mkdir -p $(BUILDDIR)
	@mkdir -p $(BIN)
	@echo "Compilando arquivo $@ a partir de $<"; $(CC) $(CFLAGS) $(INC) -c -o $@ $<

clean:
	@echo "Limpando...";
	@echo -n "Removendo diretório /build... "; $(RM) -r $(BUILDDIR) $(TARGET)
	@echo "OK!"
	@echo -n "Removendo diretório /bin... "; $(RM) -r $(BIN) $(TARGET)
	@echo "OK!"

.PHONY: clean
