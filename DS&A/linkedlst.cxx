// Name: Abdul Rafey
// Rollno: 21MCA002

#include <bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node *nxt;
		
		Node(int dat){
			this->data = dat;
			this->nxt = NULL;
		}
};

class LinkedList{
	public:
		Node *head;
		
		// Initialise head
		LinkedList(){
			head = NULL;
		}
		
		void create(int n);
		void segregate(LinkedList &lst);
		
		void display(){
			Node *tmp = head;
			while(tmp!=NULL){
				cout<<tmp->data<<" ";
				tmp=tmp->nxt;
			}
			cout<<endl;
		}
};

void LinkedList::create(int n){
	Node *tmp;
		
	for(int i=0; i<n; i++){
		int d;
		cout<<"Enter the element: ";
		cin>>d;
		
		Node *newN = new Node(d);
		if(i==0){
			head = newN;
			tmp = newN;
		}
		else{
			tmp->nxt = newN;
			tmp = tmp->nxt;
		}
	}
}

void segregate(LinkedList l){
	Node *head = l.head;
	if(head == NULL) return;
	vector<int> positive, negative;
	
	while(head!=NULL){
		if(head->data >= 0)
			positive.push_back(head->data);
		else
			negative.push_back(head->data);
		head = head->nxt;
	}
	head = l.head;
	while(!negative.empty()){
		head->data = negative.back();
		negative.pop_back();
		head = head->nxt;
	}
	while(!positive.empty()){
		head->data = positive.back();
		positive.pop_back();
		head = head->nxt;
	}
}

int main(){
	
	LinkedList lst;
	
	lst.create(6);
	cout<<"Before segregation \n";
	lst.display();
	cout<<"After segregation \n";
	segregate(lst);
	lst.display();
	
	return 0;
}

