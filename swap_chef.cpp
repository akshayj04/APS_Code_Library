#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	
	long int t,n,i;
	
	cin >> t;
	
	while(t--)
	{
	    long int c=0;
	    
	    string s,a;
	    
	    cin >> n;
	    
	    cin >> s;
	    
	    a = s.substr(0,n);
	    
	    sort(a.begin(),a.end());
	   
	    for(i=0;i<n;i++)
	    {
	        if(s[i]==a[i] || s[i]==a[n-1-i])
	        c++;
	    }
	        
	    if(c==n)
	    cout << "YES" << endl;
	        
	    else
	    cout << "NO" << endl;
	        
	        
	        
	}
	   
	   return 0;
	   
}
