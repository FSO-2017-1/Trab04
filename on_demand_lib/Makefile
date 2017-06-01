system: libseno.so
	gcc main.o -o trabalho_04 -L. -lseno -ldl -Wl,-rpath,.
libseno.so:
	gcc -c -fPIC main.c ../libseno.c
	gcc -shared -fPIC -o libseno.so libseno.o main.o 
clean:
	rm -rf *.o *.so trabalho_04
