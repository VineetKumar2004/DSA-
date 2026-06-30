// search in rotated sorted array

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int search(vector<int>& arr,int target){
        int start=0;
        int end=arr.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid] == target) return mid;

            else if(arr[mid] >= arr[start]){
                if(arr[start] <= target && arr[mid] >= target) end=mid-1;
                else start=mid+1;
            } 
            else if(arr[mid] <= arr[start]){
                if(arr[mid] <= target && arr[end] >= target) start=mid+1;
                else end=mid-1;
            }
           
        }
        return-1;
    }
};

int main(){
    int n,target;
    cin>>n;
    cin>>target;
    
    vector<int>arr;
    for(int i=0;i<n;i++){
       int x;
       cin>>x;
       arr.push_back(x);
    }
    Solution obj;
    cout<<obj.search(arr,target);
}