/* Get operands from reverse polish notation*/

#include <stdio.h>
#include <ctype.h>
#include "calc.h"

/* getop: get next operator or numeric operand */
int getop(char s[])
{
	int i, c;

	// skip blank characters and tabs
	while ((s[0] = c = getch()) == ' ' || c == '\t')
		;

	s[1] = '\0';
	if (!isdigit(c) && c != '.')
		return c;         /* NAN */

	i = 0;
	if (isdigit(c))    /* collect integer part, stored in s[] */
		while (isdigit(s[++i] = c = getch()))
			;

	if (c == '.')       /* collect fraction part, stored in s[] */
		while (isdigit(s[++i] = c = getch()))
			;

	// set '\0' at the end of current number
	s[i] = '\0';

	if (c != EOF)
		ungetch(c);

	return NUMBER;
}
