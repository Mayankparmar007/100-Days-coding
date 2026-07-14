// Problem: Create and Traverse Singly Linked List

// Input:
// - First line: integer n
// - Second line: n space-separated integers

// Output:
// - Print the result

// Example:
// Input:
// 5
// 10 20 30 40 50

// Output:
// 10 20 30 40 50
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
};

void traverse(node* head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp= temp->next;
    }
}

int main(){
    int n;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    node* head=NULL;
    node* tail=NULL;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
         node* newnode= new node();
         newnode->data=x;
         newnode->next=NULL;
         
        if(head==NULL){
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
         
    }

    
     traverse(head);


    return 0;
}