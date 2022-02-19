#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void linkedListTraversal(struct Node* ptr){
    while(ptr != NULL){
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *insertAtFirst(struct Node *head, int data){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}
struct Node *insertAtEnd(struct Node *head, int data){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;
    while(p->next!=NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

struct Node *insertAtIndex(struct Node *head, int data, int index){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;
    int i=0;
    
    while(i!=index-1){
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
struct Node *insertAfterNode(struct Node *head, struct Node *prevNode, int data){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;
}

int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    //Allocate memory for nodes in the linked list in Heap
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;
    second->data = 11;
    second->next = third;
    third->data = 31;
    third->next = fourth;
    fourth->data = 65;
    fourth->next = NULL;
    /*
    printf("Linked List before insertion at first node\n");
    linkedListTraversal(head);
    printf("\nLinked List After insertion at first node\n");
    head = insertAtFirst(head, 87);
    linkedListTraversal(head);
    
    printf("Linked List before insertion at end\n");
    linkedListTraversal(head);
    printf("\nLinked List After insertion at end\n");
    head = insertAtEnd(head, 100);
    linkedListTraversal(head);
    
    printf("Linked List before insertion at index-2\n");
    linkedListTraversal(head);
    printf("\nLinked List After insertion at index-2\n");
    head = insertAtIndex(head, 555, 2);
    linkedListTraversal(head);
    */
    printf("Linked List before insertion at index-3\n");
    linkedListTraversal(head);
    printf("\nLinked List After insertion at index-3\n");
    head = insertAfterNode(head, second, 666);
    linkedListTraversal(head);

    return 0;
}