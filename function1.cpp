#include<iostream>
using namespace std;
void Add(int a, int b);
void Sub(int x, int y);
int main()
{
    int a,b;
    cout<<"Enter a value for a and b:";
    cin >>a>>b;
    Add(a,b);
    Sub(a,b);
    return 0;

}
void Add(int a,int b)
{
    int c;
    c=a+b;
    cout<<c<<endl;
}
void Sub(int x,int y)
{
    int z;
    z=x-y;
    cout<<z<<endl;
}
