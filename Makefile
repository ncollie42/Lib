CC = gcc
FLAGS = -g
LIBNAME = nc
FILES = strchr.c \
	strcmp.c \
	isdigit.c \
	toupper.c \
	tolower.c \
	strlen.c \
	memset.c \
	strcpy.c \
	strdup.c \
	strncpy.c
OBJECTS = $(FILES:.c=.o)

all: build

build: $(FILES)
	$(CC) $(FLAGS) $(FILES)

ob: $(FILES) 
	$(CC) -c $(FILES)

lib: ob
	ar rcs lib$(LIBNAME).a $(OBJECTS)

clean:
	rm $(OBJECTS) lib$(LIBNAME).a

re: clean lib
