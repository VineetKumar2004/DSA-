#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0) return 0;

        int start = 0;

        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[start]){
                start++;
                nums[start] = nums[i];
            }
        }

        return start + 1;
    }
};    

int main(){
    vector<int> ans = {1, 1, 2, 2, 4, 6};
    
    Solution obj;
    int result = obj.removeDuplicates(ans);
    
    cout << "Length after removing duplicates: " << result << endl;
    cout << "Array elements: ";
    for(int i = 0; i < result; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    
    return 0;
}