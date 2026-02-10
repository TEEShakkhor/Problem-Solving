
#include<bits/stdc++.h>

using namespace std;

int missingNumber(vector<int>& nums) {
    int n= nums.size();
    sort(nums.begin(), nums.end());
        int l=0, r=n;

        while(l<r)
        {
            int m = l+ (r-l)/2;

            if (nums[m] > m)
               {
                 r = m;
               }
            else
               {
                l = m + 1;
               }

        }

        return l;

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


    vector<int> res = moveZeroes(y);

    for(int j=0; j<res.size(); j++)
        {
            cout << res[j] << " ";
        }

    return 0;
}

