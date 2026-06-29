#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> twoSum(vector<int>& nums,int target){
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j] == target) return{i,j};
            }
        }
        return{};
    }
};
int main(){
    int n,target;
    cin>>n;
    cin>>target;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    Solution obj;
    vector<int>ans = obj.twoSum(nums,target);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
}