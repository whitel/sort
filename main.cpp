#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        return nums;
    }
};

static void printArray(vector<int> nums) {
    cout << "[";
    for(int i = 0; i < nums.size(); i++) {
        if(i != nums.size() - 1)
            cout << nums[i] << ", ";
        else
            cout << nums[i] << "]" << endl;
    }
}

int main() {
    Solution s;
    vector<int> a = {6, 4, 0, 7, 8, 5, 9, 1, 2, 3};
    printArray(a);
    s.sortArray(a);
    printArray(a);
    return 0;
}
