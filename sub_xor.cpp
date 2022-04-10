#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,n,i;
    
    string s;
    
    cin >> t;
    
    while(t--)
    {
       long long int sum=0,k=1,res=0;
       
       cin >> n;
    
       cin >> s;

       long long int a[n]={0};

       if(s[0]=='1')
       {
           a[0]=1;
       }

       long long int p=a[0];

       for(i=1;i<n;i++)
       {
           if(s[i]=='1')
           {
               p += (i+1);
           }
        
           a[i] = p;
        
           a[i] = a[i]%2;
       }

       for(i=n-1;i>=0;i--)
       {
           if (a[i]==1)
           {
               res += k;
               res = res%998244353;
           }
           
           k = k*2;
           
           k = k%998244353;
        }
        
        cout << res%998244353 << endl;
    
    
    }
    
    
}

