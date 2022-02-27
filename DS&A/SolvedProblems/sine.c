#include <stdio.h>
#include <time.h>

int main(){
	
	int n;
	const float pi = 3.1415926;
	double x, result,term;
	
	time_t now;
	time(&now);
	
	printf("%s", ctime(&now));	
	
	printf("Enter the value of x in degrees: ");
	scanf("%lf", &x);
	x=x*pi/180;
	
	//printf("%f", x);
	printf("Enter the value of n: ");
	scanf("%d", &n);
	
	result=x;
	term=x;
	
	for(int i=1;i<n;i++){
        term=(term*(-1)*x*x)/(2*i*(2*i+1));
        //printf("%d  ,%d\n", 2*i*(2*i+1),(2*(i+1)));
        result+=term;
    }
    
	/*if(n<=0)
		printf("Invalid value of n");
	else{
		for(int i=3; i<=n; i+=2){
			printf("\n %lf",power(-x, i));
			result = result+(power(-x, i)/(float)fact(i));
			
		}
		printf("\n %lf", result);
	}*/
	printf("\n sin(%lf) = %lf", x*180/pi, result);	
	return 0;
}

																		
