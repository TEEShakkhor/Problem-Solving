#include<bits/stdc++.h>

using namespace std;

 int mySqrt(int x) {
        int num = x;
        long long l=0, r=num/2;

        if(num==1)
        {
            return 1;
        }

        while(l<=r)
        {
            long long m = l+ (r-l)/2;

            if(m*m==num || (m*m<num && (m+1)*(m+1)>num))
            {
                return m;
            }
            if(m*m>num)
            {
                r=m-1;
            }
            else
            {
                l=m+1;
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

