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
    string output=(x<y)?"\n y is greater than all":"\n x is greater than all";
    cout<<output<<endl;
    string output1=(x<y)?(y<z)?"\n z is greater than all":"\n y is greater than all":"\n x is greater than all";
    cout<<output1<<endl;
    return 0;

 }
