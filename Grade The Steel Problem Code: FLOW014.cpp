#include <iostream>
using namespace std;

int main() {
float A[3],B[3];
int T,N,i;
float K;
	cin>>T;
    for(i=0;i<T;i++)
        {

	    B[0]=0;
	    B[1]=0;
	    B[2]=0;
	   for(N=0;N<3;N++)
	   {
    	cin>>A[N];
	   }
	   
	   if(A[0]>50)
	   {
	    B[0]=1;    
	   }
	   if(A[1]<0.7)
	   {
	    B[1]=1;    
	   }
	   if(A[2]>5600)
	   {
	    B[2]=1;    
	   }
	   

	   if(B[0] == 1 && B[1] == 1 && B[2] == 1)
	    {
	       	   cout<<10<<"\n"; 
	    }   
	    else if(B[0] == 1 && B[1] == 1)
	    {
	       	   cout<<9<<"\n"; 
	    } 
	    else if(B[1] == 1 && B[2] == 1)
	    {
	       	   cout<<8<<"\n"; 
	    } 
	    else if(B[0] == 1 && B[2] == 1)
	    {
	       	   cout<<7<<"\n"; 
	    }
	    else if(B[0] == 1 || B[1] == 1 || B[2] == 1)
	    {
	       	   cout<<6<<"\n"; 
	    }
	    else
	    {
	       	   cout<<5<<"\n"; 
	    } 
	    
	   
	   
	}
		return 0;
}
