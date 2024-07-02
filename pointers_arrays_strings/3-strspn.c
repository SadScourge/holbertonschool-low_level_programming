#include "main.h"
/**
 *
 *
 */
unsigned int _strspn(char *s, char *accept)
{
    int count = 0;
    char *start = accept;

    while (*s != ' ')
    {
        while(*accept != '\0')
        {
            if (*s == *accept)
            {
                count++;
            }
            accept++;
        }
        s++;
        accept = start;
    }
    return (count);
}