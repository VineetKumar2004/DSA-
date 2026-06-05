#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int longestseq(vector<int>& nums){
        
        sort(nums.begin(),nums.end());
        if(nums.empty()) return 0;
        int n=nums.size();
        int current=1;
        int longest=1;

        for(int i=1;i<n;i++){
            if(nums[i] == nums[i-1]) continue;
            else if(nums[i] == nums[i-1]+1) current++;
            else{
                 longest=max(longest,current);
                 current=1;
            }     
        }
        return max(longest,current);
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
    cout<<obj.longestseq(nums);
}