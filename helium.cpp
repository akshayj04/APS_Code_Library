#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	
	int t,a,b,x,y;
	
	cin >> t;
	
	while(t--)
	{
	    cin >> a >> b >> x >> y;
	    
	    if((x*y)>=(a*b))
	    cout << "Yes" << endl;
	    
	    else
	    cout << "No" << endl;
	    
	    
	    
	}
	
	
	
	return 0;
}
