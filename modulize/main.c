#include <stdio.h>
#include "func.h"

extern int BASE;

int main()
{
    printf("add(1, 2) = %d\n", add(1, 2));
    printf("multi(1, 2) = %d\n", multi(1, 2));

		printf("extern var BASE = %d\n", BASE);
    return 0;
}
