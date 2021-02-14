void reverseStack(stack<int> &input, stack<int> &extra) {
    
    if(input.size() == 0)
        return;
    
    int x = input.top();
    input.pop();
    reverseStack(input, extra);
    
    while(!input.empty()){
        extra.push(input.top());
        input.pop();
    }
    extra.push(x);
     
    while(!extra.empty()){
        input.push(extra.top());
        extra.pop();
    }
    return;
    
    
	

}