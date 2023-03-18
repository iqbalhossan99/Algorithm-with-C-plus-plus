#include<bits/stdc++.h>
using namespace std;

int power(int n, int m)
{


          if(m != 0)
                    return n * power(n, m-1);
          else
                    return 1;

}

int main()
{
          int n, m, result;
          cin>>n>>m;

          result = power(n,m);
          cout<<result<<"\n";


    return 0;
}
