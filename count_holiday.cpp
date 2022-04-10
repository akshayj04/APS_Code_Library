#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	
	int t,n,i,x;
	
	cin >> t;
	
	while(t--)
	{
	    int c = 8;
	    
	    cin >> n;
	    
	    for(i=0;i<n;i++)
	    {
	        cin >> x;
	        
	        if(x%7!=0 && x%7!=6)
	        c++;
	        
	        
	    }
	    
	    cout << c << endl;
	    
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
