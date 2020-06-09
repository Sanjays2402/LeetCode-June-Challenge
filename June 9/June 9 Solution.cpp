class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int i,j,flag,start=0;
        for(i=0;i<s.length();i++)
        {
            flag=0;
            for(j=start;j<t.length();j++)
            {
                if(s[i] == t[j])
                {
                    flag=1;
                    start=j+1;
                    break;
                }
            }
            if(!flag)
                return false;
        }
        return true;
    }
};
