Node* nthNodeFromLastIter(Node *head, int n) {
    int count =0, i=0;
    Node *temp = head;

    while(temp!=NULL){
        temp = temp->next;
        count++;
    }
    if(head == NULL || count<n){
        return NULL;
    }
    temp = head;

    while(i<count-n-1){
        temp = temp->next;
        i++;
    }

    return temp;
}