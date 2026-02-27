
#include<bits/stdc++.h>

using namespace std;

int singleNumber(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        int l=0;
        while(l<n-1)
        {
            if(nums[l]!=nums[l+1])
            {
                return nums[l];
            }

            else
            {
                l+=2;
            }

        }

        return nums[n-1];
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


    cout << singleNumber(y);

    return 0;
}

