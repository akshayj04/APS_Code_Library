#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	
	int t,n,c,i,x;
	
	cin >> t;
	
	while(t--)
	{
	    
	    int c = 0;
	    
	    cin >> n;
	    
	    for(i=0;i<n;i++)
	    {
	        cin >> x;
	        
	        if(x>=10 && x<=60)
	        c++;
	        
	        
	    }
	    
	    
	    cout << c << endl;
	    
	    
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
