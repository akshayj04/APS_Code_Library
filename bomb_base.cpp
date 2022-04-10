#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	
	int t,n,i,c,x;
	
	cin >> t;
	
	while(t--)
	{
	    
	    cin >> n >> x;
	    
	    int index = 0;
	    
	    for(i=1;i<=n;i++)
	    {
	        cin >> c;
	        
	        if(c < x)
	        {
	            index = i;
	        }
	        
	    }
	    
	    cout << index << endl;
	    
	}
	
	
	return 0;
}
