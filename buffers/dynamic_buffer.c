#include <stdio.h>
#include <stdlib.h>
#include "nc_lib_buffer.h"

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

/*
    Will add contents to buffer, if not enough room it will create new
    and move everything over and return a new pointer to the new buffer.
 */

dynamic_buffer *add_to_buffer(dynamic_buffer *buff, char *str, int size)
{
    char    *tmp;
    int     difference;

    if ((buff->size + size) > buff->limit)
    {
        if (!(tmp = nc_malloc(buff->limit * 2)))
            return NULL;
        nc_strncpy(tmp, buff->buffer, buff->size);
        difference = (buff->current_pos - buff->buffer);
        printf("diff in pos: %d\n", difference);
        free(buff->buffer);
        buff->buffer = tmp;
        buff->current_pos = tmp + difference;
        buff->limit *= 2;
        
    }
    nc_strncpy(buff->current_pos, str, size);
    buff->current_pos += size;
    buff->size += size;
    return buff;
}

void    debug_print_buffer(dynamic_buffer *buff)
{
    printf("buffer: %s\ncurrent: %d\nsize: %d\nlimit: %d\n\n",
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