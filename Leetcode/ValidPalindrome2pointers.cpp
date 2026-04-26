#include<bits/stdc++.h>

using namespace std;

bool isPalindrome(string s) //2 pointers
{

     s.erase(remove_if(s.begin(), s.end(), ::isspace), s.end());

     s.erase(remove_if(s.begin(), s.end(), ::ispunct), s.end());

     transform(s.begin(), s.end(), s.begin(), ::tolower);

     int l=0, r=s.size()-1;

     while(l<=r)
     {
         if(s[l]!=s[r])
         {
             return false;
         }
         l+=1;
         r-=1;
     }

     return true;


}


int main()
{

    string s;
    getline(cin, s);

    cout << isPalindrome(s);

    return 0;
}

