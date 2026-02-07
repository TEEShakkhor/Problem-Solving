
#include<bits/stdc++.h>

using namespace std;

int arrangeCoins(int n) {
      long long l=0, r=n;

        if(n==1)
        {
            return 1;
        }

        while(l<=r)
        {
            long long m = l+ (r-l)/2;
            long long sum = (m*(m+1))/2;


            if(n==sum)
            {
                return m;
            }
            else if(n<sum)
            {
                if(n>sum-m)
                {
                    return m-1;
                }
                r=m-1;
            }
            else
            {
                if(n<sum+m+1)
                {
                    return m;
                }
                l=m+1;
            }
        }

        return -1;
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

