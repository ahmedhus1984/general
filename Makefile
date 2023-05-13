test:test.o general_lib.o
	gcc -g3 -Wall general_lib.o test.o -o test.exe
test.o:test.c
	gcc -g3 -Wall -c test.c -o test.o
general:general.o general_lib.o
	gcc -g3 -Wall general_lib.o general.o -o general.exe
general.o:general.c
	gcc -g3 -Wall -c general.c -o general.o
general_lib.o:general_lib.c
	gcc -g3 -Wall -c general_lib.c -o general_lib.o
clear:
	rm *.o
clean:
	rm *.o *.exe