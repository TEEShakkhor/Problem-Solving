#include<bits/stdc++.h>

using namespace std;

int minSubArrayLen(int target, vector<int>& nums)// dynamic sliding window
{
     int sum = 0, minSize = INT_MAX, ct=0;

     int n = nums.size();

     int l=0;

     for(int r=0; r<n; r++)
     {
             sum+=nums[r];


             while(sum>=target)
             {
                 ct = r-l+1;
                 minSize=min(minSize, ct);
                 sum-=nums[l];
                 l++;

             }

     }
     if(minSize == INT_MAX)
     {
         return 0;
     }

     return minSize;

}


int main()
{
    int x,n,y;
    vector<int> v;
    cin>> x >> n;
    for(int i=0; i<n; i++)
    {
        cin >> y;
        v.push_back(y);
    }
    cout << minSubArrayLen(x, v);

    return 0;
}

