int findNodeRec(Node *head, int n) {
   if(head == NULL){
        return -1;
    }
   else{
        if(head->data!=n){
            int k = findNodeRec(head->next, n);

            if(k!=-1){
                return k+1;
            }
else{
    return -1;
    }
        }
else{
    return 0;
    }
    }
}