#include <bits/stdc++.h>
using namespace std;

int main()
{
    int rem, n, seen[10]={0};

    cout<<"Enter a number: ";
    cin>>n;
    
    while(n!=0)
    {
        rem=n%10;
      
        if(seen[rem]==1)
          break;
        
        seen[rem]=1;
        n/=10;
    }
    
    if(n>0)
      cout<<"Yes there are repeated digits in the entered number.";
    else
      cout<<"No there are no repeated digits in this number.";
    return 0;
}
