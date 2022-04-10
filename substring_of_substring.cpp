#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	
	long int t,n,i;
	
	cin >> t;
	
	while(t--)
	{
	    long int c=0,max=0;
	    
	    string s,sub;
	    
	    cin >> s;
	    
	    n = s.length();
	    
	    sub = s.substr(1,n-2);
	    
	    for(i=0;i<n-2;i++)
	    {
	        
	        if(sub[i]!=s[0] && sub[i]!=s[n-1])
	        c++;
	        
	        else
	        {
	            if(c>max)
	            {
	                max = c;
	            }
	            
	            c = 0;
	        }
	        
	        
	        
	        
	    }
	    
	    if(c!=0)
	    {
	        if(c>max)
	        {
	           max = c;
	        }
	        
	    }
	    
	    if(max!=0)
	    cout << max << endl;
	    
	    else
	    cout << -1 << endl;
	    
	    
	    
	    
	    
	    
	}
	   
	   return 0;
	   
}
