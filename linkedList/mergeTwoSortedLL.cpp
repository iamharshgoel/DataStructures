#include <iostream>
using namespace std;
#include "Node.cpp"

Node* mergeTwoLLs(Node *head1, Node *head2) {
    Node *t1 = head1;
    Node *t2 = head2;
    Node *head = NULL;
    Node *tail = NULL;

if(head1->data > head2->data){
    head = t1;  
    tail = t1;
    t1 = t1->next;
    }
else{
    head = t2;
    tail = t2;
    t2 = t2-next;
    }