
#include<bits/stdc++.h>

using namespace std;

int maxProfit(vector<int>& prices) //array
{

    int minPrice = INT_MAX;
    int max_Profit = 0, profit = 0;

    int n=prices.size();

    for (int price : prices)
    {
        if (price < minPrice)
        {
            minPrice = price;
        }
        profit = price - minPrice;

        if(profit>max_Profit)
        {

            max_Profit = profit;
        }
    }

    return max_Profit;


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

