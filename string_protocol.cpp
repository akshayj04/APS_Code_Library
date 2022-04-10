#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	
	int t,n,i,x;
	
	cin >> t;
	
	while(t--)
	{
	    string s;
	    
	    int c = 0;
	    
	    cin >> n;
	    
	    cin >> s;
	    
	    for(i=0;s[i]!='\0';i++)
	    {
	        c++;
	        
	        if(s[i]==s[i+1])
	        {
	            i++;
	        }
	        
	        
	    }
	    
	    cout << c << endl;
	    
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
