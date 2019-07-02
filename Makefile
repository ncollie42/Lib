CC = gcc
FILES = main.c strlen.c memset.c

all: build

build: $(FILES)
	$(CC) $(FILES)