#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void permut(vector<int>& nums,vector<vector<int>>& ans,vector<int>& temp,vector<bool>& visited){
     
        //base case
        if(visited.size() == temp.size()){
            ans.push_back(temp);
            return;
        }
        for(int i=0;i<visited.size();i++){
            if(visited[i] == 0){
                temp.push_back(nums[i]);
                visited[i]=1;
                permut(nums,ans,temp,visited);
                visited[i]=0;
                temp.pop_back();
            }
        }
    }
};

int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<vector<int>>ans;
    vector<int>temp;
    vector<bool>visited(n,0);

    Solution obj;
    obj.permut(nums,ans,temp,visited);

    for(int i=0;i<ans.size();i++){
        cout<<"[";
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j];
        }
        cout<<"]";

    }
    return 0;
}