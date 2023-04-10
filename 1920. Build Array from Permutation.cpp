class Solution {
public:
    vector<int> buildArray(vector<int>& nums) 
    {
        int length=nums.size();
        vector <int> ans(length,0);
        for(int i=0;i<length;i++)
        {
            ans[i]=nums[i];
        }
        for(int i=0;i<length;i++)
        {
          ans[i] = nums[nums[i]]; 
        }
        return ans;
    }
    
};
