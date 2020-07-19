#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdio.h>
#include <stdarg.h>

void pchar(va_list charl);
void pint(va_list charl);
void pfloat(va_list charl);
void pstring(va_list charl);

/**
* struct cars - check all
* @argu: argumentos
* @func: puntero a la funcion
*/

typedef struct cars
{
	char *argu;
	void (*func)(va_list);
} cars;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
