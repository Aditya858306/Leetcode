class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int>shared(26,INT_MAX);
        vector<string>ans;
        for(auto it:words)
        {
            vector<int>count(26,0);
            for(auto ut:it)
            {
                count[ut-'a']++;
            }
            for(int i=0;i<26;i++)
            {
                shared[i]=min(shared[i],count[i]);
            }
        }
        for(int i=0;i<26;i++)
        {
           for(int j=0;j<shared[i];j++)
               ans.push_back(string(1,i+'a'));
        }
        return ans;
    }
};