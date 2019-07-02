CC = gcc
FLAGS = -g
FILES = main.c strlen.c memset.c strcpy.c strdup.c strncpy.c

all: build

build: $(FILES)
	$(CC) $(FLAGS) $(FILES)