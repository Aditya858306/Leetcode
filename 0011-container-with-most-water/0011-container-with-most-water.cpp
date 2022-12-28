class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size()-1;
        int maxarea = min(height[i] , height[j]);
        while(i<j){
            if(height[i] < height[j] ){
                int area = (j-i) * height[i];
                maxarea = max(maxarea , area);
                i++;
            }
            else{
                int area = (j-i)*height[j];
                maxarea = max(maxarea, area);
                j--;
            }
        }
        return maxarea;
    }
};