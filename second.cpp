#include <bits/stdc++.h>
using namespace std;

int countSubarrays(vector<int> &arr, int k)
{
    // code here
    int n = arr.size();
    int sum = 0, count = 0;
    unordered_map<int, int> mp;
    mp[0] = 1;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (mp.find(sum - k) != mp.end())
        {
            count += mp[sum - k];
        }
        mp[sum]++;
    }

    return count;
}

int main()
{

    return 0;
}