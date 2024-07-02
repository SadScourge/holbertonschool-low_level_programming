#include "main.h"
/**
 *
 * 
 * 
 */
char *_strpbrk(char *s, char *accept)
{
    char *start = accept;

    while ((*s != *accept) && (*s != '\0'))
    {
        while ((*s != *accept) && (*accept != '\0'))
        {
            accept++;
        }
        if (*accept == '\0')
        {
            accept = start;
        }
        if (*s !=  *accept)
        {
            s++;
        }
    }
    if (*s == '\0')
    {
        return (0);
    }
    else
    {
        return (s);
    }
}