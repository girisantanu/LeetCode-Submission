
class Solution {
public:
    int maxValue(vector<vector<int>>& nums, int k) {
        int n = nums.size();
		// Sort by endDay
        // O(nlog(n))
        sort(nums.begin(),nums.end(),[](vector<int> &a,vector<int>&b){
            if(a[1]<b[1])
                return true;
            else if(a[1]==b[1] && a[0]<b[0])
                return true;
            return false;
        });
        
        // O(n)
        vector<int> v;
        for(auto i:nums){
            v.push_back(i[1]);
        }
        vector<int> pos;
		// get the nearest event which is not overlapping
        // O(nlog(n))
        for(auto i:nums){
            auto node = lower_bound(v.begin(),v.end(),i[0]);
            int pp = node-v.begin();
            pos.push_back(pp);
        }
        
        // O(n*k)
        vector<vector<int>> dp(n+1,vector<int>(k+1,0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=k;j++){
                int p =pos[i-1];
				// take it or not
                dp[i][j] = max(dp[p][j-1]+nums[i-1][2],dp[i-1][j]);
            }
        }
        return dp.back().back();
    }
};
