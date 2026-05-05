#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n == 1) return true;
        if(n<= 0 || n%3 != 0) return false;

        return isPowerOfThree(n/3);
    }
};

int main(){
    int n;
    cin>>n;
    Solution obj;
    cout<<obj.isPowerOfThree(n);
    return 0;
}