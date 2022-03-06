#include<stdio.h>

int main(){
    int i, j;

    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++)
            (j>=i) ? printf("*") : printf(" ");
        printf("\n");
    }
    //using three for loops
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++)
            printf(" ");
        for(j=i;j<=5;j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
/*
i   j
1   1,2,3,4,5       j>=i
2     2,3,4,5     
3      3,4,5       
4        4,5         
5          5        
*/