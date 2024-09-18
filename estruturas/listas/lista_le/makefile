# @compile file
# Compilador
CC = gcc
# Parametros 
F = \
	-c \
	-Wall \
	-g \

OBJ = \
	teste.o \
	lista.o \
	item.o \

# Regra para gerar executavel
test: $(OBJ)
	$(CC) $(OBJ) -o $@
	
# Regra para gerar arquivos objetos
%.o: %.c
	$(CC) $(F) $<

teste: test
	clear
	./test