#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
#include "3-calc.h"

/**
 * 
 * 
 * 
 * 
 */
void main(int argc, char **argv)
{
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((argv[2] == ("/" || "%")) && (argv[3] == 0))
	{
		printf("Error\n");
		exit(100);
	}




	get_op_func
}