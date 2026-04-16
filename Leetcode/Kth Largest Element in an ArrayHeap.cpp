
#include<bits/stdc++.h>

using namespace std;

int findKthLargest(vector<int>& nums, int k) //2 pointers
{





}


int main()
{
    int x,b;
    cin >> x;
    vector<int> y;
    for(int i=0; i<x; i++)
    {
        int z;
        cin >> z;
        y.push_back(z);
    }
    cin >> b;

    cout << findKthLargest(y,b);

    return 0;
}

