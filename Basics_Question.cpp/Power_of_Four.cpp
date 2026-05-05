#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool PowerofFour(int n) {
        if (n == 1) return true;
        if (n <= 0 || n % 4 != 0) return false;
        return PowerofFour(n / 4);
    }
};

int main() {
    int n;
    cin >> n;

    Solution obj;
    cout << obj.PowerofFour(n);

    return 0;
}