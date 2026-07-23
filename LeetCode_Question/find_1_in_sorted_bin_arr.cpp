#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
     int FirstOneinSortedArr(vector<int> &nums){
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 1) return i;
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
    cout<<obj.FirstOneinSortedArr(nums);
}