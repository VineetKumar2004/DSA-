#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void parentheses(int n,int left,int right,vector<string>& ans,string& temp){

        //base case
        if(left == n && right ==n){
            ans.push_back(temp);
            return;
        }

        //generate left parentheses
        if(left < n){
            temp.push_back('(');
            parentheses(n,left+1,right,ans,temp);
            temp.pop_back();
        }
        //generate right parentheses
        if(right < left){
            temp.push_back(')');
            parentheses(n,left,right+1,ans,temp);
            temp.pop_back();
        }
    }
};

int main(){
    int n;
    cin>>n;
    int left,right;
    vector<string>ans;
    string temp;

    Solution obj;
    obj.parentheses(n,0,0,ans,temp);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
}