#include <iostream>
using namespace std;
#include "Node.cpp"

//Complexity of O(n^2)
Node *takeInput() {
    int data;
    cin >> data;
    Node *head = NULL;

    while(data != -1){
    Node *newNode = new Node(data);
    if(head == NULL){
    head = newNode;    
}
    else{
    Node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
   

}
    cin>>data;
}
return head;
}

//Complexity of O(n)
Node *takeInput_Better(){
    int data;
    cin>>data;
    Node *head = NULL;
    Node *tail = NULL;
    while(data != -1){
        Node *newNode = new Node(data);
        if(head == NULL){
        head = newNode;   
        tail = newNode;
        }
        else{
        tail -> next = newNode;
        tail = tail -> next;
        }
    cin>>data;
}
return head;
}

 Node* insertNode(Node *head, int i, int data) {
 Node *newNode = new Node(data);
 int count = 0;
 Node *temp = head;

 if(i == 0){
    newNode ->next = head;
    head = newNode;
    return head;
    }
while(temp != NULL && count < i-1){
        temp = temp->next;
    count++;
    }
 
    //Method 1
    if(temp != NULL){
     Node *a = temp->next;
    temp->next = newNode;
    newNode->next = a;
    }
return head;
  
    
    //Method 2
    // newNode->next = temp->next;
    // temp->next = newNode;
    }


void print(Node *head){
//Node *temp = head;

while(head != NULL){
    cout<<head->data<<" ";
    head = head->next;
}
    
}

int main(){

Node *head = takeInput_Better();
print(head);
int i, data;
cin >>i >>data;
head = insertNode(head, i, data);
print(head);


/*
    //Statically
    Node n1(10);

    Node *head = &n1;

    Node n2(20);

    Node n3(30);

    Node n4(40);
    Node n5(50);

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;

    print(head);
*/

/*
    n1.next = &n2;

    cout << head->data << " " << n2.data << endl; 
*/
   /* 
//Dynamically
    Node *n1 = new Node(10);
    Node *head = n1;

    Node *n2 = new Node(20);
    Node *n3 = new Node(30);
    Node *n4 = new Node(40);
    Node *n5= new Node(50);
 
    n1->next = n2;
    n2->next = n3;    
    n3->next = n4;
    n4->next = n5;
*/




}