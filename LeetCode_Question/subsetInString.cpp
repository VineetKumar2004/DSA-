#include<bits/stdc++.h>
using namespace std;
void subsetInString(vector<string>& nums,int index,int n,vector<vector<string>>& ans,vector<string>& temp){
    if(index == n){
        ans.push_back(temp);
        return;
    }

    //include
    temp.push_back(nums[index]);
    subsetInString(nums,index+1,n,ans,temp);
    temp.pop_back();

    //exclude
    subsetInString(nums,index+1,n,ans,temp);

}

int main(){
    vector<string>nums={"abcd"};
    vector<vector<string>>ans;
    vector<string>temp;

    subsetInString(nums,0,nums.size(),ans,temp);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j];
        }
        cout<<endl;
    }

    return 0;
}