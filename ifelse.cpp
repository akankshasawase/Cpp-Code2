#include<iostream>
using namespace std;

int main()
{
    int x,y,z;
    cout<<"enter a value for x="<<endl;
    cin>>x;
    cout<<"enter a value for y="<<endl;
    cin>>y;
    cout<<"enter a value for z="<<endl;
    cin>>z;
    if(x<y)
    {
        if(y<z){
            cout<<"\n z is greater than all";
        }
        else{
            cout<<"\n y is greater than all";
        }
    }else{
            cout<<"\n x is greater than all";
        }


    return 0;
}
