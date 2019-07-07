CC = gcc
FILES = dynamic_buffer.c 
FLAGS = -fpic -shared
NAME = buffer
LIB_LOCATION = $(DYLD_LIBRARY_PATH)

all: lib$(NAME).so
	$(CC) -L $(LIB_LOCATION) -I $(LIB_LOCATION) -l$(NAME) -L. -I. -lnc main.c $(FILES)

lib$(NAME).so:
	$(CC) $(FLAGS) $(FILES) -o $@