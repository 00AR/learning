#include <stdio.h>
#include <stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr){
	return (ptr->top==-1);
}

int isFull(struct stack *ptr){
	return (ptr->top==(ptr->size-1));
}

void push(struct stack* ptr, int val){
    
    if(isFull(ptr)){
        printf("Stack Overflow!!! Cannot push %d to the stack", val);
        return -1; //not utilized in the program
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
        //printf("\n pushed %d", val);
    }
}

int pop(struct stack *ptr){
    //Last in First Out(LIFO)
    int val;
    if(isEmpty(ptr)){
        printf("Stack Underflow!!! cannot pop an element from empty stack!!!");
        return -1;
    }
    else{
        val = ptr->arr[ptr->top];
        //ptr->arr[ptr->top] = NULL;
        ptr->top--;
        return val;
    }
}

void print(struct stack* ptr){
    int t = ptr->top;
    //printf("%d",t);
    while(t>0){
        printf("%d \n", ptr->arr[t]);
        --t;
    }
}

int main(){
	struct stack *s;
    s = (struct stack *) malloc(sizeof(struct stack));
	s->size = 8;
	s->top = -1;
	s->arr = (int *) malloc(s->size * (sizeof(int)));
    if(s->arr == NULL)
        printf("Memory not allocated!!!");
	
    push(s, 4);
    //printf("%d", s->arr[s->top]);
    push(s, 5);
    push(s, 56);
    push(s, 3);
    push(s, 32);
    push(s, 12);
    //print(s);
    printf("Popped %d",pop(s));
    printf("Popped %d",pop(s));
   // print(s);
	
    return 0;
}