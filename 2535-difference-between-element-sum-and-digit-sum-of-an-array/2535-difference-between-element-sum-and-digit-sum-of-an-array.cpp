class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
    int sum=0;
       int sum2=0;
       
       for(int i=0;i<nums.size();i++){
           sum+=nums[i];
       } 
       for(int i=0;i<nums.size();i++){
           int temp=nums[i];
           int r=0;
           while(temp>0){
               r=temp%10;
               sum2+=r;
               temp/=10;
           }
       }
       int finalsum=sum-sum2;;
       return finalsum;
        
    }
};