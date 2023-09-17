# main:main.o
# 	gcc -g3 -Wall main.o -o main.exe
# main.o:main.c
# 	gcc -g3 -Wall -c main.c -o main.o
# clear:
# 	rm *.o
# clean:
# 	rm *.o *.exe


main:main.o lib.o
	gcc -g3 -Wall main.o lib.o -o main.exe

main.o:main.c
	gcc -g3 -Wall -c main.c -o main.o

lib.o:lib.c
	gcc -g3 -Wall -c lib.c -o lib.o

clear:
	rm *.o
   
clean:
	rm *.o *.exe