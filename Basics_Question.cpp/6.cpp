#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    void print(vector<int> &nums,int index,int n){
        
        if(n==index) 
        {
            return;
        }    
        cout<<nums[index]<<" ";
        return print(nums,index+1,n);
    }
};
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    solution obj;
    obj.print(nums, 0,n);
    cout<<endl;
}


