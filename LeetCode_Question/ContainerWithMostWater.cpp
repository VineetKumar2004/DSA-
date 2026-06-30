#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
     int mostwater(vector<int>& height){
        int n=height.size();
        int left=0;right=n-1;
        int maxWater=0

        while(left < right){
            int width=right-left;
            int hgt=min(height[left],height[right]);
            int area=hgt*width;
            int maxWater=max(area,maxWater);

            if(height[left] < height[right]) left++;
            else right--;
        }
        return maxWater;
     }
};

int main(){
    int n;
    cin>>n;
    vector<int>height;
    for(int i=0;i<n;i++){
        cin>>height[i];
    }
    Solution obj;
    cout<<obj.mostwater(height)<<endl;
    return 0;
}