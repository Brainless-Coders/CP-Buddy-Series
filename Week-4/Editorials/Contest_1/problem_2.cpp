int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) 
{
    stack<int>s1,s2,s3;
    s1.push(0);
    s2.push(0);
    s3.push(0);
    for(int i=h1.size()-1;i>=0;i--)
        s1.push(s1.top()+h1[i]);
    for(int i=h2.size()-1;i>=0;i--)
        s2.push(s2.top()+h2[i]);
    for(int i=h3.size()-1;i>=0;i--)
        s3.push(s3.top()+h3[i]);
    while(true)
    {
        if(s1.top()==s2.top()&&s1.top()==s3.top())
            return s1.top();
        int temp = min(s1.top(),min(s2.top(),s3.top()));
        while(s1.top()>temp)
            s1.pop();
        while(s2.top()>temp)
            s2.pop();
        while(s3.top()>temp)
            s3.pop();
    }
}
