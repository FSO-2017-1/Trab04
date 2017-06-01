system: clean libseno.o main.o
	gcc main.o libseno.so -o trabalho_04
	rm -rf *.o
main.o: main.c
	gcc -c main.c -o main.o
libseno.o:
	gcc -c ../libseno.c -o libseno.so
clean:
	rm -rf *.o trabalho_04 libseno.so
