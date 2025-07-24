#include <iostream>
#include <vector>
#include <limits>
using namespace std;

class Solution {
public:

    int minimumSubarrayLength(vector<int>& nums, int k) {
        if(k==0) return 1;
        int n = nums.size();
        int result = numeric_limits<int>::max();
        int left = 0, right = 0;
        int sum = 0;
        
        while (right < n) {
            sum |= nums[right];
            cout << "sum after OR: " << sum << endl;
            
            while (sum >= k && left<=right) {
                result = min(result, right - left + 1);
                cout << "result: " << result << ", left: " << left << ", right: " << right << endl;
                sum &= ~nums[left];
                cout << "sum after AND: " << sum << endl;
                
                left++;
            }
            if(sum>=k){
                result = min(result, right - left + 1);
            }            

            right++;
        }
        
        return result != numeric_limits<int>::max() ? result : -1;
    }
};

int main() {
    Solution sol;
    int k;
    int vecsize;
    cin>>vecsize;
    vector<int> nums(vecsize);
    for (int i = 0; i < vecsize; i++)
    {
        cin >> nums[i];
    }
    cin>>k;
    cout << sol.minimumSubarrayLength(nums, k) << endl;  // Output: 2
    return 0;
}
