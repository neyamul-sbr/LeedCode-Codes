class Solution {
public:
    bool isPalindrome(int x) {
        vector<int> v;
        int c;
        if(x<0)
            return false;
        while(x)
        {
            c=x%10;
            v.push_back(c);
            x=x/10;
        
        }
        int n= v.size();
        for(int i=0;i<(n/2);i++)
        {
            
            
            if(v[i]!=v[n-i-1])
            {
                
                return false;
                
            }
                
        }
        
        return true;
        
    }
};
