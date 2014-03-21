TARGETS=scanning

OBJECTS=$(addsuffix .o, $(TARGETS))

CFLAGS=-Wall
ifdef DEBUG
	CFLAGS+=-g
endif

$(TARGETS): $(OBJECTS)

.PHONY: clean
clean:
	$(RM) -rf $(TARGETS) $(OBJECTS)