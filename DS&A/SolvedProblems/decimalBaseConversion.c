#include<stdio.h>

void DecimalBinary(int);  //Decimal to binary function
void DecimalOctal(int);    //Decimal to Octal function
void DecimalHexa(int);     //Decimal to Hexadecimal function

int main(){
    int number;

    printf("Enter the number:"); 
    scanf("%d", &number);           //Input
    //function calls
    printf("\nDecimal to Hexadecimal: ");
    DecimalHexa(number);
    printf("\nDecimal to Octal: ");
    DecimalOctal(number);
    printf("\nDecimal to Binary: ");
    DecimalBinary(number);
   //printf("\n%c", 48);
}

void DecimalBinary(int num){
    int binary[40], i=0;
    
    while(num!=0){
            binary[i] = num%2;         // assigning the remainder to ith array element
            num /= 2;                  // computing the next quotient
      		i++;
    } 
    
    for(i=i-1; i>=0; i--){    
		printf("%d",binary[i]);       // printing the result
	}
}

void DecimalOctal(int num){
	int octal[40], i=0;
	
	while(num!=0){
            octal[i] = num%8;       // assigning the remainder to ith array element
            num /= 8;               // computing the next quotient
      		i++;
    } 
    
    for(i=i-1; i>=0; i--){    
		printf("%d",octal[i]);     // printing the result
	}
}

void DecimalHexa(int num){
	char hex[40];
	int i=0, rem;
	
	while(num!=0){
			rem = num%16;        // computing the remainder
			if(rem < 10)
				rem += 48;               // converting remainder to appropriate ascii value
			else
				rem += 55;                 
            hex[i] = rem;
            //printf("%d", ar[i]);
            num /= 16;              // computing the next quotient
      		i++;
    } 
    
    for(i=i-1; i>=0; i--){    
		printf("%c",hex[i]);    // printing the result
	}
}
