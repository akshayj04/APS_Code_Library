#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	
	float t,x1,x2,y1,y2;
	
	cin >> t;
	
	while(t--)
	{
	    
	    cin >> x1 >> x2 >> y1 >> y2;
	    
	    if((y1/x1)<(y2/x2))
	    cout << -1 << endl;
	    
	    else if((y1/x1)>(y2/x2))
	    cout << 1 << endl;
	    
	    else
	    cout << 0 << endl;
	    
	    
	    
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
