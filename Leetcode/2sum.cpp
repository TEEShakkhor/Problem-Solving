#include<bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target)
{

    int n=nums.size();
    vector<int> vv;
    int l=0,r=n-1;

        while(l<r)
        {
            if(nums[l]+nums[r]==target)
            {
                vv.push_back(l);
                vv.push_back(r);
                return vv;
            }
            r--;
            if(l==r)
            {
                l+=1;
                r=n-1;
            }
        }


}


int main()
{
    int x,a;
    cin >> x >> a;
    vector<int> y;
    for(int i=0; i<x; i++)
    {
        int z;
        cin >> z;
        y.push_back(z);
    }

    vector<int> res = twoSum(y, a);

        for(int j=0; j<res.size(); j++)
        {
            cout << res[j] << " ";
        }
    cout << endl;


    return 0;
}

