#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	
	int n,i;
	
	cin >> n;
	
	while(n--)
	{
	    
	    string s,t;
	    
	    cin >> s;
	    
	    cin >> t;
	    
	    for(i=0;i<5;i++)
	    {
	        if(s[i]!=t[i])
	        cout << 'B';
	        
	        else
	        cout << 'G';
	    }
	    
	    cout << endl;
	    
	    
	    
	    
	    

	}
	    
	    

	
	
	return 0;
}
