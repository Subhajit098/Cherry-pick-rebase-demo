#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> anagrams(vector<string> &arr)
{
    // code here
    vector<int>extra_piece;
    int n_new=extra_piece.size();
    int n = arr.size();
    map<string, vector<string>> mp;
    for (int i = 0; i < n; i++)
    {
        string str = arr[i];
        sort(str.begin(), str.end());
        mp[str].push_back(arr[i]);
    }

    set<vector<string>> st;
    for (auto it : mp)
    {
        st.insert(it.second);
    }

    vector<vector<string>> ans;
    for (auto it : st)
    {
        ans.push_back(it);
    }

    return ans;
}

int main()
{

    return 0;
}