#include<bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int>& numbers, int target)  //2 pointers
{

    int l=0;

    int r=numbers.size()-1;



    while(l<=r)
    {
        if(numbers[l]+numbers[r]>target)
           {
               r-=1;
           }
        else if(numbers[l]+numbers[r]<target)
            {
                l+=1;
            }
        else
            {
                vector<int> arr = {l+1, r+1};
                return arr;
            }

    }


    return {};




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

    vector<int> ar = twoSum(y, a);

    for(auto val: ar)
    {
        cout << val << " ";
    }

    return 0;
}

