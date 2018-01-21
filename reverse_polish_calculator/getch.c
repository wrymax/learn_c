/* getch and ungetch: getchar and push back from a buffer */

#include <stdio.h>
#include "calc.h"

#define BUFSIZE  100   /* Buffer size for ungetch buffer */
char buf[BUFSIZE];     // buffer for ungetch
int bufp = 0;          // next free position in buf

/* get a (possibly pushed back) character */
int getch(void)
{
	return (bufp > 0) ? buf[--bufp] : getchar();
}

/* push char back on input */
void ungetch(int c)
{
	if (bufp >= BUFSIZE)
		printf("ungetch: too many characters\n");
	else {
		buf[bufp++] = c;
		printf("c = %d\n", c);
	}
}
