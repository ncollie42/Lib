#include <stdio.h>
#include <stdlib.h>
#include "nc_lib_buffer.h"
#include <unistd.h>

dynamic_buffer *create_dynamic_buffer()
{
    dynamic_buffer *buff_ptr = malloc(sizeof(dynamic_buffer));
    buff_ptr->buffer = nc_malloc(sizeof(char) * 2);
    buff_ptr->current_pos = buff_ptr->buffer;
    buff_ptr->limit = 2;
    buff_ptr->size = 0;
    return buff_ptr;
}

void    delete_dynamic_buffer(dynamic_buffer *buff)
{
    free(buff->buffer);
    free(buff);
}

int     print_buffer(dynamic_buffer *buff, int fd)
{
    write(fd, buff->buffer, buff->size);
    return (buff->size);
}

int     get_new_size(int new, int old_limit)
{
    while (old_limit <= new)
        old_limit *= 2;
    return old_limit;
}

/*
    Will add contents to buffer, if not enough room it will create new
    and move everything over and return a new pointer to the new buffer.
    Also Adds +1 to malloc just incase
 */

dynamic_buffer *add_to_buffer(dynamic_buffer *buff, char *str, int size)
{
    char    *tmp;
    int     difference;
    int     new_limit;

    if ((buff->size + size) >= (buff->limit))
    {
        new_limit = get_new_size(buff->size + size, buff->limit);
        if (!(tmp = nc_malloc(new_limit + 1)))
            return NULL;
        nc_strncpy(tmp, buff->buffer, buff->size);
        difference = (buff->current_pos - buff->buffer);
        free(buff->buffer);
        buff->buffer = tmp;
        buff->current_pos = tmp + difference;
        buff->limit = new_limit;
    }
    strncpy(buff->current_pos, str, size);
    buff->current_pos += size;
    buff->size += size;
    
    return buff;
}

void    debug_print_buffer(dynamic_buffer *buff)
{
    int n;

    n = 0;
    while(n < buff->limit)
       printf("%d ", buff->buffer[n++]);
    printf("\nbuffer: %s\ncurrent: %d\nsize: %d\nlimit: %d\n\n",
     buff->buffer,
      *buff->current_pos,
       buff->size,
        buff->limit);
}

/*
    - add to buffer -
    if not enough space malloc more and move shit over
    add content to end of buffer
    update values
 */