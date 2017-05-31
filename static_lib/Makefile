system: clean libseno.o main.o
	gcc main.o libseno.so -lm -o trabalho_04
	rm -rf *.o
main.o: main.c
	gcc -c main.c -o main.o -lm
libseno.o: 
	gcc -c ../libseno.c -o libseno.so -lm
clean:
	rm -rf *.o
