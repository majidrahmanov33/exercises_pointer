/*  */
#include <stdio.h>

void f( const int *xPtr );

int main()
{  int y;      
   f( &y );  
   return 0;  
}

void f( const int *xPtr )
{	printf("the pointer holding %p \n", xPtr);
	printf("the value of the pointer %d \n", *xPtr);
  // *xPtr = 100; 
}

