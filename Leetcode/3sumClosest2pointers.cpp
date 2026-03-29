
#include<bits/stdc++.h>

using namespace std;

int threeSumClosest(vector<int>& nums, int target) //2 pointers
{

    int l,r, close_sum = 0, sum=0, diff =0, minDiff=INT_MAX;
    sort(nums.begin(), nums.end());
    int n=nums.size();

    for (int i=0; i<n; i++)
    {
        l=i+1;

        r=nums.size()-1;

        if(i>0 && nums[i]==nums[i-1])
        {
            continue;
        }


        while(l<r)
        {
            sum = nums[i]+nums[l]+nums[r];
            diff = abs(sum - target);

           if (diff < minDiff) {
                minDiff = diff;
                close_sum = sum;
            }


           if(sum==target)
            {
                return sum;
            }
            else if(sum<target)
            {
                l+=1;
            }
            else
            {
                r-=1;
            }
        }

    }

    return close_sum;


}


int main()
{
    int x,b;
    cin >> x;
    vector<int> y;
    for(int i=0; i<x; i++)
    {
        int z;
        cin >> z;
        y.push_back(z);
    }
    cin >> b;

    cout << threeSumClosest(y,b);

    return 0;
}

