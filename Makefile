AR=ar
FLAG= -Wall -g
GC=GCC

all: myBank.so myBank.a mains maind

mains: main.o myBank.a
	$(GC) $(FLAG) -o mains main.o myBank.a 

maind: main.o myBank.so
	$(GC) $(FLAG) -o maind main.o ./myBank.so

myBank.so: myBank.o
	$(GC) -shared -o myBank.so myBank.o

myBank.a: myBank.o
	$(AR) -rcs myBank.a myBank.o


myBank.o: myBank.c myBank.h
	$(GC) $(FLAG) -c myBank.c myBank.h

main.o: main.c myBank.h
	$(GC) $(FLAG) -c main.c 	

.PHONY: clean all 

clean:
	rm -f *.o *.a *.so *.gch mains maind 
