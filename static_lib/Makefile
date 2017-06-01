system: clean libseno.o main.o
	gcc main.o libseno.o -o trabalho_04
	rm -rf *.o
main.o: main.c
	gcc -c main.c -o main.o
libseno.o:
	gcc -c ../libseno.c -o libseno.o
clean:
	rm -rf *.o trabalho_04 libseno.o
