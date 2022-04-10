#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int hcf(int b, int c)
{
    
    if (b == c)
        return b;
  
    if (b > c)
        return hcf(b-c,c);
        
    else    
    return hcf(b,c-b);
}

int main() 
{
	
	int t,a,b,c,x;
	
	cin >> t;
	
	while(t--)
	{
	    
	    cin >> b >> c;
	    
	    x = hcf(b,c);
	    
	    cout << c/x << endl;
	    
	    
	    
	}
	
	
	
	
	
	
	return 0;
}
