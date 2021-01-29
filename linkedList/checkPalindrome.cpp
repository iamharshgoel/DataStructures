bool check_palindrome(node* head){
    if(head == NULL || head>next == NULL){
        return true;    
    }
    Node *p1 = head;
    Node *p2 = head;
    Node *temp = head;
    int len = 0
    while(temp!=NULL){
        len++;   
        temp = temp->next;
    }
    for(int i=0; i<len-2;i++){
        p2=p2->next
    }
    Node *x = p2->next;
    p2->next = NULL
    if(p1->data == x->data){
        bool x = check_palindrome(p1->next);
        return x;
    }else{
        return false;
    }

    
}