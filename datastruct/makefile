all: main.out
main.out: main.c array.o binary.o BST.o linkedlist.o hash.o
	gcc main.c array.o binary.o BST.o linkedlist.o hash.o -o main.out
array.o: array.h array.c
	gcc -c array.c -o array.o
binary.o: binary.h binary.c
	gcc -c binary.c -o binary.o
BST.o: BST.h BST.c
	gcc -c BST.c -o BST.o
linkedlist.o: linkedlist.h linkedlist.c
	gcc -c linkedlist.c -o linkedlist.o
hash.o: hash.h hash.c
	gcc -c hash.c -o hash.o
clean:
	rm array.o binary.o BST.o linkedlist.o hash.o main.out
