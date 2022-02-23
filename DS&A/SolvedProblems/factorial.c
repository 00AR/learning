#include <stdio.h>

int recur_fact(int);	
int iter_fact(int);		

int main(){
	int num;
	
	printf("Enter a number: ");  
	scanf("%d", &num);
	
	printf("\nIterative method: ");  
	printf("%d",iter_fact(num));
	
	//printf("%d", num);
	printf("\nRecursion method: "); 
	printf("%d", recur_fact(num));
	
	return 0;
}

// Recursive Factorial function
int recur_fact(int num){
	if(num == 0||num == 1)
		return 1;
	return num*recur_fact(num-1);
}

// Iterative function call
int iter_fact(int num){
	
	int result = 1;
	
	if(num == 0||num == 1)
		return 1;
		
	for(int i=1; i<=num; ++i)
		result = result*i;
	return result;
}
