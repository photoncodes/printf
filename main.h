#ifndef PRINTF_HEADER
#define PRINTF_HEADER

#include <stdlib.h>
#include <stdarg.h>

#define _PRAMA_INIT (0, 0, 0, 0, 0, 0, 0, 0, 0, 0)

/**
 *  struct parameters - struct to get the pramters
 *  @unsign : unsigned par
 *  @plus :plus flag
 *  @space: space flag
 *  @hashtag:hashtag flag
 *  @zero :zero flag
 *  @minus :minus flag
 *  @width :field width specified
 *  @precision: field precision specified
 *  @h_modif: field h_modifier specified
 *  @l_modif: field l_modifier specified
 */
typedef struct parameters
{
	unsigned int unsign :1;
	unsigned int plus :1;
	unsigned int space :1;
	unsigned int hashtag :1;
	unsigned int zero :1;
	unsigned int minus :1;
	unsigned int width :1;
	unsigned int precision :1;
	unsigned int h_modif :1;
	unsigned int l_modif :1;
} par_t;

int _printf(const char *format, ...);
int _putchar(char c);
void stringWriter(char *c, int *sum);
<<<<<<< HEAD
char *convert(int x);
void reverseString(char *str, int len);
int get_flag(char *r, par_t *par);
int get_mdif(char *r, par_t *par);
=======
void stringExactWriter(char *c, int *sum);
void reverseString(char* str, int len);
int countNumbers(unsigned int x);
int countDigits(unsigned int x, unsigned int base);
char *convertNumber(int x);
char *convertUnsignedNum(unsigned int x);
char *convertToOct(unsigned int x);
char *convertToHex(unsigned int x, int upper);
>>>>>>> 7ecc4ba0c17a443c5b561af62ddeb0a29ac5dc35
#endif
