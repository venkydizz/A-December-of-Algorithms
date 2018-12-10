#include <iostream>

using namespace std;

int main()
{
   int t,a[100],i=0,j,n,sum1,sum2;
   cout<<"enter the ticket number";
   cin>>t;
   while(t>0)
   {
       a[i]=t%10;
       t=t/10;
       i++;
      
   }
   n=i;
   for(j=0;j<n/2;j++)
   {
       sum1+=a[j];
       
   }
   for(j=n/2;j<n;j++)
   {
       sum2+=a[j];
   }
if(sum1==sum2)
{
    cout<<"lucky";
}
else
{
    cout<<"not lucky";
}
    return 0;
}
