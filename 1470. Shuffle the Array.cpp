
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int length) {
        vector<int>ans(2*length);
        for(int i=0;i<length;i++){  
            ans[2*i]=nums[i];
            ans[2*i+1]=nums[length+i];
        }
        return ans;
    }
};
