# criando uma variável. Para acessar eu coloco $(NOME_DA_VARIAVEL)
CC = g++
FLAG = -c -Wall
INCLUDE = ./include
OBJ = ./obj
SRC = ./src

all: allobj program

program:
	$(CC) ./$(OBJ)/*.o ./$(INCLUDE)/*.h -o CANCAN

allobj: main.o voos.o astronautas.o

main.o:
	$(CC) $(FLAG) $(SRC)/main.cpp -o $(OBJ)/main.o

voos.o:
	$(CC) $(FLAG) $(SRC)/voos.cpp -o $(OBJ)/voos.o

astronautas.o:
	$(CC) $(FLAG) $(SRC)/astronautas.cpp -o $(OBJ)/astronautas.o

clean:
	rm $(OBJ)/*.o