#ifndef MAIN.H
#define MAIN.H

#include <stdio.h>
#include <stdlib.h>

size_t print_list(const list_t *h);

struct list_s
{
	char *str;
	struct list_s *next;
};

typedef struct list_s list_t;


#endif
