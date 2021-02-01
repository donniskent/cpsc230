run: linkedlist.o test_list.o 
	gcc -o run linkedlist.o test_list.o 

linkedlist.o: linkedlist.c linkedlist.h
	gcc -c linkedlist.c

test_list.o: test_list.c linkedlist.h
	gcc -c test_list.c
