/* Cube a variable using call-by-value */
#include <stdio.h>

int cubeByValue( int n );
void cubeByRef(int *n);

int main()
{  int number = 5; 
   printf( "The original value of number is %d", number );
   int newnumber = cubeByValue( number );
   printf( "\nThe value of number is %d\n", number );
//   printf( "\nThe new value of number is %d\n", newnumber );
   int num = 5; 
   printf( "The original value of number is %d", num );
   cubeByRef( &num );
   printf( "\nThe value of number after calling is %d\n", num );
   return 0;
}

int cubeByValue( int n )
{
   return n * n * n;
}

void cubeByRef(int *n){
*n =(*n) * (*n) * (*n) ;
}
