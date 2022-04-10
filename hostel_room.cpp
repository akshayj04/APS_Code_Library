#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t,n,x,i;
	
	cin >> t;
	
	while(t--)
	{
	    
	    
	    cin >> n >> x;
	    
	    vector<int> a(n);
	    vector<int> b;
	    
	    for(i=0;i<n;i++)
	    {
	        cin >> a[i];
	        
	        
	    }
	    
	    int s = x;
	    b.push_back(s);
	    
	    for(i=0;i<n;i++)
	    {
	        
	        s += a[i];
	        b.push_back(s);
	        
	        
	    }
	    
	    sort(b.begin(),b.end(),greater<int>());
	    
	    cout << b[0] << endl;
	    
	    
	    
	    
	    
	    
	}
	
	
	
	
	return 0;
}
