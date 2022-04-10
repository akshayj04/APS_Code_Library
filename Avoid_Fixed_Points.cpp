#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	
	int t,n,i,x;
	
	cin >> t;
	
	while(t--)
	{
	    int c = 0;
	    vector<int> a;
	    
	    cin >> n;
	    
	    for(i=0;i<n;i++)
	    {
	        
	        cin >> x;
	        
	        if(x!=i+1)
	        {
	            a.push_back(x);
	        }
	        
	        else
	        {
	            a.push_back(0);
	            c++;
	            a.push_back(x);
	            i++;
	            n++;
	            
	            
	            
	        }
	        
	        
	        
	        
	        
	    }
	    
	    cout << c << endl;
	    
	    
	    
	    
	}
	
	
	
	
	
	return 0;
}
