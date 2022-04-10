#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	
	long int t,n,x,r,k,a,b,c;
	
	cin >> t;
	
	while(t--)
	{
	    
	    cin >> n >> x;
	    
	    r = x%3;
	    
	    if(r==0)
	    {
	        a = x/3;
	        
	        b = 0;
	        
	    }
	    
	    else
	    {
	        k = x+3-r;
	        
	        a = k/3;
	        
	        b = k-x;
	        
	        
	    }
	    
	    if(a+b<=n)
	    {
	        cout << "YES" << endl;
	        
	        cout << a << " " << b << " " << n-a-b << endl;
	    }
	    
	    else
	    cout << "NO" << endl;
	    
	    
	    
	    
	}
	   
	   return 0;
	   
}
