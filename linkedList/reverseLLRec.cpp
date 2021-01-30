node *reverse_linked_list_rec(node *head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    node *tail = reverse_linked_list_rec(head->next);
    tail->next = head;
    head->next=NULL;
    return head;
}