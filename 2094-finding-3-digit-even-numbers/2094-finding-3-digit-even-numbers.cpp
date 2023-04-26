class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int>ans;
	vector<int>check(10,0);
	for(int i=0;i<digits.size();i++)
	{
		check[digits[i]]++;
	}
	for(int i=100;i<=999;i++)
	{
		if((i%2)!=0) continue;
		
		vector<int>v(10,0);
		int num = i;
	    string str = to_string(num);
	    
	    for(int j=0;j<str.length();j++)
	    {
	    	int digit = str[j] - '0';
	    	v[digit]++;
		}
		bool flag=true;
		for(int i=0;i<10;i++)
		{
		   if(v[i] > check[i])
		   {
		     flag=false;
			 break;	
	       }	
		}
		if(flag==true)
		{
			ans.push_back(i);
		}
	}
	return ans;
    }
};