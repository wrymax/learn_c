#include <stdio.h>
#include <string.h>
#include <ctype.h>

int atoi(char[]);

int main()
{
  /*
  short a = 0;
  long b = 1;
  printf("a - b = %ld", a-b);
  
  unsigned char c = 'c';
  unsigned int d = 100;
  
  
  unsigned long l1 = 0xFUL;
  
  printf("unsigned long hexadecimal: %ld\n", l1);
  
  char c1 = 'a';
  printf("integer of char c1 = %d\n", c1);
  */

  /* All letters are just integers in ASCII */
  /*
  int i = 'A';
  while(i <= 'z')
  {
    printf("integer of char %c = %d\n", i, i);
    i++;
  }
  */

  // escape sequences
  /*
  printf("Octal %d\n", '\077');
  printf("Hexadecimal %d\n", '\x33');
  printf("bell char: %d\n", '\a');

  char escape_sequences[] = {'\a', '\b', '\f', '\n', '\r', '\t', '\v', '\\', '\?', '\'', '\"', '\0'};

  int i = 0;
  while(escape_sequences[i])
  {
    int c = escape_sequences[i];
    printf("%c: %d\n", c, c);
    i++;
  }
  */

  // string in ""
  char str[] = "Hello World!";
  printf("length of 'Hello World!' is %ld\n", strlen(str));

  // enumeration constant
  enum boolean { NO, YES };
  enum months { JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };
  printf("DEC = %d\n", DEC);

  char c, line[1000];
  float eps = 1.0e-5;

  const double e = 2.77777777;
  // e += 1; // Will throw error here

  char ic[] = "134";
  printf("atoi of \"134\" = %d\n", atoi(ic));

  /* bitwise operators */
  printf("7 & ~2 = %d\n", 7 & ~2);
  printf("7 << 2 = %d\n", 7 << 2);
  printf("7 >> 2 = %d\n", 7 >> 2);



  return 0;
}

int atoi(char s[])
{
  int i, n;
  n = 0;

  for(i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
  {
    printf("i = %d, n = %d, s[i] = %c\n", i, n, s[i]);
    n = 10 * n + (s[i] - '0');
  }

  return n;
}