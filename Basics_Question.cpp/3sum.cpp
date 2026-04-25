class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;

        for(int i=0;i<n;i++){
            if(i > 0 && nums[i] == nums[i-1]) continue;

            int j=i+1,k=n-1;           //i=0 index toh j=0+1 index pe (i) and k=last elemt

            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];

                if(sum>0)
                {
                     k--;
                }     
                else if(sum<0) {
                    j++;
                }
                else{
                     ans.push_back({nums[i],nums[j],nums[k]});
                      j++;
                      k--;

                     while(j < k && nums[j] == nums[j-1]) {
                        j++;
                      } 
                    }
            } 
        }
        return ans;
    }
};