#include<stdio.h>

int main(){
    int i, j;

    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++)
            (j>=6-i) ? printf("*") : printf(" ");
        printf("\n");
    }
    /*
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++)
            printf(" ");
        printf("*");
        printf("\n");
    }
    doesn't work
    */
    return 0;
}
/*
i   j
1   5           j>=6-i
2   4,5         
3   3,4,5       
4   2,3,4,5     
5   1,2,3,4,5   
*/