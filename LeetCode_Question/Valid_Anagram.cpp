#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int anagram(string s,string t){
        if(s.length() != t.length()) return false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        return s==t;
    }
};

int main(){
    string s,t;
    cin>>s;
    cin>>t;
    Solution obj;
    cout<<obj.anagram(s,t);
}