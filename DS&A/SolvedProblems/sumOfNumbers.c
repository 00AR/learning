#include<stdio.h>

int sumOfNumbers(int);

int main(){
    int N, result;
    printf("Enter the number of Numbers you want to add: ");
    scanf("%d", &N);
    result = sumOfNumbers(N);
    printf("\nThe sum of the numbers entered is %d", result);
    return 0;
}

int sumOfNumbers(int N){
    int i=1, sum=0, number;
    while(i<=N){
        printf("\nEnter the Number to sum: ");
        scanf("%d", &number);

        if(number<0){
            printf("\nNegative number entered!!! Enter only positive numbers.\n");
            continue;
        }
        sum += number;
        i+=1;
    }
    return sum;
}