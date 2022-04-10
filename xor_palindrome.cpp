#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	long int t,n,i;
	
	cin >> t;
	
	while(t--)
	{
	    
	    long int one = 0, zero = 0;
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
	    
	    if(n%2!=0)
	    cout << "YES" << endl;
	    
	    else
	    {
	            if(n==2)
	            cout << "YES" << endl;
	        
	            else if(zero%2!=0&&zero!=n/2)
	            cout << "NO" << endl;
	            
	            else
	            cout << "YES" << endl;
	            
	            
	   }
	    
	   
	    
	    
	    
	    
	    
	}
	
	
	
	
	
	
	
	return 0;
}
