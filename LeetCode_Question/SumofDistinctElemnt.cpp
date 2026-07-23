#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int SumofDistinctElemnt(vector<int>& nums){
        sort(nums.begin(),nums.end());
        int sum=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i] != nums[i-1]) sum+=nums[i];
        }
        return sum;
    }
};

int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    Solution obj;
    cout<<obj.SumofDistinctElemnt(nums);
}