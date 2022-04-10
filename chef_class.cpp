#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	
	long int t,n;
	
	cin >> t;
	
	while(t--)
	{
	    
	    
	    cin >> n;
	    
	    if(n%7==6)
	    cout << (n/7) + 1 << endl;
	    
	    else
	    cout << (n/7) << endl;
	    
	    
	}
	   
	   return 0;
	   
}
