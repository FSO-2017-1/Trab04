system: clean libseno.o
	gcc main.c -o trabalho_04 -L. -llibseno -lm
	rm -rf *.o
libseno.o:
	gcc -shared -fPIC ../libseno.c -o libseno.so -lm
clean:
	rm -rf *.o
