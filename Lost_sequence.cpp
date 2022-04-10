#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t,n,i;
    
    cin >> t;
    
    while(t--)
    {
        cin >> n;
        
        vector<int> a(2*n);
        
        int s = 0;
        
        for(i=0;i<2*n;i++)
        {
            cin >> a[i];
            
            s += a[i];
            
            
        }
        
        if(s%2==0)
        cout << "YES" << endl;
        
        else
        cout << "NO" << endl;
        
        
        
        
    }
	
	return 0;
}
