#include<bits/stdc++.h>

using namespace std;

double findMaxAverage(vector<int>& nums, int k) // fixed sliding window
{

        double maxSum = 0;
        int n=nums.size();
        for( int i=0; i<k; i++)
        {
            maxSum+= nums[i];
        }
        double currSum = maxSum;
        for(int i=k; i<n; i++)
        {
            currSum-=nums[i-k];
            currSum+=nums[i];
            maxSum=max(maxSum, currSum);
        }

        return maxSum/k;
}


int main()
{
    int n,k;
    cin>> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {

        cin >> v[i];
    }
    cin >>k;


    cout << findMaxAverage(v,k);


    return 0;
}



