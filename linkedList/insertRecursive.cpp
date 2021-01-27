Node* insertNodeRec(Node *head, int i, int data) {

Node *newNode = new Node(data);
if(i == 0){
newNode ->next = head;
return newNode;
}
else{
        int count =0;
        Node *temp = head;
        while(temp!=NULL && count<i-1){
            count++;
            temp = temp->next;
        }
        if(temp!=NULL){
            newNode->next = temp->next;
            temp->next = newNode;
            return head;
            }

    }