#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,l,r;
    cin>>n;
    cin>>l;
    cin>>r;
    vector<int>reverseArr(n);
    for(int i=0;i<n;i++){
        cin>>reverseArr[i];
    }

    int start=l-1;
    int end=r-1;
    while(start<end){
        swap(reverseArr[start],reverseArr[end]);
        start++,end--;
    }
    for(int i=0;i<n;i++){
        cout<<reverseArr[i]<<" ";
    }
    return 0;
}