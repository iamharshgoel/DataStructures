node* swap_nodes(node *head,int i,int j){
        int count1=0, count2 = 0
        node *a, *b ;
        a = head;
        b = head;

        while(count1<i){
            a = a->next;
            count1++;
        }

        while(count2<j){
            b = b->next;
            count2++;
        }

        int temp;
        temp = a->data;
        a->data = b->data;
        b->data = temp;

        return head;


    }