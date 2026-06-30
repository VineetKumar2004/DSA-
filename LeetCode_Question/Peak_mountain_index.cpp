#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int peak(vector<int>& nums){
        int start=0;
        int end=nums.size();

        while(start <= end){
            int mid=start+(end-start)/2;
            if(nums[mid] > nums[mid+1] && nums[mid] > nums[mid-1]) return mid;
            else if(nums[mid] < nums[mid+1]) start=mid+1;
            else end=mid-1;
        }
        return -1;
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
    cout<<obj.peak(nums);
}