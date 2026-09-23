CC = gcc
CFLAGS = -Wall -Wextra -Iinclude -std=c11
OBJS = src/main.o src/vetor.o src/metricas.o src/algoritmos.o

ordenador: $(OBJS)
	$(CC) $(CFLAGS) -o ordenador $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f src/*.o ordenador