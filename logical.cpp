#include<iostream>
using namespace std;

 int main()
 {
 int x,y,z;
 x=10;
 y=20;
 z=40;
 bool m;
 m=(x>y)&&(x>z);
 cout<<"result is:"<<m<<endl;
 m=(x<y)||(x<z);
 cout<<"result is:"<<m<<endl;
 /*m=(x<y)|=(x>z);
 cout<<"result is:"<<m;*/
 return 0;

 }
