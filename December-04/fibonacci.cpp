#include <iostream>

using namespace std;

int main()
{
   int n,a[100],i;
   a[0]=0;a[1]=1;
   cout<<"enter the nth number";
   cin>>n;
 
   for(i=2;i<n;i++)
   {
   a[i]=a[i-1]+a[i-2];
   
   }
   cout<<a[n-1];
   
    return 0;
    
}
