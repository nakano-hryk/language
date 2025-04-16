a.out : main.o sub.o
	cc -o a.out main.o sub.o -lm
main.o : main.c
	cc -c main.c pi.h
sub.o : sub.c
	cc -c sub.c
clean : 
	rm a.out main.o sub.o pi.h.gch

