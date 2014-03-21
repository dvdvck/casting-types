CFLAGS=-Wall

ifdef DEBUG
	CFLAGS+=-g
endif

scanning: scanning.o

.PHONY: clean
clean:
	$(RM) -rf scanning *.o