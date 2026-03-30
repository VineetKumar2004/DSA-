// #include<iostream>
// #include<vector>
// #include<sstream>
// #include<utility>
#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
      void sorting(vector<int> &arr){

        int n=arr.size();
        int start=0;
        int end=n-1;

        while(start<end)
        {
            if(arr[start]>arr[end])
            {
                swap(arr[end],arr[start]);
                start++;
                end--;
            }
            else if(arr[start]<arr[end])
            {
                start++;
            }
            else
            {
                // swap(arr[start],arr[end]);
                end--;
            }
        }
    }
};

int main(){
    string line;
    getline(cin,line);
    for(char &ch:line)
    {
        if(ch=='[' || ch==']' || ch==',') ch=' ';
    }

    stringstream ss(line);
    vector<int>arr;
    int x;
    while(ss>>x) 
    {arr.push_back(x);}

    solution obj;
    obj.sorting(arr);
    for(int x : arr) cout << x << " ";
    return 0;

}