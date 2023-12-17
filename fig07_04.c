/* Using the & and * operators */
#include <stdio.h>

int main()
{
   int a=7;        
   int *aPtr;   
   aPtr = &a;   
   printf( "The address of a is %p"
           "\nThe address of aPtr is %p", &a, &aPtr );
   printf( "\n\nThe value of a is %d"   
           "\nThe value of *aPtr is %d", a, *aPtr );
   printf( "\n\nShowing that * and & are complements of "
           "each other\n&*aPtr = %p"   
           "\n*&aPtr = %p"
           "\naPtr = %p"
           "\n &a = %p\n", &*aPtr, *&aPtr, aPtr, &a );

   return 0;
}
