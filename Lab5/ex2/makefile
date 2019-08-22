
pi: code.o 
	gcc code.o -lpthread -o code -lm
pi.o: code.c 
	gcc code.c -lpthread -c code.o -lm
run:
	./code
clear:  
	rm -rf *.o
	rm -f Recount.out
	em -f *~ *.h.gch *#

