#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
    ll t,i;
    
    cin >> t;
    
    while(t--)
    {
        
        vector<ll> x(4);
        
        for(i=0;i<4;i++)
        {
            cin >> x[i];
        }
        
        sort(x.begin(),x.end());
        
        ll a1 = (x[2]+x[0])/2;
        ll b1 = x[2]-a1;
        ll a2 = (x[2]+x[1])/2;
        ll b2 = x[2]-a2;
        ll a3 = (x[3]+x[0])/2;
        ll b3 = x[3]-a3;
        ll a4 = (x[3]+x[1])/2;
        ll b4 = x[3]-a4;
        
        if((a1%1==0)&&(a1!=0)&&(b1%1==0)&&(b1!=0))
        {
            if((a1/b1==x[1])&&(a1*b1==x[3])&&(a1>=1)&&(a1<=10000)&&(b1>=1)&&(b1<=10000))
            {
                cout << a1 << " " << b1 << endl;
                continue;
            }
            
        }
        
        if((a2%1==0)&&(a2!=0)&&(b2%1==0)&&(b2!=0))
        {
            if((a2/b2==x[0])&&(a2*b2==x[3])&&(a2>=1)&&(a2<=10000)&&(b2>=1)&&(b2<=10000))
            {
                cout << a2 << " " << b2 << endl;
                continue;
            }
            
        }
        
        if((a3%1==0)&&(a3!=0)&&(b3%1==0)&&(b3!=0))
        {
            if((a3/b3==x[1])&&(a3*b3==x[2])&&(a3>=1)&&(a3<=10000)&&(b3>=1)&&(b3<=10000))
            {
                cout << a3 << " " << b3 << endl;
                continue;
            }
            
        }
        
        
        if((a4%1==0)&&(a4!=0)&&(b4%1==0)&&(b4!=0))
        {
            if((a4/b4==x[0])&&(a4*b4==x[2])&&(a4>=1)&&(a4<=10000)&&(b4>=1)&&(b4<=10000))
            {
                cout << a4 << " " << b4 << endl;
                continue;
            }
            
        }
        
        cout << -1 << " " << -1 << endl;
        
        
        
        
        
        
        
        
        
        
        
    }
	
	
	
	
	
	return 0;
}
