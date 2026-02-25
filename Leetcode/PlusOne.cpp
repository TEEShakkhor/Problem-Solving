
#include<bits/stdc++.h>
#include <string>

using namespace std;


   vector<int> plusOne(vector<int>& digits) {


         int n = digits.size();

       for(int i=n-1; i>=0; i--)
       {
           if(digits[i]<9)
           {
               digits[i]++;
               return digits;
           }
           digits[i]=0;
       }

       digits.insert(digits.begin(), 1);
        return digits;
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


    vector<int> res = plusOne(y);

        for(int j=0; j<res.size(); j++)
        {
            cout << res[j] << " ";
        }
    cout << endl;


    return 0;
}

