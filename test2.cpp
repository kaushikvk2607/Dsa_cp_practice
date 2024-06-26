#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define MOD 1000000007

int maxSubarraySum(const vector<int> &nums, int size)
{
    int maxSum = 0, currentSum = 0;
    bool allNegative = true;

    for (int i = 0; i < size; i++)
    {
        if (nums[i] >= 0)
        {
            allNegative = false;
            break;
        }
    }

    if (allNegative)
    {
        return maxSum;
    }

    for (int i = 0; i < size; i++)
    {
        if (nums[i] >= 0)
        {
            currentSum = (max(nums[i], (currentSum + nums[i])));
            maxSum = (max(maxSum, currentSum));
        }
        else
        {
            currentSum = 0;
        }
    }

    return maxSum;
}

int main()
{
    int size;
    int k;
    cin >> size >> k;
    vector<int> nums(size);
    for (int i = 0; i < size; i++)
    {
        cin >> nums[i];
    }
    int maxSum = maxSubarraySum(nums, size);
    if (maxSum == 0)
    {
        for (int i = 0; i < k; i++)
        {
            maxSum += nums[i];
        }
    }
    cout << maxSum << endl;
    if (maxSum < 0)
    {
        cout << MOD+maxSum<<endl;
    }
    else
    {
        for (int i = 0; i < k; i++)
        {
            maxSum += (maxSum);
        }
        cout << maxSum % MOD << endl;
    }

    return 0;
}
