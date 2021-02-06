void swap(node*a, node*b){
    int temp = a->data;
    a->data = b->data;
    b->data = temp;
}

node *bubbleSort(node *head){
    if(head == NULL && head->next ==NULL){
        return head;
    }

    node *temp;
    node *temp1 = NULL;
    int swapped;

    do{
        swapped = 0;
        temp = head;
        while(temp->next!=NULL){
            if(temp->data > temp->next->data){
                swap(temp, temp->next);
            }
            else{
                temp=temp->next;
            }
    }
    temp1 = temp;
    }while(swapped);
    return head;

}