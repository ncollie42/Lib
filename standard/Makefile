CC = gcc
NAME = standard
FLAGS = -Wall -Werror -Wextra -g
FILES = strchr.c \
	strcmp.c \
	isdigit.c \
	toupper.c \
	tolower.c \
	strlen.c \
	memset.c \
	strcpy.c \
	strdup.c \
	strncpy.c \
	malloc.c \
	itoa.c \
	reverse.c \
	itoa_base.c
OBJECTS = $(FILES:.c=.o)

all: archive

archive: $(OBJECTS)
	ar rcs lib$(NAME).a $(OBJECTS)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm $(OBJECTS)

fclean: clean
	rm lib$(NAME).a

re: fclean all

shared:
	gcc -o lib$(NAME).so -fpic -shared $(FILES) -g
