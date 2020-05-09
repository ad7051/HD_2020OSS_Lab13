CC=gcc
TP=manage
DP=Dmanage
DEPENDENCY=main.c show.o manage.o

$(DP):$(DEPENDENCY)
	$(CC) -DDEBUG -o $@ $^

$(TP):$(DEPENDENCY)
	$(CC) -o $@ $^

clean:
	rm *.o manage Dmanage
