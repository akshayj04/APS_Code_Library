#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	
	long int t,n,i;
	
	cin >> t;
	
	while(t--)
	{
	    long int c=0;
	    
	    cin >> n;
	    
	    for(i=1;i<=n;i+=2)
	    {
	        c++;
	    }
	    
	    cout << c << endl;
	    
	    
	}
	   
	   return 0;
	   
}
