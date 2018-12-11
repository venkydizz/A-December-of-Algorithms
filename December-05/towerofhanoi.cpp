#include <iostream>

using namespace std;
void func(int n,char a,char c,char b)
{
    if(n==1)
    {
        cout<<"\n"<<a<<"->"<<c;
        return;
    }
    func(n-1,a,b,c);
    cout<<"\n"<<a<<"->"<<c;
    func(n-1,b,c,a);
}
int main()
{
    int n;
    cout<<"enter the no of disks";
    cin>>n;
    func(n,'l','r','m');

    return 0;
}
