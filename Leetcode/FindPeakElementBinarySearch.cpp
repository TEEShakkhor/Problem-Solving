#include<bits/stdc++.h>

using namespace std;

int findPeakElement(vector<int>& nums) {
       int l=0, r=nums.size()-1;

        while(l<r)
        {
            int m = l+ (r-l)/2;

            if(nums[m]<nums[m+1])
            {
               l = m+1;
            }
            else
            {
                r = m;
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

