#include<bits/stdc++.h>

using namespace std;

long long l=0, r=num/2;

        if(num==1)
        {
            return true;
        }

        while(l<=r)
        {
            long long m = l+ (r-l)/2;

            if(m*m==num)
            {
                return true;
            }
            else if(num<m*m)
            {
                r=m-1;
            }
            else
            {
                l=m+1;
            }
        }

        return false;
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

