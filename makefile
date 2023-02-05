list: list_main.o linked_list.o
	gcc -o main.exe list_main.o linked_list.o

list_main.o: list_main.c linked_list.h
	gcc -c list_main.c

linked_list.o: linked_list.c linked_list.h
	gcc -c linked_list.c