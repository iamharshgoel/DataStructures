node* rev_linkedlist_itr(node* head){

    if(head== NULL || head->next==NULL){
        return head;
    }
    node *temp = ev_linkedlist_itr(head->next);
    node *tail = temp;
    while(tail->next!=NULL){
        tail = tail->next;
    }
    tail->next = head;
    head->next = NULL;
    return temp;

}