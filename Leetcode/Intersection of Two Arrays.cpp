#include<bits/stdc++.h>

using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
{
   unordered_set<int> s1;
   unordered_set<int> s2;

   vector<int> res;


   for(int i=0; i<nums1.size(); i++)
   {
       s1.insert(nums1[i]);
   }

   for(int i=0; i<nums2.size(); i++)
   {
       s2.insert(nums2[i]);
   }
//   unordered_set<int> small;
//   unordered_set<int> big;
//
//   if(s1.size()>=s2.size())
//   {
//       big = s1;
//       small=s2;
//   }
//
//   else
//   {
//       big = s2;
//       small=s1;
//   }
//


   for(int val: s1)
   {
       if(s2.count(val))
       {
           res.push_back(val);
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


