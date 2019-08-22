CC=gcc
TARGET=main
OBJ=main.o sum.o sub.o

$(TARGER): $(OBJ)
	$(CC) -o $@ $(OBJ)
$(OBJ):sub.h sum.h
main.o sum.o: sum.h
main.o sub.o: sub.h





