#include<stdio.h>

int main(){
    int i, j;

    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
/*
i   j
1   1
2   1,2
3   1,2,3
4   1,2,3,4
5   1,2,3,4,5
*/