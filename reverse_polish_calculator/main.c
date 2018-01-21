#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "calc.h"

#define MAXOP 100   /* max size of operand or operator */

// Reverse Polish Calculator
int main() 
{
	printf("sp = %d\n", sp);
	int type;
	double op1;
	double op2;
	char s[MAXOP];

	while ((type = getop(s)) != EOF) {
		switch (type) {
			case NUMBER:
				push(atof(s));
				break;
			case '+':
				op2 = pop();
				op1 = pop();
				printf("%g + %g = %g\n", op1, op2, op1 + op2);
				push(op1 + op2);
				break;
			case '*':
				op2 = pop();
				op1 = pop();
				printf("%g * %g = %g\n", op1, op2, op1 * op2);

				push(op1 * op2);
				break;
			case '-':
				op2 = pop();
				op1 = pop();
				printf("%g - %g = %g\n", op1, op2, op1 - op2);

				push(op1 - op2);
				break;
			case '/':
				op2 = pop();
				op1 = pop();

				if (op2 != 0.0) {
					printf("%g / %g = %g\n", op1, op2, op1 / op2);
					push(op1 / op2);
				}
				else
					printf("error: zero divisor\n");
				break;
			case '\n':
				printf(">> result = %.8g\n", pop());
				break;
			default:
				printf("error: unknown command %s\n", s);
				break;
		}
	}

	return 0;
}
