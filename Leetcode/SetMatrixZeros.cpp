
#include<bits/stdc++.h>

using namespace std;


    bool containsDuplicate(vector<int>& nums)
    {
        int n= nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0; i<n-1; i++)
        {
            if(nums[i]!=nums[i+1])
            {
                continue;
            }
            else
            {
                return true;
            }
        }
        return false;
    }


int main()
{
    int x;
    cin >> x;
    vector<int> y;
    for(int i=0; i<x; i++)
    {
        int z;
        cin >> z;
        y.push_back(z);
    }


    cout << containsDuplicate(y);

    return 0;
}

