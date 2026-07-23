#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> get_more_n_less(vector<int>& nums,int target){
        int count1=0,count2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] <= target) count1++;
            if(nums[i] >= target) count2++;
        }
        return{count1,count2};
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
    cout<<obj.get_more_n_less(nums,target);
}