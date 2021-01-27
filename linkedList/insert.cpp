#include <iostream>
using namespace std;
#include "Node.cpp"

void print(Node *head){
//Node *temp = head;

while(head != NULL){
    cout<<head->data<<" ";
    head = head->next;
}   
}

Node *takeInput(){
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while(data != -1){
    Node *newNode = new Node(data);
    if(head == NULL){
        head = newNode;
        tail = newNode;
    }
else{
    tail->next = newNode;
    tail = tail->next;
    }
cin>>data;
}
return head;


}

Node *insertNode(Node *head, int i, int data){
Node *newNode = new Node(data);
Node *temp = head;
int count = 0;
if(i == 0){
    newNode ->next = head;
    head = newNode;
    return head;
}
 while(temp != NULL && count < i-1){
temp = temp->next;
count++;
}

newNode->next = temp->next;
temp->next = newNode;

return head;


}

int main(){
    Node *head = takeInput();
    print(head);
    int i, data;
    cin >> i >> data;
    head = insertNode(head, i ,data);
    print(head);

}