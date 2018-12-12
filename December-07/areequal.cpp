#include <iostream>
#include<cmath>

using namespace std;
 const float c=0.5;
 void areequal(float a,float b)
 {
     int a1,b1;
     a1=a+c;
     b1=b+c;
     if(a1==b1)
        cout<<"true";
     else
        cout<<"false";

 }
 void areequal(float a,float b,float c)
 {
     float dif=abs(a-b);
     if(dif<c)
       cout<<"true";
      else
        cout<<"false";
 }
int main()
{   float a,b;
    cout<<"enter the two values";
    cin>>a>>b;
    areequal(a,b);
    areequal(a,b,0.2);
}
