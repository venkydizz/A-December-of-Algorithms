#include<iostream>
using namespace std;
int main()
{ int a,b,n,st,ed,mid;
 cout<<"enter the maximum number";
 cin>>n;
 st=0;
 ed=n-1;

 cout<<"enter the secret number betwen 1 and 100";
 cin>>a;
 while(st<=ed)
 {
   cout<<"enter the predicted number 1 and 100";
 cin>>b;
   if(a==b){
   cout<<"correct ans";
   break;}
   else if(a<b)
   {
   cout<<"greater";
   ed=b-1;
   }
   else if(a>b)
   {
     cout<<"lower";
     st=b+1;
   }
 }
 return 0;
}

 
  return 0;
}
