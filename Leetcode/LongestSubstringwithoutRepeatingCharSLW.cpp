#include<bits/stdc++.h>

using namespace std;

int lengthOfLongestSubstring(string s)// dynamic sliding window
{
    set<char> a;

    int n= s.size();
    int ct=0,l=0,longest=0;
    for(int r=0; r<n; r++)
    {

        while(a.find(s[r])!=a.end())
        {
            a.erase(s[l]);
            l++;
        }

        ct = r-l+1;
        longest = max(longest, ct);
        a.insert(s[r]);

    }
    return longest;


}


int main()
{
    int n;
    cin>> n;
    string s;
    cin >> s;
    cout << lengthOfLongestSubstring(s);

    return 0;
}

