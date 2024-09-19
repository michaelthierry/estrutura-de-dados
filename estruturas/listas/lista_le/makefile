# @compile file
# Compilador
CC = gcc
# Parametros 
F = \
	-c \
	-Wall \
	-g \
# Arquivos objetos
OBJ = \
	main.o \
	lista.o \
	item.o \

# limpa a tela e executa o programa
run: lista
	clear
	./lista

# Regra para gerar executavel
lista: $(OBJ)
	$(CC) $(OBJ) -o $@
	
# Regra para gerar arquivos objetos
%.o: %.c
	$(CC) $(F) $<
