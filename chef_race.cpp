#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	
	long int t,x,y,a,b;
	
	cin >> t;
	
	while(t--)
	{
	    long int c=0;
	    
	    cin >> x >> y >> a >> b;
	    
	    if(x!=a && x!=b)
	    c++;
	    
	    if(y!=a && y!=b)
	    c++;
	    
	    cout << c << endl;
	        
	}
	   
	   return 0;
	   
}
