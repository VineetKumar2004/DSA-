#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
      int KMP(string haystack,string needle){
        int n=haystack.size();
        int m=needle.size();

        for(int i=0;i<=n-m;i++){
            int first=i;
            int second=0;
            while(second < m){
                if(haystack[first] != needle[second]) break;
                else first++,second++;
            }
            if(second == m) return first - second;
        }
        return -1;
      }
};

int main(){
    string haystack;
    string needle;
    cin>>haystack;
    cin>>needle;

    Solution obj;
    cout<<obj.KMP(haystack,needle);
    return 0;

}