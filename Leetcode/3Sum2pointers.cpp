
#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> threeSum(vector<int>& nums)  //2 pointers
{

    int l,r;
    sort(nums.begin(), nums.end());
    int n=nums.size();
    vector<vector<int>> vv;

    for (int i=0; i<n; i++)
    {
        l=i+1;

        r=nums.size()-1;

        if(nums[i]>0)
        {
            break;
        }
        else if(i>0 && nums[i]==nums[i-1])
        {
            continue;
        }


        while(l<r)
        {
            if(nums[i]+nums[l]+nums[r]<0)
            {
                l+=1;
            }
            else if(nums[i]+nums[l]+nums[r]>0)
            {
                r-=1;
            }

            else
            {
                vv.push_back({nums[i],nums[l],nums[r]});
                l+=1;
                r-=1;
                while(l<r && nums[l]==nums[l-1])
                {
                    l+=1;
                }
                while(l<r && nums[r]==nums[r+1])
                {
                    r-=1;
                }

            }

        }

    }

    return vv;


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


    vector<vector<int>> ar = threeSum(y);

    for (int i=0; i<ar.size(); i++)
    {
        for(int j=0; j<ar[i].size(); j++)
        {
            cout << ar[i][j] << " ";
        }
    cout << endl;
    }

    return 0;
}

