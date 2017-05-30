system: clean libseno.o main.o
	gcc -c main.c -lm -o trabalho_04 -L. -libseno
	rm -rf *.o
libseno.so: libseno.c
	gcc  -shared -fPIC libseno.c -o libseno.so
clean:
	rm -rf *.o
