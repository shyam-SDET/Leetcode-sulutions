class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=n*(n+1)/2;
        int sum1=0,missing;
        for(int i=0;i<n;i++)
        {
            sum1=sum1+nums[i];
        }
        missing=sum-sum1;
        return missing;
        
    }
};
