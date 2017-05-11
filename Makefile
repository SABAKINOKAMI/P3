OBJS=main.o input.o retrieval.o output.o
CC=gcc

name_manage:$(OBJS)
	$(CC) $(OBJS) -o name_manage

main.o:main.c variable.h
	$(CC) -c main.c

input.o:input.c variable.h
	$(CC) -c input.c

retrieval.o: retrieval.c variable.h
	$(CC) -c retrieval.c

output.o: output.c variable.h
	$(CC) -c output.c
clean:
	rm -f $(OBJS)


