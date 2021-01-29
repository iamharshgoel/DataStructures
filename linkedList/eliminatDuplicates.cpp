#include <iostream>
using namespace std;
#include "Node.cpp"

Node* eliminate_duplicate(Node* head){

    Node *temp = head;
    Node *nextNode;

    if(temp == NULL){
        return head;
    }

    while(temp->next != NULL){
        if(temp->data == temp->next->data){
            nextNode = temp->next->next;
            delete temp->next;
            temp->next = nextNode;
        }
        else{
            temp = temp->next;
        }

    }
    return head;
}