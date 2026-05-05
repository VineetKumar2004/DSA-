#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1) return 1;
        if(n<=0|| n% 2!= 0 ) return 0;

        return isPowerOfTwo(n/2);
    }
};

int main(){
    int n;
    cin>>n;
    Solution obj;
    cout<<obj.isPowerOfTwo(n);
    return 0;
}