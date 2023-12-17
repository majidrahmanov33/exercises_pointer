
#include <stdio.h>

int main()
{  int x=2; 
   int y=1;
	printf("what is ? %p \n", &x);
	printf("what is ? %p \n", &y);
   int * const ptr = &x; 
   printf("what we have in ptr ? %p \n", ptr);
   *ptr = 7;
    printf("where value 7 gos ??? x = %d \n", x);
   ptr = &y;
   return 0;
}

