BIN=main
CFLAGS=-g -Wall

.PHONY: all clean

all: $(BIN)

$(BIN): main.o object.o integer.o

clean:
	rm -f $(BIN) *.o
	rm -rf $(BIN).dSYM
