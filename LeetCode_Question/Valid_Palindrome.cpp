#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool pal(int x){
        if(x < 0) return 0;
        string s=to_string(x);

        int start=0;
        int end=s.size()-1;
        while(start < end){
            if(s[start] != s[end]) return 0;
            start++;
            end--;
        }
        return false;
    }
};

int main(){
    int x;
    cin>>x;
    Solution obj;
    cout<<obj.pal(x);
}