#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	
	int t,n,i,j;
	
	cin >> t;
	
	
	
	
	
	while(t--)
	{
	    
	    
	    cin >> n;
	    
	    vector<unsigned long long int> a;
	    
	    a.clear();
	    a.reserve(n);
	    
	    
	    int fo=-1,so=-1,fz=-1,sz=-1;
	    
	    bool flag = false;
	    
	    for(i=0;i<n;i++)
	    {
	        long long int temp;
	        cin >> temp;
	        
	        if(temp%2)
	        a.push_back(1);
	        else
	        a.push_back(0);
	        
	        if(a[i]==1 && fo==-1)
	        {
	            fo = i;
	        }
	        
	        else if(a[i]==1 && fo!=-1 && so==-1)
	        {
	            so = i;
	        }
	        
	        else if(a[i]==0 && fz==-1)
	        {
	            fz = i;
	        }
	        
	        else if(a[i]==0 && fz!=-1 && sz==-1)
	        {
	            sz = i;
	        }
	    }
	        
	        vector<int> fi;
	        vector<int> si;
	        fi.reserve(n);
	        si.reserve(n);
	        
	        vector<int> not_alter_index1;
	        vector<int> not_alter_index2;
	        not_alter_index1.reserve(n);
	        not_alter_index2.reserve(n);
	        
	        for(j=0;j<n;j++)
	        {
	           
	           if(j%2==0 && a[j]==0)
	           {
	               
	           }
	           
	           else if(j%2==1 && a[j]==1)
	           {
	               not_alter_index1.push_back(j);
	           }
	           
	           else
	           {
	               fi.push_back(j);
	           }
	            
	            
	            
	            
	            
	            
	            
	        }
	        
	        
	        for(j=0;j<n;j++)
	        {
	           
	           if(j%2==1 && a[j]==0)
	           {
	               
	           }
	           
	           else if(j%2==0 && a[j]==1)
	           {
	               not_alter_index2.push_back(j);
	           }
	           
	           else
	           {
	               si.push_back(j);
	           }
	            
	            
	            
	            
	            
	            
	            
	        }
	        
	        
	        
	       vector<int> ans_a;
	       ans_a.reserve(n);
	       
	       if(fi.size()<si.size())
	       {
	           for(j=0;j<fi.size();j++)
	           {
	               if(not_alter_index1.size()==0)
	               {
	                   flag = true;
	                   cout << -1 << endl;
	                   break;
	               }
	               
	               else
	               {
	                   ans_a.push_back(fi[j]+1);
	                   ans_a.push_back(not_alter_index1[0]+1);
	                   
	                   
	                   
	               }
	           }
	       }
	       
	       else
	       {
	           for(j=0;j<si.size();j++)
	           {
	               if(not_alter_index2.size()==0)
	               {
	                   flag = true;
	                   cout << -1 << endl;
	                   break;
	               }
	               
	               else
	               {
	                   ans_a.push_back(si[j]+1);
	                   ans_a.push_back(not_alter_index2[0]+1);
	                   
	                   
	                   
	               }
	           }
	       }
	        
	        if(!flag)
	        {
	            cout << ans_a.size()/2 << endl;
	            for(i=0;i<ans_a.size();i=i+2)
	            {
	                cout << ans_a[i] << " " << ans_a[i+1] << endl;
	            }
	            
	            
	        }
	        
	        
	        
	        
	    
	    
	    
	   
	   
	            
	            
	     
	    
	    
	    
	}
	
	
	
	
	return 0;
}
