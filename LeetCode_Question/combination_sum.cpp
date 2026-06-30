#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void combination(vector<int>& candidate,int index,int n,vector<vector<int>>& ans,vector<int>& temp,int target){
        
        if(target == 0){
            ans.push_back(temp);
            return;
        }
        if(index == n || target <0) return;

        temp.push_back(candidate[index]);
        //inclusion
        combination(candidate,index,n,ans,temp,target-candidate[index]);
        temp.pop_back();
        //exclusion
        combination(candidate,index+1,n,ans,temp,target);
    }
};

int main(){
    int n;
    cin>>n;
    vector<int>candidate(n);
    for(int i=0;i<n;i++){
        cin>>candidate[i];
    }
    int target;
    cin>>target;
    vector<vector<int>>ans;
    vector<int>temp;
    int n=candidate.size();
    
    Solution obj;
    obj.combination(candidate,0,n,ans,temp,target);
    
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}