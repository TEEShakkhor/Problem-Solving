
#include<bits/stdc++.h>

using namespace std;

 int maxProfit(vector<int>& prices)
 {
    int n=prices.size();
    int i=0;
    int low=prices[i];
    int high=prices[i];
    int profit = 0;

    for(int i=0; i<n; i++)
    {
        while(i<n-1 && prices[i]>=prices[i+1])
        {
            i++;
        }
        low = prices[i];

        while(i<n-1 && prices[i]<=prices[i+1])
        {
            i++;
        }
        high = prices[i];

        profit += high-low;
    }

    return profit;
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


    cout << maxProfit(y);

    return 0;
}

