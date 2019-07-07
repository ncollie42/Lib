CC = gcc
FILES = dynamic_buffer.c 
FLAGS = -fpic -shared
NAME = buffer
LIB_LOCATION = $(DYLD_LIBRARY_PATH)
OBJECTS = $(FILES:.c=.o)

all: shared 
	$(CC) main.c -L $(LIBRARY_PATH)/standard -I $(LIBRARY_PATH)/standard -lstandard -L. -I . -lbuffer  
shared:
	$(CC) $(FLAGS) $(FILES) -o lib$(NAME).so -I $(LIBRARY_PATH)/standard -L $(LIBRARY_PATH)/standard -lstandard

%.o: %.c
	$(CC) -c $< -o $@ -I ../standard 

archive: $(OBJECTS)
	ar rcs lib$(NAME).a $(OBJECTS)

clean:
	rm $(OBJECTS)

fclean: clean
	rm lib$(NAME).a

re: fclean all