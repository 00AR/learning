#include<stdio.h>
#include<stdlib.h>

// doubly linked list
struct dll{
    int data;
    struct dll* prev;
    struct dll* next;
};

void traversal(struct dll* head){
    struct dll* p = head;
    
    do{
        printf("%d\n", p->data);
        p = p->next;
    }while(p!=NULL);
}

 //TODO: insertion and deletion needs to be added
struct dll* insertAtHead(struct dll* head, int val){
    struct dll* new = (struct dll*)malloc(sizeof(struct dll));
    new->data = val;
    new->prev = NULL;
    new->next = head;
    head->prev = new;
    
    return new;
}

struct dll* insertAtLast(struct dll* head){
    return head;
}

struct dll* deleteAtFirst(struct dll* head){
    //prev:data:next
    struct dll* p=head->next;
    p->prev=NULL;
    head->next=NULL;
    free(head);
    return p;
}

struct dll* deleteAtLast(struct dll* head){
    return head;
}

int main(){
    struct dll* head;
    struct dll* second;
    struct dll* third;
    struct dll* fourth;
    struct dll* fifth;
    head = (struct dll*)malloc(sizeof(struct dll));
    second = (struct dll*)malloc(sizeof(struct dll));
    third = (struct dll*)malloc(sizeof(struct dll));
    fourth = (struct dll*)malloc(sizeof(struct dll));
    fifth = (struct dll*)malloc(sizeof(struct dll));

    head->data = 3;
    second->data = 4;
    third->data = 43;
    fourth->data = 32;
    fifth->data = 51;

    head->prev = NULL;
    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;
    third->next = fourth;
    fourth->prev = third;
    fourth->next = fifth;
    fifth->prev = fourth;
    fifth->next = NULL;

    traversal(head);
    head = insertAtHead(head, 99);
    printf("\n");
    traversal(head);
    head = deleteAtFirst(head);
    printf("\n");
    traversal(head);

    return 0;
}