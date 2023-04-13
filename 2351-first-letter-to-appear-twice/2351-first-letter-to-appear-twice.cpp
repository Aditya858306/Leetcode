class Solution {
public:
    char repeatedCharacter(string s) {
        int mini=INT_MAX;
    for(int i=0;i<s.size();i++)
    {
        for(int j=i+1;j<s.size();j++)
        {
            if(s[i]==s[j])
            {
                mini=min(mini,j);
            }
        }
    }
return s[mini];
        
    }
};