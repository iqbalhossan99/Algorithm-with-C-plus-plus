#include<bits/stdc++.h>
using namespace std;

int sum_of_intgers(int num_array[], int sz )
{
          if(sz<= 0)
                    return 0;

          return num_array[sz-1] + sum_of_intgers(num_array, sz-1);

}

int main() {

          int n;
          cin>>n;

          int num_array[n];

          for(int i=0; i<n; i++)
          {
                    cin>>num_array[i];
          }


          cout<<sum_of_intgers(num_array, n);
    return 0;
}
