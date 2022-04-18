#include<stdio.h>
#include<stdlib.h>

// Function to simulate Inventory Problem
void retailSimulation(int P, int Q){
     float carry_cost=0.0;
    int S=115,units_due=0, start_day=1, due_date=0, demand;
    
    while(start_day<=180){
        if(start_day==due_date){
            S = S + Q;
            units_due=0;
        }
        else{
            demand = rand() % 100;
            if(demand<=S){
                S = S - demand;
                carry_cost = carry_cost + ((float)S*0.75);
            }
            else{
                carry_cost = carry_cost +((float)demand-(float)S)*18.0;
                S=0;
            }
        }
        if((S+units_due)<=P){
            units_due=Q;
            due_date=start_day+3;
            carry_cost = carry_cost + 75.0;
        }
        start_day+=1;
    }
    printf("\nFor P = %d, Q = %d\nCarrying Cost = %f\n",P,Q, carry_cost);
}

int main(){
    int P, Q;
    //Input
    for(int i=0; i<5; i++){
        scanf("%d %d", &P, &Q);
        printf("\n%d. Enter P and Q: ",i+1);
        retailSimulation(P,Q);      //function call
    }
    return 0;
}