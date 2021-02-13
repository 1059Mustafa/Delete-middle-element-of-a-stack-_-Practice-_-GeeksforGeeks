	void deleteMid_util(stack<int>&s, int sizeOfStack, int current)
    {
        // check if current is half of the stack size, then you are at mid of stack
        if(current==sizeOfStack/2)
        {
            s.pop();
            return;
        }
        int x = s.top();
        s.pop();
        current+=1;

        // recursively call deleteMid funciton
        deleteMid_util(s,sizeOfStack,current);
        s.push(x);
    }
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        deleteMid_util(s,sizeOfStack,0);
    }
