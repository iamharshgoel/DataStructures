Node *merge(Node*head1, Node*head2){
    Node*t1 = head1;
    Node*t2 = head2;
    Node*head=NULL;
    Node*tail=NULL;

    if(t1->data < t2->data){
        head = t1;
        tail = t1;
        t1= t1->next;
    }
    else{
        head = t2;
        tail = t2;
        t2 = t2->next;
    }

    while(t1!=NULL && t2!=NULL){
        if(t1->data < t2->data){
            tail->next = t1;
            tail = t1;
            t1=t1->next;

        }
        else{
            tail->next = t2;
            tail = t2;
            t2 = t2->next;
        }
    }
    
    while(t1!=NULL){
        tail->next = t1;
        tail = t1;
        t1=t1->next;
        }

    while(t2!=NULL){
        tail->next = t2;
        tail = t2;
        t2 = t2->next;
    }
return head;
    }

node* mergeSort(node *head) {
    if(head == NULL && head->next == NULL) {
        return head;        
    }
    Node *slow = head;
    Node *fast = head;

    while(fast->next!=NULL && fast->next->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    node*h1 = head;
    node*h2=s->next;
    s->next= NULL;

    node*t1 = mergeSort(h1);
    node*t2 = mergeSort(h2);
    return merge(t1,t2);

}

