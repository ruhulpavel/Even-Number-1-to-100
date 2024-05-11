#include <stdio.h>
/* Write a c program 1 to 100 Odd number print? */
int main ()
{
	int i;
	printf("Odd Numbers Between 1 To 100 are:\n");
	for( i=1; i<=100; ++i ){
		if(i%2 != 0){
			printf("%d \n", i);
		}
	}
	return 0;
}
