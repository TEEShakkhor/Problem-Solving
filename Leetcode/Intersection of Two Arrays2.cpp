#include<bits/stdc++.h>

using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
{

    multiset<int> s2(nums2.begin(), nums2.end());
    vector<int> res;

    for(int val : nums1) {
        auto it = s2.find(val);
        if(it != s2.end())
        {
            res.push_back(val);
            s2.erase(it);
        }
    }
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

    int a;
    cin >> a;
    vector<int> b;
    for(int i=0; i<a; i++)
    {
        int c;
        cin >> c;
        b.push_back(c);
    }


    vector<int> res = intersection(y,b);

    for(int j=0; j<res.size(); j++)
        {
            cout << res[j] << " ";
        }

    return 0;
}


