int indexOfNIter(Node *head, int n) {
    Node*temp = head;
    int count =0, flag=-1;

    while(temp!=NULL){
    if(temp->data == n){
    return count;
    } 
    temp=temp->next;
    count++;
    }
return flag;
}