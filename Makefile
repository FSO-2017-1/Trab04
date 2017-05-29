system: clean libseno.o main.o
	gcc main.o libseno.o -lm -o run
	rm -rf *.o
	./run
main.o: main.c
	gcc -c main.c -o main.o -lm
libseno.o: libseno.c
	gcc -c libseno.c -o libseno.o -lm
clean:
	rm -rf *.o
