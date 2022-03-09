#include<stdio.h>

int main(){
    int i, j, k=1;

    for(i=1;i<=5;i++){
        for(j=1;j<=9;j++){
            if(j>=6-i && j<=4+i && k){
                printf("*");
                k=0;
            }
            else{
                printf(" ");
                k=1;
            }
        }
        printf("\n");
    }
    return 0;
}

/* i/j
      123456789
   1      *          j = 5      6-i and 4+i
   2     * *         j = 4,6    6-i and 4+i
   3    * * *        j = 3,5,7    
   4   * * * *       j = 2,4,6,8
   5  * * * * *      j = 1,3,5,7,9
    need to do something for printing * alternatively.
*/