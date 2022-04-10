#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	
	int t,n,i;
	
	cin >> t;
	
	while(t--)
	{
	    
	    int c = 1;
	    
	    cin >> n;
	    
	    vector<char> a(n);
	    
	    for(i=0;i<n;i++)
	    {
	        cin >> a[i];
	    }
	    
	 
	    
	    for(i=1;i<n;i++)
	    {
	        if(a[i]!=a[i-1])
	        c++;
	    }
	    
	    cout << c << endl;
	    
	    
	}
	
	
	
	
	
	
	return 0;
}
