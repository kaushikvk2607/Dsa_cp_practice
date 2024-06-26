>#include <bits/stdc++.h>
using namespace std;

bool digitsInAscendingOrder(int number)
{
    if (number < 10)
    {
        return true;
    }
    int lastDigit = number % 10;
    number /= 10;
    int currentDigit = number % 10;
    return currentDigit < lastDigit;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        vector<int> nums(n);

        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }
        bool flag = true;
        vector<int> res;
        for (int i = 0; i < n - 1; i++)
        {
            // cout << "Checking pair " << nums[i] << " " << nums[i + 1] << endl;
            if (nums[i] > nums[i + 1])
            {
                // cout << "Detected out of order pair: " << nums[i] << " " << nums[i + 1] << endl;
                if (digitsInAscendingOrder(nums[i]) && (nums[i] % 10 < nums[i + 1]))
                {
                    // cout << "Digits of " << nums[i] << " are in ascending order." << endl;
                    while (nums[i])
                    {
                        res.push_back(nums[i] / 10);
                        res.push_back(nums[i] % 10);
                        nums[i] /= 10;
                        nums[i] /= 10;
                    }
                    // cout << "Splitting digits of " << nums[i] << endl;
                }
                else
                {
                    flag = false;
                    break;
                }
            }
            else if (nums[i] == nums[i + 1])
            {
                res.push_back(nums[i]);
                // cout << "Duplicate detected: " << nums[i] << endl;
            }
            else
            {
                res.push_back(nums[i]);
                // cout << "In order pair: " << nums[i] << " " << nums[i + 1] << endl;
            }
        }
        // for (int i = 0; i < res.size(); i++)
        // {
        //     cout << res[i];
        // }
        // cout << endl;
        for (size_t i = 0; i < res.size() - 1; ++i)
        {
            if (res[i] > res[i + 1])
            {
                flag =  false;
            }
        }
        if (flag == false)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
