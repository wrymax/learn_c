#include <stdio.h>
#include <stdlib.h>
// #include "func.h"

#define LOWER 0
#define UPPER 300
#define STEP 20

int add(int a, int b);
int multi(int a, int b);

int main()
{
  // printf("Size of int: %lu \n", sizeof(int));
  // printf("Size of float: %lu \n", sizeof(float));
  // printf("max value of float: %E\n", FLT_MAX);
  // printf("min value of float: %E\n", FLT_MIN);
  // printf("precision: %d\n", FLT_DIG);
  // printf("float using E: %Le\n", 314159E-5L);
  
  /////////////////////////////////////////////////
  /* Temperatre Conversion */
  /////////////////////////////////////////////////
  int upper, step, lower;
  float fahr, celsius;
  printf("%s  %s\n", "Fahr", "Celsius");
  for(fahr = LOWER; fahr <= UPPER; fahr += STEP)
  {
    celsius = (fahr-32.0)*5.0/9.0;
    printf("%4.0f %6.1f\n", fahr, celsius);
  }

  /*
  // A snippet of code for malloc, scanf, putchar and pointer
  char *pointer = malloc(sizeof(char) * 10);
  char *float_p = pointer;
  int i;
  char newline;
  for(i = 0; i < 10; i++)
  {
    printf("Char No. %d/10: ", i+1);
    scanf("%c%c", float_p, &newline);
    float_p += 1;
  }

  printf("The input chars are: \n");
  int j;
  for(j = 0; j < 10; j++) 
  {
    putchar(*(pointer + j));
  }
  printf("\n");

  // free(pointer);
  */

  /*
  // EOF
  long nc;

  nc = 0;
  while (getchar() != EOF)
    ++nc;
  
  printf("%ld\n", nc);  
  */

  int a = 10, b = 20;

  printf("a + b = %d\n", add(a, b));
  printf("a * b = %d\n", multi(a, b));
  
  
  // pointer on string
  printf("\n-- pointer on string --\n");
  char *str = "abcdefg";

  while (*str)
    printf("%c", *str++);
  printf("\n-- end --\n");
  
  // bitwise and
  printf("\n-- Bitwise and operator --\n");
  printf("8 & 1 = %d\n", 8&1);
  printf("12 & 5 = %d\n", 12&5);
  printf("\n-- end --\n");
  
  printf("\n-- << --\n");
  printf("0 << 7 = %d\n", 0 << 7);
  printf("1 << 7 = %d\n", 1 << 7);
  printf("\n-- end --\n");

	// atof
	char *s = "-100.23";
	printf("atof: %g\n", atof(s));
  
  return 0;
}

int add(int a, int b)
{
    return a + b;
}
int multi(int a, int b)
{
    return a * b;
}
