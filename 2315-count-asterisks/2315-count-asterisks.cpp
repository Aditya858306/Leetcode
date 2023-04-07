class Solution {
public:
    int countAsterisks(string s) {
        int count_star = 0;
        int count_bar = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '|')
                count_bar++;
            if (s[i] == '*' && count_bar % 2 == 0)
                count_star++;
        }
    return count_star;
    }
};