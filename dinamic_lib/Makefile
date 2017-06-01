system: libseno.o
	gcc main.o -o trabalho_04 -L. -lseno -Wl,-rpath,.
libseno.o:
	gcc -c -fPIC main.c ../libseno.c
	gcc -shared -fPIC -o libseno.so libseno.o main.o
clean:
	rm -rf *.o *.so trabalho_04
