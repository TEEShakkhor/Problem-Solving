
#include<bits/stdc++.h>

using namespace std;

string addStrings(string num1, string num2) //strings
{

    int n1=num1.size();
    int n2=num2.size();

    int i=n1-1;
    int j=n2-1;
    int d1=0;
    int d2=0;
    int carry = 0;
    string result = "";

    while(i>=0 || j>=0 || carry)
    {
        if(i>=0)
        {
            d1 = num1[i]-'0';
            i-=1;
        }
        else
        {
            d1 = 0;
        }
        if(j>=0)
        {
            d2 = num2[j]-'0';
            j-=1;
        }
        else
        {
            d2 = 0;
        }

        int sum = d1 + d2 + carry;
        result += (sum % 10 + '0');
        carry = sum / 10;


    }

    reverse(result.begin(), result.end());
    return result;


}


int main()
{
    string x, y;
    cin >> x >> y;


    cout << addStrings(x,y);

    return 0;
}


