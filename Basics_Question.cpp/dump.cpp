// #include<bits/stdc++.h>
// using namespace std;


// class Solution{
//     public:
//     int rec(int n){
//         if(n==1) {
            
//             return 1;
//         }   
//         rec(n-1);
//         cout<<n;
//     }
// };
// int main(){
//     int n;
//     cin>>n;

//     Solution obj;
//     cout<<obj.rec(n)<<endl;
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//     int even(int n){
//         if(n==2) {
//             cout<<2;
//             return;
//         }
//         cout<<n;
//         even(n-2);
//     }
// };

// int main(){
//     int n;
//     cin>>n;
//     Solution obj;
//     cout<<"[";
//     cout<<obj.even(n);
//     cout<<"]";
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int print(int n,int p){
        if(n==p){
            cout<<p;
            return;
        }
        cout<<n<<",";
        print(n+1,p);
    }
};

int main(){
    int n;
    cin>>n;
    int p;
    cin>>p;

    Solution obj;
    cout<<"[";
    cout<<obj.print(n,p);
    cout<<"]";
    return 0;
}