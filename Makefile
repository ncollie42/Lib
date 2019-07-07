CC = gcc
FILES = main.c

all:
	$(CC) $(FILES) -L $(LIBRARY_PATH)/standard -I $(LIBRARY_PATH)/standard -L $(LIBRARY_PATH)/buffers -I $(LIBRARY_PATH)/buffers -lbuffer -lstandard