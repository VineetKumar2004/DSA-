#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void subset(vector<int>& nums,int index,int n,vector<vector<int>>& ans,vector<int>& temp){
     if(index == n){
        ans.push_back(temp);
        return;
     }
     //include
     temp.push_back(nums[index]);
     subset(nums,index+1,n,ans,temp);
     //exclude
     subset(nums,index+1,n,ans,temp);
    }
};

int main(){
    vector<int>nums={1,2,3};
    vector<vector<int>>ans;
    vector<int>temp;
    Solution obj;
    obj.subset(nums,0,nums.size(),ans,temp);
    for(int i = 0; i < ans.size(); i++) {
    
        for(int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }

        cout << endl;
    }
    return 0;
}