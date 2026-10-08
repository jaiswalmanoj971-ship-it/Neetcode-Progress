class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int max=INT_MIN;int min=INT_MAX;int i=0;
        while(i<nums.size()){
            if(nums[i]<min){
                min=nums[i];
                 
            }
            int profit=nums[i]-min;
            if(max<profit){
                max=profit;
            }
            i++; 
        }
        
        return max;
    }
};
