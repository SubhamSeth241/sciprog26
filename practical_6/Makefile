CC = gcc
CCFLAGS = -O3
LDFLAGS = -lm

all: mmc

mmc: Mult_Matrices_main.o matmult.o
	$(CC) -o $@ $^ $(LDFLAGS)
# gcc -o mmc Mult_Matrices_main.o matmult.o -lm (meaning of upperline)

matmult.o: matmult.c
	$(CC) -c $(CCFLAGS) $<

Mult_Matrices_main.o: Mult_Matrices_main.c
	$(CC) -c $(CCFLAGS) $<

clean:
	rm *.o
