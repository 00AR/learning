#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void linkedListTraversal(struct Node* head){
    printf("\n");
    struct Node* p=head;
    if(head != NULL){
        while(p!=NULL){
            printf("Element: %d\n", p->data);
            p=p->next;
        }
    }
    else
        printf("List is Empty");
    //Time complexity: O(1)
}

struct Node* deleteAtFirst(struct Node* head){
    struct Node* p=head;
    p = head->next;
    free(head);
    return p;
}

struct Node* deleteInBetween(struct Node* head, int index){
    struct Node* p = head;
    struct Node* q;
    int i=0;
    for(int i=0; i<index-1; i++){
        p = p->next;
    }
    /*while(i!=index-1){
        p = p->next;
        i++;
    }*/ 
    q = p->next;
    p->next = q->next;
    free(q);

    return head;
}

struct Node* deleteAtLast(struct Node* head){
    struct Node* p = head;
    struct Node* q = head->next;
    while(q->next!=NULL){
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}

struct Node* deleteByValue(struct Node* head, int value){
    struct Node* p = head;
    struct Node* q = head->next;

    while(q->next != NULL && q->data != value){
        p = p->next;
        q = q->next;
    }
    if(q->data == value){
        p->next = q->next;
        free(q);
    }
    return head;
}

int main(){
    struct Node* head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;
    struct Node * fifth;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));
    
    if(head==NULL||second==NULL||third==NULL||fourth==NULL||fifth==NULL)
        printf("Failed to allocate memory!!!");
    else{
        head->data = 7;
        head->next = second;
        second->data = 23;
        second->next = third;
        third->data = 33;
        third->next = fourth;
        fourth->data = 77;
        fourth->next = fifth;
        fifth->data = 93;
        fifth->next = NULL;
        
        //linkedListTraversal(head);
        //head = deleteAtFirst(head);
        //linkedListTraversal(head);
        //head = deleteInBetween(head, 2);
        //linkedListTraversal(head);
        //head = deleteAtLast(head);
        linkedListTraversal(head);
        head = deleteByValue(head, 33);
        linkedListTraversal(head);
    }

    return 0;
}