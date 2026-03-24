#include<bits/stdc++.h>

using namespace std;

bool checkInclusion(string s1, string s2)// fixed sliding window
{



        int a=s1.size();
        int b=s2.size();
        if(b<a)
            return false;

        vector<int> s1_ct(26);
        vector<int> s2_ct(26);


        for(int i=0; i<a; i++)
        {
            int v1 = s1[i];
            int v2 = s2[i];

            s1_ct[v1-97]+=1;
            s2_ct[v2-97]+=1;
        }
        if(s1_ct == s2_ct)
            {
                return true;
            }

        for(int r=a; r<b; r++)
        {
            int x1 = s2[r];
            int x2 = s2[r-a];

            s2_ct[x1-97]+=1;
            s2_ct[x2-97]-=1;

            if(s1_ct == s2_ct)
               {
                    return true;
               }
        }

        return false;
}


int main()
{
    string n,k;
    cin>> n >> k;

    cout << checkInclusion(n,k);


    return 0;
}



