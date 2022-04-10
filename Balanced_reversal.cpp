#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	
	long int t,n,i;
	
	cin >> t;
	
	while(t--)
	{
	    
	    long int zero=0,one=0;
	    
	    string s;
	    
	    cin >> n;
	    
	    cin >> s;
	    
	    for(i=0;i<n;i++)
	    {
	        if(s[i]=='1')
	        one++;
	        
	        else
	        zero++;
	    }
	    
	    for(i=0;i<zero;i++)
	    {
	        cout << '0';
	    }
	    
	    for(i=0;i<one;i++)
	    {
	        cout << '1';
	        
	    }
	    
	    cout << endl;
	    
	   
	    
	    
	    
	    
	    
	}
	   
	   return 0;
	   
}
