system: libseno.so
	gcc main.o -o trabalho_04 -L. -lseno -lm -ldl -Wl,-rpath,.
libseno.so:
	gcc -c -fPIC main.c ../libseno.c -lm
	gcc -shared -fPIC -o libseno.so libseno.o main.o -lm
clean:
	rm -rf *.o *.so trabalho_04
