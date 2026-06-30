#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
     bool perfectSum(int arr[],int index,int n,int target){
        if(target==0) return 1;
        if(index==n || target<0) return 0;

        return perfectSum(arr,index+1,n,target) || perfectSum(arr,index+1,n,target-arr[index]);
     } 
};

int main() {

    int arr[] = {1, 2, 6, 9};
    int target = 10;

    int n = sizeof(arr) / sizeof(arr[0]);
    Solution obj;

    bool ans = obj.perfectSum(arr, 0, n, target);

    if (ans)
        cout << "Subset exists";
    else
        cout << "Subset does not exist";

    return 0;
}