/*
 
 */

#include <stdio.h>
#include <time.h>

int main()
{
	int a=15,b=45;		//initializing the variables 
	time_t now;
	time(&now);
	
	printf("%s", ctime(&now));	
	printf("a = %d, b = %d\n",a,b); 
	
	
	a = a + b;		// Assignning 'a' the sum of both the given variables,i.e, a = 45+15 = 60
	
	b = a - b;		// b = (a+b) - b = a  || b = 60-45 = 15 
		
	a = a - b;		// a = (a+b) - a = b  || a = 60-15 = 45
	
		
	printf("a = %d, b = %d",a,b);	// Print Exchanged values
	
	return 0;
}

