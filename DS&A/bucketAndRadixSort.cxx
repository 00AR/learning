#include <iostream>
using namespace std;

int max(int a[], int n){
    int mx = a[0];
    for(int i=0; i<n; i++){
        if(a[i]>mx)
            mx = a[i];
    return mx;
    }
}

class Node{
    public:
        int data;
        Node *link;
};

class LinkedList{
    Node *first;
    public:
        LinkedList(){
            first = NULL;
        }
        bool isEmpty();
        int getSize();
        void insert(int x, int index);
        int del(int index);
};

bool LinkedList::isEmpty(){
    if(first==NULL)
        return true;
    return false;
}

int LinkedList::getSize(){
    int sz=0;
    Node *cur = first;
    while(cur != NULL){
        sz++;
        cur = cur->link;
    }
    return sz;
}

int main(){


    return 0;
}