CC = gcc
FILES = main.c
LIB_STANDARD = -L $(LIBRARY_PATH)/standard -I $(LIBRARY_PATH)/standard -lstandard
LIB_BUFFER =  -L $(LIBRARY_PATH)/buffers -I $(LIBRARY_PATH)/buffers -lbuffer 
all:
	$(CC) $(FILES) $(LIB_STANDARD) $(LIB_BUFFER) -g