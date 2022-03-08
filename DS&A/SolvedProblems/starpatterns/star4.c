#include<stdio.h>

int main(){
    int i, j;

    for(i=1;i<=5;i++){
        for(j=i;j<=5;j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
/*
i   j
1   1,2,3,4,5   
2   2,3,4,5     
3   3,4,5       
4   4,5         
5   5           j>=6-i
*/