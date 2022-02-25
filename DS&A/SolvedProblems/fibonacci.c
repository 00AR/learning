#include <stdio.h>
#include <time.h> //for clock() to calculate execution time
/*
int iter_fib(int n){
	//Limit is 47 terms.
	int first = 0, second = 1, next, i;
	double exec_time = 0.0;

	clock_t begin = clock();
	
	for(i = 0; i < n; i++) {
		if(i <=1) {
			next = i;	// for the first two terms
		} else {
			next = first + second;
			first = second;	
			second = next;
		}

		printf("%d, ", next);
	}
	
	clock_t end = clock();
	
	exec_time = (double) (end-begin)/CLOCKS_PER_SEC;
	printf("\nExecution time: %f", exec_time);	
	
	return 1;
}

int recur_fib(int n){
   	if (n <= 1) {
		return n;
    } 
    else{
		return recur_fib(n-1) + recur_fib(n-2);
   	}

}
int main() {
	
	int n;
	double exec_time = 0.0;
	
	time_t now;
	time(&now);
	
	printf("%s", ctime(&now));	
	
	printf("Enter a number: "); // number of terms to be calculated
	scanf("%d", &n);
	
	printf("Iterative method: \n");
	iter_fib(n);
	printf("\nRecursion method: \n");
	
	

	clock_t begin = clock();
	for(int i=0; i<n; i++){	
		printf("%d, ", recur_fib(i));
	}
	clock_t end = clock();
	
	exec_time = (double) (end-begin)/CLOCKS_PER_SEC;
	printf("\nExecution time: %f", exec_time);	
	
	return 0;
}
*/
void fib(int a, int b, int sum, int n){
	
	if(n!=0) {
		if(a==0 && b==1)
			printf("%d, %d, ", a, b);
		n--;
		sum = a+b;
		printf("%d, ", sum);
		a=b;
		b=sum;
		
		fib(a, b, sum, n);
	}
}

int main()
{	
	double exec_time=0.0;
	int n=30;
	clock_t begin = clock();
	fib(0,1,0,n);
	clock_t end = clock();
	
	exec_time = (double) (end-begin)/CLOCKS_PER_SEC;
	printf("\nExecution time: %f", exec_time);	
}
