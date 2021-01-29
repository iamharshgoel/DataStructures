node* midpoint_linkedlist(node *head){
    int count = 0, count1 = 0;
    node *temp = head;

    while(temp!=NULL){
    count++;
    temp=temp->next;
    }

    if(count%2 ==0){
    count1 = count/2;
    }
    else{
        count1 = (count+1)/2;
    }
    for(int i=0;i<count1;i++){
        temp = temp->next;
    }
return temp;

    }