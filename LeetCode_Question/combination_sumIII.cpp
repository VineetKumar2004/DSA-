#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void combinationsum(int num,int k,vector<vector<int>>& ans,vector<int>& temp,int target){
        
        if(target == 0 && temp.size() == k){
            ans.push_back(temp);
            return;
        }
        //invalid case
        if(target < 0 || temp.size() > k || num > 9) return;


        temp.push_back(num);
        combinationsum(num + 1, k, ans, temp, target - num);
        temp.pop_back();
        //exclusion
        combinationsum(num+1,k,ans,temp,target);
    }
};

int main(){
    int k,target;
    cin>>k>>target;
    vector<vector<int>>ans;
    vector<int>temp;
    
    Solution obj;
    obj.combinationsum(1,k,ans,temp,target);

    for(int i=0;i<ans.size();i++){
        cout<<"[";
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j];
        }
        cout<<"]";
    }

}