//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    static bool cmp (pair<int , int>p1, pair<int , int>p2){
        return p1.first < p2.first;
    }
    int buyMaximumProducts(int n, int k, int price[]){
        //Write your code here
        int ans = k;
        int count = 0;
        vector<pair<int , int>>p;
        for(int i = 0; i < n ; i++){
            pair<int, int> p1 = make_pair(price[i], i+1);
            p.push_back(p1);
        }
        
        sort(p.begin() , p.end(), cmp);
        for(int i = 0 ; i < n ; i++){
            int idx = p[i].second;
            for(int j = 0 ; j<idx; j++){
                if(p[i].first > ans){
                    break;
                }
                ans = ans - p[i].first;
                count++;
            }
        }
        return count;
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n, k;
	    cin >> n >> k;
	    int price[n];
	    for(int i = 0 ; i < n; i++){
	        cin >> price[i];
	    }
	    Solution ob;
	    int ans = ob.buyMaximumProducts(n, k, price);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends