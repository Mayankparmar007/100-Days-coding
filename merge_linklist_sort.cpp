// Problem: Merge Two Sorted Linked Lists - Implement using linked list with dynamic memory allocation.

// Input:
// - First line: integer n
// - Second line: n space-separated integers (first list)
// - Third line: integer m
// - Fourth line: m space-separated integers (second list)

// Output:
// - Print the merged linked list elements, space-separated

// Example:
// Input:
// 5
// 10 20 30 40 50
// 4
// 15 25 35 45

// Output:
// 10 15 20 25 30 35 40 45 50

// Explanation:
// Compare nodes of both lists, append smaller to result, continue until all nodes are merged.
#include<iostream>
using namespace std;

struct  Node{
    public:
    int data;
    Node*next;
};


Node* createList(int n) {

    Node* head = NULL;
    Node* tail = NULL;

    for (int i = 0; i < n; i++) {

        int x;
        cin >> x;

        Node* newNode = new Node();
        newNode->data=x;
         newNode->next=NULL;

        if (head == NULL) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    return head;
}
void print(Node* head) {

    while (head != NULL) {

        cout << head->data << " ";

        head = head->next;
    }

    cout << endl;
}
Node* merge(Node* head1, Node* head2) {

    if (head1 == NULL)
        return head2;

    if (head2 == NULL)
        return head1;

    Node* head = NULL;
    Node* tail = NULL;

    // Decide first node
    if (head1->data <= head2->data) {
        head = head1;
        tail = head1;
        head1 = head1->next;
    }
    else {
        head = head2;
        tail = head2;
        head2 = head2->next;
    }

    // Merge remaining nodes
    while (head1 != NULL && head2 != NULL) {

        if (head1->data <= head2->data) {
            tail->next = head1;
            tail = head1;
            head1 = head1->next;
        }
        else {
            tail->next = head2;
            tail = head2;
            head2 = head2->next;
        }
    }

    // Attach remaining nodes
    if (head1 != NULL)
        tail->next = head1;

    if (head2 != NULL)
        tail->next = head2;

    return head;
}

int main(){
    int n;
    cin>>n;
    Node* head1=createList(n);

     int m;
    cin>>m;
    Node* head2=createList(m);

    Node* ans= merge(head1,head2);

    print(ans);


    return 0;
}