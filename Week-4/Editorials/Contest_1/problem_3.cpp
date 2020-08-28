string isBalanced(string s) 
{
    stack<char>st;
    for(auto i:s)
    {
        if(i=='('||i=='{'||i=='[')
            st.push(i);
        else
        {
            if(st.size()==0)
                return "NO";
            char c = st.top();
            if(i==']'&&c!='[')
                return "NO";
            if(i==')'&&c!='(')
                return "NO";
            if(i=='}'&&c!='{')
                return "NO";
            st.pop();
        }
    }
    if(st.size()==0)
        return "YES";
    return "NO";
}
