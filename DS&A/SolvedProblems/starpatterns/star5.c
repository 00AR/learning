#include<stdio.h>

int main(){
    int i, j;

    for(i=1;i<=5;i++){
        for(j=1;j<=9;j++)
            if(j>=6-i&&j<=4+i)
                printf("*");
            else
                printf(" ");
        printf("\n");
    }
    return 0;
}

/* i/j
      123456789
   1      *          j = 5          6-i or 4+i
   2     ***         j = 4,5,6
   3    *****        j = 3,4,5,6,7    
   4   *******       j = 2,3,4,5,6,7,8
   5  *********      j = 1,2,3,4,5,6,7,8,9

*/