#include<bits/stdc++.h>

using namespace std;

vector<int> sortedSquares(vector<int>& nums) //2 pointers
{

    int l=0;

    int r=nums.size()-1;

    vector<int> res;

    while(l<=r)
    {
        if(abs(nums[l])>abs(nums[r]))
           {
               res.push_back(nums[l]*nums[l]);
               l+=1;
           }
        else
            {
                res.push_back(nums[r]*nums[r]);
                r-=1;
            }
    }

    reverse(res.begin(), res.end());

    return res;

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

    vector<int> result = sortedSquares(y);

    for(auto v:result)
    {
        cout << v << " ";
    }

    return 0;
}

