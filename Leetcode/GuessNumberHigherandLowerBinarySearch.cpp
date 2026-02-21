#include<bits/stdc++.h>

using namespace std;

 int guessNumber(int n) {

        int l=0, r=n;

        while(l<=r)
        {
            int m = l+ (r-l)/2;

            if(guess(m)==1)
            {
                l = m+1;
            }
            if(guess(m) == -1)
            {
                r=m-1;
            }
            if(guess(m)==0)
            {
                return m;
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

