#include <iostream>

using namespace std;
 int gcd(int a,int b)
 {
     if(b==0)
        return a;
     else
        gcd(b,a%b);

 }
int main()
{
    int a,b,c,lcm;
    cout<<"enter the two numbers";
    cin>>a>>b;
    c=gcd(a,b);
    lcm=(a*b)/c;
    cout<<c<<"\n"<<lcm;

    return 0;
}
