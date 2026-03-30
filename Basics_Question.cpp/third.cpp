#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int thirdLargest(vector<int> &arr) {
        int n = arr.size();
        if(n < 3) return -1;

        int first = INT_MIN, second = INT_MIN, third = INT_MIN;

        for(int x : arr) {
            if(x > first) {
                third = second;
                second = first;
                first = x;
            }
            else if(x > second) {
                third = second;
                second = x;
            }
            else if(x > third) {
                third = x;
            }
        }
        return third;
    }
};

int main() {
    
    string line;
    getline(cin,line);
    stringstream ss(line);
    vector<int>arr;
    string token;
    while(getline(ss,token,','));
    {
        arr.push_back(stoi(token));
    }
    Solution obj;
    cout<<obj.thirdLargest(arr)<<" ";
    return 0;
}
