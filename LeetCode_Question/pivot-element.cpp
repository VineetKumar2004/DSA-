#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int pivotele(vector<int>& nums){
        for(int pivot=0;pivot<nums.size();pivot++){
            int leftsum=0,rightsum=0;
            //left
            for(int i=0;i<pivot;i++){
                leftsum+=nums[i];
            }
            for(int i=pivot+1;i<nums.size();i++){
                rightsum+=nums[i];
            }
            if(leftsum == rightsum) return pivot;
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
    cout<<obj.pivotele(nums);
}