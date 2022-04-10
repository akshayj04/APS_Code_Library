#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	
	long int t,n,i,x;
	
	cin >> t;
	
	while(t--)
	{
	    long int min,max,ind_min,ind_max,temp,sum1=0,sum2=0,org_sum1=0,org_sum2=0;
	    
	    cin >> n;
	    
	    vector<int> a(n);
	    
	    for(i=0;i<n;i++)
	    {
	        cin >> x;
	        
	        a[i] = abs(x);
	    }
	    
	    for(i=0;i<n;i+=2)
	    {
	        org_sum1 += a[i];
	        
	    }
	    
	    for(i=1;i<n;i+=2)
	    {
	        org_sum2 += a[i];
	        
	    }
	    
	    
	    
	    
	    min = a[0];
	    
	    max = a[1];
	    
	    for(i=0;i<n;i+=2)
	    {
	        if(a[i]<=min)
	        {
	            min = a[i];
	            ind_min = i;
	        }
	        
	    }
	    
	    for(i=1;i<n;i+=2)
	    {
	        if(a[i]>=max)
	        {
	            max = a[i];
	            ind_max = i;
	        }
	        
	    }
	    
	    temp = a[ind_min];
	    
	    a[ind_min] = a[ind_max];
	    
	    a[ind_max] = temp;
	    
	    
	    for(i=0;i<n;i+=2)
	    {
	        sum1 += a[i];
	        
	    }
	    
	    for(i=1;i<n;i+=2)
	    {
	        sum2 += a[i];
	        
	    }
	    
	    if((org_sum1-org_sum2) > (sum1 - sum2))
	    cout << org_sum1 - org_sum2 << endl;
	    
	    else
	    cout << sum1 - sum2 << endl;
	    
	    

	}
	    
	    

	
	
	return 0;
}
