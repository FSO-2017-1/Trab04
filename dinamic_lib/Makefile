system: libseno.o
	gcc main.o -o trabalho_04 -L. -lseno -lm -Wl,-rpath,.
libseno.o:
	gcc -c -fPIC main.c ../libseno.c -lm
	gcc -shared -fPIC -o libseno.so libseno.o main.o
clean:
	rm -rf *.o *.so
