#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{
	int t,n,k,i,j;
	
	cin >> t;
	
	while(t--)
	{
	    
	    
	    
	    string s;
	    
	    
	    cin >> n >> k >> ws;
	    
	    
	    getline(cin,s);
	    
	   
	    if(n%2==0) // even
	    {
	       
	        int f=0;
	        
	        for(i=0;i<n/2;i++)
	        {
	            if(s[i]!=s[n-1-i])
	            {
	                if(s[i]=='1')
	                s[i]='0';
	                
	                else
	                s[i]='1';
	                
	                f++;
	            }
	            
	            
	            
	            
	       }
	       
	       if(f>k)
	       cout << "NO" << endl;
	       
	       else if((k-f)%2==0)
	       cout << "YES" << endl; 
	       
	       else
	       cout << "NO" << endl;
	        
	        
	            
	   }
	    
	    
	    
	    
	    
	    
	    
	    if(n%2!=0) // odd
	    {
	        
	        
	        int f=0;
	        
	        for(i=0;i<n/2;i++)
	        {
	            if(s[i]!=s[n-1-i])
	            {
	                if(s[i]=='1')
	                s[i]='0';
	                
	                else
	                s[i]='1';
	                
	                f++;
	            }
	            
	            
	            
	            
	       }
	       
	       if(f>k)
	       cout << "NO" << endl;
	       
	       else
	       cout << "YES" << endl;
	       
	        
         }
	    
	    
	    
	    
	    
	    
	    
	    
	    
	    
	    
	    
	    
	    
	    
	    
	}
	
	
	
	return 0;
	
}
