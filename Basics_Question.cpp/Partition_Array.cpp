#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
     vector<int> pivotreturnn(vector<int>& nums,int pivot){
           vector<int>ans;

           for(int i=0;i<nums.size();i++){
              if(nums[i] < pivot) ans.push_back(nums[i]);
           }
           for(int i=0;i<nums.size();i++){
              if(nums[i] == pivot) ans.push_back(nums[i]);
           }
           for(int i=0;i<nums.size();i++){
              if(nums[i] > pivot) ans.push_back(nums[i]);
           }
        return ans;
     }
};

int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int pivot;
    cin>>pivot;
    Solution obj;
    vector<int> ans = obj.pivotreturnn(nums, pivot);
    for(int i=0;i<ans.size();i++){
        cout<<x;
    }
}    
    