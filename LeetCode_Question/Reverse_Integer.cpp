// class Solution {
// public:
//     int reverse(int x) {
//         int rem,ans=0;
//         while(x)
//         {
//             rem=x%10;
//             x/=10;
//             if(ans>INT_MAX/10 || ans<INT_MIN/10)
//             return 0;
//             ans=ans*10+rem;
//         }
//         return ans;
//     }
// };


// #include<iostream>
// using namespace std;
// int main(){
//     int sum=1;
//     int arr[]={1,2,4,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         sum+=i;
    
//     cout<<arr[sum];
//    }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int sum1=0;
//     int sum2=0;
//     int n[]={1,4,7,9};
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<=i;j++){
//         sum1+=n[j];
//         }
//         for(int k=0;k<=j;k++){
//             sum2+=n[k];
//         }
//     }
// }



#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int initial, n;
    cin >> initial >> n;

    int bal = initial;

    // store transactions (only uncommitted ones)
    vector<string> typ;   // "credit" or "debit"
    vector<int> amt;      // amounts
    vector<bool> act;     // true if active

    // store balances after commits
    vector<int> comm;

    for (int i = 0; i < n; i++) {
        string op;
        cin >> op;

        if (op == "read") {
            cout << bal << "\n";
        }
        else if (op == "credit") {
            int x; cin >> x;
            bal += x;
            typ.push_back("credit");
            amt.push_back(x);
            act.push_back(true);
        }
        else if (op == "debit") {
            int x; cin >> x;
            bal -= x;
            typ.push_back("debit");
            amt.push_back(x);
            act.push_back(true);
        }
        else if (op == "abort") {
            int idx; cin >> idx;
            idx--; // 1-based to 0-based
            if (idx >= 0 && idx < (int)typ.size()) {
                if (act[idx]) {
                    if (typ[idx] == "credit") bal -= amt[idx];
                    else bal += amt[idx];
                    act[idx] = false;
                }
            }
        }
        else if (op == "commit") {
            comm.push_back(bal);
            // clear transactions
            typ.clear();
            amt.clear();
            act.clear();
        }
        else if (op == "rollback") {
            int c; cin >> c;
            c--; // 1-based to 0-based
            if (c >= 0 && c < (int)comm.size()) {
                bal = comm[c];
                typ.clear();
                amt.clear();
                act.clear();
            }
        }
    }

    return 0;
}
