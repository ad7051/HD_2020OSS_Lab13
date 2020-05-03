CC=gcc
TP=manage
DEPENDENCY=main.c show.o manage.o

$(TP):$(DEPENDENCY)
	$(CC) -o $@ $^
clean:
	rm *.o manage
