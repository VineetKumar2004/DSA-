// #include<bits/stdc++.h>
// using namespace std;
// class solution{
//     public:
//       int fact(int n){
//         //base case
//         if(n==0) return 1;
//         return n * fact(n-1);
//     }
// };
// int main(){
//     int n;
//     cin>>n;
//     solution ob;
//     cout<<ob.fact(n);

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// class solution{
//     public:
//     int sumn(int n){
//         if(n==1) return 1;

//         return n+=sumn(n-1);
//     }
// };
// int main(){
//     int n;
//     cin>>n;
//     int sum=0;
//     solution obj;
//     cout<<obj.sumn(n);
// }

// #include<bits/stdc++.h>
// using namespace std;

// class solution{
//     public:
//     int pow(int num , int n){
//         if(n==0) return 1;
//         if(n==1) return num;
//         return num* pow(num,n-1);
//     }
// };
// int main(){
//     int num;
//     cin>>num;
//     int n;
//     cin>>n;
//     solution obj;
//     cout<<obj.pow(num,n);
// }


#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    int fibn(int n){
        if(n==0) return 0;
        if(n==1) return 1;

        return fibn(n-1)+fibn(n-2);
    }
};
int main(){
    int n;
    cin>>n;
    solution obj;
    cout<<obj.fibn(n);
}