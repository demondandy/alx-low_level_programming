#ifndef MAIN_H

#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/* printf.c */
int _printf(const char *, ...);

/* _putchar.c */
int _putchar(char);

/* handler.c */
int handler(const char *, va_list);
int percent_handler(const char *, va_list, int *);

/**
 * struct _format - Typedef struct
 *
 * @type: Format
 * @f: The function associated
 */
typedef struct _format
{
	char type;
	int (*f)(va_list);
} format;
#endif
