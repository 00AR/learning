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

int main(){
	struct stack *s;
    s = (struct stack*) malloc(sizeof(struct stack));
	s->size = 80;
	s->top = -1;
	s->arr = (int *) malloc(s->size *sizeof(int));
	s->arr[0] = 7;
	s->top++;
	if(isEmpty(s))
		printf("The stack is empty");
	else
		printf("The stack is not empty");
    return 0;
}