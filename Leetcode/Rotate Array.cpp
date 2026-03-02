#include<bits/stdc++.h>

using namespace std;

vector<int> rotate(vector<int>& nums, int k)
{
        int n=nums.size();

        k=k%n;

        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());

    return nums;

}


int main()
{
    int x,a;
    cin >> x;
    vector<int> y;
    for(int i=0; i<x; i++)
    {
        int z;
        cin >> z;
        y.push_back(z);
    }

    cin >> a;


    vector<int> res = rotate(y, a);

        for(int j=0; j<res.size(); j++)
        {
            cout << res[j] << " ";
        }
    cout << endl;




    return 0;
}

