CC = gcc
FLAGS = -g
FILES = strchr.c strcmp.c isdigit.c toupper.c  tolower.c main.c strlen.c memset.c strcpy.c strdup.c strncpy.c

all: build

build: $(FILES)
	$(CC) $(FLAGS) $(FILES)