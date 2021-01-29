#include <iostream>
using namespace std;
#include "Node.cpp"

Node* deleteNodeRec(Node *head, int i) {

    Node *temp = head;
    if(head == NULL){
        return head;
    }

    if(i == 0){
        temp = temp->next
        delete head;
        return temp;
    }

    head->next = deleteNodeRec(head->next, i-1);
    return head;