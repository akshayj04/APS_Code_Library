#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	
	long int t,n,i,j,x;
	
	cin >> t;
	
	while(t--)
	{
	    
	    long int sum = 0, c = 0;
	    
	    cin >> n;
	    
	    vector<long int> a(n);
	    
	    vector<long int> b;
	    
	    
	    for(i=0;i<n;i++)
	    {
	        cin >> x;
	        sum += x;
	        a[i] = x;
	        
	    }
	    
	    for(i=0;i<n;i++)
	    {
	       c += a[i];
	       
	       if(c > sum-c)
	       b.push_back(c);
	       
	       else
	       b.push_back(sum-c);
	        
	    }
	    
	    sort(b.begin(),b.end());
	    
	    cout << b.front() << endl;
	    
	    
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
