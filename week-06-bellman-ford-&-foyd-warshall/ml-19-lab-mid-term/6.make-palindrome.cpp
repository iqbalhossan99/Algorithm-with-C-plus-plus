#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[26];
    for(int i=0; i<26; i++)ar[i]=0;
    string s;
    cin>>s;
    int  l= s.length();
    for(int i=0; i<l; i++)
    {
        ar[ s[i]-97]++;
    }





    int odd_letter = 0;
    for(int i=0; i<26; i++)
    {
        if(ar[i]== 1 || ar[i]%2 == 1)
        {
            odd_letter++;
        }
        if(odd_letter>1)
        {
            cout<<"NO";
            return 0;
        }
    }

    cout<<"YES";
    return 0;
}
