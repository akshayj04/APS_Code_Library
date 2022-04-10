#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	
	int t,x,i;
	string s;
	
	cin >> t;
	
	while(t--)
	{
	    int c=0,n=0;
	    
	    cin >> x >> ws;
	    
	    getline(cin,s);
	    
	    for(i=0;s[i]!='\0';i++)
	    {
	        
	        if(s[i]=='C')
	        c++;
	        
	        if(s[i]=='N')
	        n++;
	        
	        
	        
	        
	    }
	    
	    if(c>n)
	    cout << 60*x << endl;
	    
	    else if(c==n)
	    cout << 55*x << endl;
	    
	    else
	    cout << 40*x << endl;
	    
	    
	    
	    
	    
	    
	    
	    
	}
	
	
	
	
	
	return 0;
}
