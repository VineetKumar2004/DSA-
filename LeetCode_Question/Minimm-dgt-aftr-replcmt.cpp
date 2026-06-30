#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int dgtRep(vector<int>& nums){
        int mini=INT_MAX;
        for(int i=0;i<nums.size();i++){
            int n=nums[i];
            int sum=0;

            while(n>0){
               sum += n%10;
               n/=10;
            }
            if(sum < mini) mini = sum;
        }
        return mini;
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
    cout<<obj.dgtRep(nums);
}