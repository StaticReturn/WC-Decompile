# Makefile for OSX
# 

CC	= clang
CFLAGS	= -Wall
LDFLAGS	= 
OBJ	= main.o 01.o data.o strings.o dd_errors.o winAPI.o
HFILES = extern_data.h prototypes.h extern_strings.h typedefs.h

# Create a dynamically linked binary.
prince: $(OBJ)
	$(CC) -o wc $^ $(LDFLAGS) 

%.o: %.c $(HFILES)
	$(CC) -c $< $(CFLAGS)

clean:
	rm -rf $(OBJ) wc
