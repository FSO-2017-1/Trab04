system: clean
	gcc -o trabalho_04 main.c -ldl 
	rm -rf *.o
libseno.so:
	gcc -fPIC -shared -Wl,-soname ../libseno.c -o libseno.so -lm
clean:
	rm -rf *.o
